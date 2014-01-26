#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <SOIL.h>
#include <GL/glut.h>

#include "rumah.h"
#include "pohon.h"
#include "kincir.h"
#include "besimain.h"


float z_pos = -5.0f;
float y_pos = -5.0f;
float x_pos = -5.0f;
float xRot, yRot, zRot, sudutk;
float rot = 0.0f;

GLfloat LightAmbient[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat LightDiffuse[] = {0.2f, 0.2f, 0.2f, 1.0f};
GLfloat LightPosition[] = {0.0f, 2.0f, 0.0f, 0.0f};


// penyimpanan 1 texture
GLuint tex_2d,txTop,txBottom,txFront,txBack,txLeft,txRight;
/* penyimpanan 1 texture  */
//GLuint texture[1];
void init();
void myKeyboard(int key, int x, int y);
void Keyboard(unsigned char key, int x, int y);
void myDisplay(void);
void myTimeOut(int);
void resize(int, int);

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    //glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(1360, 768);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("PEMANDANGAN");
    glutFullScreen();                       
    glutDisplayFunc(myDisplay);
    glutIdleFunc(myDisplay);
    glutSpecialFunc(myKeyboard);
    glutKeyboardFunc(Keyboard);
    glutReshapeFunc(resize);
    glutTimerFunc(100, myTimeOut, 0);
    init();
    glutMainLoop();
    return 0;
}


GLuint LoadGLTextures()
{
    /* load file image */
    tex_2d = SOIL_load_OGL_texture("img/grass.jpg", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
    txTop = SOIL_load_OGL_texture ("img/sky.jpg",SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
    //txBottom = SOIL_load_OGL_texture (BOTTOM,SOIL_LOAD_RGB,SOIL_CREATE_NEW_ID,0);
    txFront = SOIL_load_OGL_texture ("img/sky.jpg", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
    //txBack = SOIL_load_OGL_texture (BACK,SOIL_LOAD_RGB,SOIL_CREATE_NEW_ID,0);
    //txLeft = SOIL_load_OGL_texture (LEFT,SOIL_LOAD_RGB,SOIL_CREATE_NEW_ID,0);
    //txRight = SOIL_load_OGL_texture (RIGHT,SOIL_LOAD_RGB,SOIL_CREATE_NEW_ID,0);
    /* pengecekan eror */
    if(tex_2d == 0)
    {
        printf( "kesalahan load pada file SOIL : '%s'\n", SOIL_last_result() );
    }
    
    if (txFront == 0) 
    {
       printf( "kesalahan load pada file SOIL : '%s'\n", SOIL_last_result() );
    }
    if (txTop == 0) 
    {
       printf( "kesalahan load pada file SOIL : '%s'\n", SOIL_last_result() );
    }
    
    // menentukan tipe texture dari image 
        glBindTexture(GL_TEXTURE_2D, tex_2d);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);                                     
}

void init()
{
    LoadGLTextures();
    //glEnable(GL_TEXTURE_2D);
    glShadeModel(GL_SMOOTH);
    glClearColor(0.0f, 0.7f, 0.9f, 0.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    glLightfv(GL_LIGHT0, GL_AMBIENT, LightAmbient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, LightDiffuse);
    glLightfv(GL_LIGHT0, GL_POSITION, LightPosition);
    glEnable(GL_LIGHT0);

}

void myKeyboard(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_LEFT : 
             x_pos -= 2.0f;
             y_pos -= 2.0f;
             z_pos -= 2.0f;
             yRot -= 2.0f;
             x_pos += 2.0f;
             y_pos += 2.0f;
             z_pos += 2.0f;
             break;
        
        case GLUT_KEY_RIGHT : 
             x_pos -= 2.0f;
             y_pos -= 2.0f;
             z_pos -= 2.0f;
             yRot += 2.0f;
             x_pos += 2.0f;
             y_pos += 2.0f;
             z_pos += 2.0f;
             break;
        case GLUT_KEY_UP : 
             xRot += 1.0f;
             break;
        case GLUT_KEY_DOWN : xRot -= 1.0f;break;
    }
}


void Keyboard(unsigned char key, int x, int y)
{
     switch(key)
     {
        case 'w':
             z_pos += 0.5f;
                break;
        case 's':
                z_pos -= 0.5f;
                break;
        case 'a':
             x_pos += 0.5f;
             break;
        case 'd':
                x_pos -= 0.5f;
                break;
        case ',':
                y_pos -= 0.5f;
                break;
        case '.':
                y_pos += 0.5f;
                break;
        case 27:
                exit(0);
                break;
        default:
                break;
    }
}


void kipas()
{
     //Kipas
    glPushMatrix();
    glTranslatef(0.0, 23.0, 6.5);
    glColor4f(0.5, 0.5, 0.5, 1.0);
    glScalef(2.15, 2.0, 0.55);
	glRotatef(sudutk, 0.0f, 0.0f, 1.0f);
    glutWireTorus(1, 5, 10, 15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 23.0, 6.5);
    glColor4f(0.5, 0.5, 0.5, 1.0);
    glScalef(1.15, 1.0, 0.55);
	glRotatef(sudutk, 0.0f, 0.0f, 1.0f);
    glutWireTorus(1, 5, 10, 15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 23.0, 6.5);
    glColor4f(0.5, 0.5, 0.5, 1.0);
    glScalef(0.55, 0.5, 0.55);
	glRotatef(sudutk, 0.0f, 0.0f, 1.0f);
    glutWireTorus(1, 5, 10, 15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 23.0, 6.5);
    glColor4f(0.5, 0.5, 0.5, 1.0);
    glScalef(3.15, 3.0, 0.55);
	glRotatef(sudutk, 0.0f, 0.0f, 1.0f);
    glutWireTorus(1, 5, 10, 15);
    glPopMatrix();
}
//PUTAR KIPAS
void putar()
{
    sudutk += 0.1f;
    if (sudutk > 360){
        sudutk -= 360;
    }

    //glutPostRedisplay();
    //glutTimerFunc(100, putar, 0);
}

void home()
{

    //kincir bodi
    glPushMatrix();
     glScalef(0.1, 0.1, 0.1);
     glTranslatef(65.0, 18.0, -250.0);
     glRotatef(90, 0.0, 1.0, 0.0);
     kincir();
     kipas();
     putar();
    glPopMatrix();


    
    //rumah
    glPushMatrix();
      glTranslatef(0.5, 0.0, -20.0); 
      glScalef(0.5, 0.5, 0.5);
      rumah();
    glPopMatrix();
    
    //pohon3
glPushMatrix();
  glTranslatef(5.5,0.0,-20.0);    
  glScalef(0.05, 0.05, 0.05);
  glRotatef(90,0,1,0);

  pohon();

  //ranting1
  ranting();

  //ranting2
  glPushMatrix();
  glScalef(1.5, 1.5, 1.5);
  glTranslatef(0,25,25);   
  glRotatef(250,1,0,0);
  ranting();
  glPopMatrix();

  //ranting3
  glPushMatrix();
  glScalef(1.8, 1.8, 1.8);
  glTranslatef(0,-6,21.5);   
  glRotatef(-55,1,0,0);
  ranting();
  glPopMatrix();
glPopMatrix();

glPushMatrix();
  glTranslatef(-2.3f,0,-29);
  BesiMain();
glPopMatrix();

glPushMatrix();
  glTranslatef(-2.3f,0,-26);
  BesiMain();
glPopMatrix();
}

void myDisplay(void)
{
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glLoadIdentity();
    glTranslatef(x_pos, y_pos, z_pos);
    glRotatef(xRot,1.0f,0.0f,0.0f); 
    glRotatef(yRot,0.0f, 1.0f,0.0f);
    glEnable(GL_DEPTH_TEST);//kedalaman
	glEnable(GL_LIGHTING);//cahaya
    glEnable(GL_LIGHT0);//lampu
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);//warna

    //glRotatef(zRot,0.0f,0.0f,1.0f); 
    glEnable(GL_BLEND);               // enable BLENDING 
    glColor3f(1.0, 1.0, 1.0);          // Set warna BLENDING 
glEnable(GL_TEXTURE_2D);
glPushMatrix();
glBindTexture(GL_TEXTURE_2D, tex_2d);
glTranslatef(5.5,0.0,-20.0); 
        glBegin(GL_QUADS);
            //// depan
//            glNormal3f( 0.0f, 0.0f, 1.0f);
//            glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f, -1.0f, 1.0f);
//            glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f, -1.0f, 1.0f);
//            glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f,  1.0f, 1.0f);
//            glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f,  1.0f, 1.0f);
//            // belakang
//            glNormal3f( 0.0f, 0.0f,-1.0f);
//            glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f, -1.0f, -1.0f);
//            glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f,  1.0f, -1.0f);
//            glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f,  1.0f, -1.0f);
//            glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f, -1.0f, -1.0f);
            // atas
            glNormal3f( 0.0f, 1.0f, 0.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-100,  0.005f, -100);
            glTexCoord2f(0.0f, 0.0f); glVertex3f(-100,  0.005f,  100);
            glTexCoord2f(1.0f, 0.0f); glVertex3f( 100,  0.005f,  100);
            glTexCoord2f(1.0f, 1.0f); glVertex3f( 100,  0.005f, -100);
            //// bawah
//            glNormal3f( 0.0f,-1.0f, 0.0f);
//            glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f, -1.0f, -1.0f);
//            glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f, -1.0f, -1.0f);
//            glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f, -1.0f,  1.0f);
//            glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f, -1.0f,  1.0f);
//            // kanan
//            glNormal3f( 0.3f, 0.0f, 0.0f);
//            glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.3f, -0.3f, -0.3f);
//            glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.3f,  0.3f, -0.3f);
//            glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.3f,  0.3f,  0.3f);
//            glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.3f, -0.3f,  0.3f);
//            // kiri
//            glNormal3f(-0.3f, 0.0f, 0.0f);
//            glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.3f, -0.3f, -0.3f);
//            glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.3f, -0.3f, 0.3f);
//            glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.3f, 0.3f, 0.3f);
//            glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.3f, 0.3f, -0.3f);
        glEnd();
glPopMatrix();
glDisable(GL_TEXTURE_2D);

//SkyBox
glEnable(GL_TEXTURE_2D);
  glPushMatrix();
  
 // glTranslatef(5.5,0.0,-20.0);
 glBindTexture(GL_TEXTURE_2D, txFront);
        glBegin(GL_QUADS);
            // depan
             
            glNormal3f( 0.0f, 0.0f, 1.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex3f(-50.0f, -50.0f, 50.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex3f( 50.0f, -50.0f, 50.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex3f( 50.0f,  50.0f, 50.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-50.0f,  50.0f, 50.0f);
            // belakang
            //glNormal3f( 0.0f, 0.0f,-1.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex3f(-50.0f, -50.0f, -50.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex3f(-50.0f,  50.0f, -50.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f( 50.0f,  50.0f, -50.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex3f( 50.0f, -50.0f, -50.0f);
        glEnd();
            // atas
        glBindTexture(GL_TEXTURE_2D, txTop);
        glBegin(GL_QUADS);            
            //glNormal3f( 0.0f, 1.0f, 0.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-50,  50.0f, -50);
            glTexCoord2f(0.0f, 0.0f); glVertex3f(-50,  50.0f,  50);
            glTexCoord2f(1.0f, 0.0f); glVertex3f( 50,  50.0f,  50);
            glTexCoord2f(1.0f, 1.0f); glVertex3f( 50,  50.0f, -50);
        glEnd();
        
        glBegin(GL_QUADS);
            // bawah
            glNormal3f( 0.0f,-1.0f, 0.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex3f(-50.0f, -50.0f, -50.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f( 50.0f, -50.0f, -50.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex3f( 50.0f, -50.0f,  50.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex3f(-50.0f, -50.0f,  50.0f);
            // kanan
            glNormal3f( 0.3f, 0.0f, 0.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex3f( 50.0f, -50.0f, -50.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex3f( 50.0f,  50.0f, -50.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f( 50.0f,  50.0f,  50.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex3f( 50.0f, -50.0f,  50.0f);
            // kiri
            glNormal3f(-0.3f, 0.0f, 0.0f);
            glTexCoord2f(0.0f, 0.0f); glVertex3f(-50.0f, -50.0f, -50.0f);
            glTexCoord2f(1.0f, 0.0f); glVertex3f(-50.0f, -50.0f, 50.0f);
            glTexCoord2f(1.0f, 1.0f); glVertex3f(-50.0f, 50.0f, 50.0f);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-50.0f, 50.0f, -50.0f);
        glEnd();
glPopMatrix();

glDisable(GL_TEXTURE_2D);

home();
int i;
for(i=10;i<=40;i+=10)
{
glPushMatrix();
  glTranslatef(i,0,0);
  home();
glPopMatrix();
}

for(i=-40;i<=0;i+=10)
{
glPushMatrix();
  glTranslatef(i,0,0);
  home();
glPopMatrix();
}
  
  glFlush();
        //xRot+=0.1f;                 
//        yRot+=0.1f;                 
//        zRot+=0.1f;  
//        sudutk+= 1.0f;               
  glutSwapBuffers();
}

void myTimeOut(int id)
{
    rot += 5.0f;
    glutPostRedisplay();
    glutTimerFunc(100, myTimeOut, 0);
}


void resize(int width, int height)
{
    glViewport(1, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (GLdouble)width / (GLdouble)height, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


