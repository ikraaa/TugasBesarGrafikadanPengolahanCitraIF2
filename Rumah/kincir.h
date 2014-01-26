//KINCIR
void kincir()
{   //Lantai
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, -15.0, 0.0);
	glScalef(4.0, 1.09, 2.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Atap1
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 0.0, 0.0);
	glScalef(3.0,0.09,1.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Atap2
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, -7.0, 0.0);
	glScalef(3.0,0.09,1.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Atap3
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 7.0, 0.0);
	glScalef(3.0,0.09,1.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Atap4
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 14.0, 0.0);
	glScalef(3.0,0.09,1.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Atap5
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 1.0);
    glTranslatef(0.0, 21.0, 0.0);
	glScalef(3.0,0.09,1.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Generator
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 22.0, 0.0);
	glScalef(2.0,0.59,1.0);
	glutSolidCube(6.0f);
    glPopMatrix();
    
    /*//Listrik Bawah
    glPushMatrix();
    glColor4f(1.8, 0.8, 0.8, 0.8);
    glTranslatef(-1.0, 26.0, 0.0);
	glScalef(0.1,0.1,0.1);
	glutSolidSphere(5, 20, 30);
    glPopMatrix();
    //Listrik Tengah
    glPushMatrix();
    glColor4f(1.8, 0.8, 0.8, 0.8);
    glTranslatef(-1.0, 27.0, 0.0);
	glScalef(0.1,0.1,0.1);
	glutSolidSphere(5, 20, 30);
    glPopMatrix();
    //Listrik Atas
    glPushMatrix();
    glColor4f(1.8, 0.8, 0.8, 0.8);
    glTranslatef(-1.0, 28.0, 0.0);
	glScalef(0.1,0.1,0.1);
	glutSolidSphere(5, 20, 30);
    glPopMatrix();
    */

    //Pemutar Depan
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 23.0, 4.0);
	glScalef(0.2,0.09,1.0);
	glutSolidCube(6.0f);
    glPopMatrix();
    //Bulatan
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 23.0, 6.5);
	glScalef(0.2,0.2,0.2);
	glutSolidSphere(5, 20, 30);
    glPopMatrix();
    //Pemutar Belakang
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 22.0, -10.0);
	glScalef(0.2,0.59,0.5);
	glutSolidCube(6.0f);
    glPopMatrix();

    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(0.0, 22.0, -5.0);
	glScalef(0.2,0.19,1.7);
	glutSolidCube(6.0f);
    glPopMatrix();

    glPushMatrix();
    glColor4f(1.0, 1.8, 0.8, 0.8);
    glTranslatef(0.0, 22.0, -10.0);
    glScalef(0.8, 0.1, 0.5);
    glutSolidCube(6.0f);
    glPopMatrix();

    //Tiang Kiri Depan
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(-7.5, 0.0, 2.5);
	glScalef(0.15,7.0,0.25);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Tiang Kiri Belakang
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(-7.5, 0.0, -2.5);
	glScalef(0.15,7.0,0.25);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Tiang Kanan Depan
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(7.5, 0.0, 2.5);
	glScalef(0.15,7.0,0.25);
	glutSolidCube(6.0f);
    glPopMatrix();

    //Tiang Kanan Belakang
    glPushMatrix();
    glColor4f(0.8, 0.8, 0.8, 0.8);
    glTranslatef(7.5, 0.0, -2.5);
	glScalef(0.15,7.0,0.25);
	glutSolidCube(6.0f);
    glPopMatrix();
}



