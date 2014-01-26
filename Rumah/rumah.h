void rumah(void) {
   //atap
    glPushMatrix();
       glScaled(0.8, 1.0, 0.8);
       glTranslatef(0.0, 4.85, -1.9);
       glRotated(45, 0, 1, 0);
       glRotated(-90, 1, 0, 0);
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3d(0.803921568627451, 0.5215686274509804, 0.2470588235294118);
       glutSolidCone(4.2, 1.5, 4, 1);
    glPopMatrix();
  
   //atap
    glPushMatrix();
        glScaled(0.8, 1.0, 0.8);
        glTranslatef(0.0, 4.85, 2.1);
        glRotated(45, 0, 1, 0);
        glRotated(-90, 1, 0, 0);
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3d(0.803921568627451, 0.5215686274509804, 0.2470588235294118);
        glutSolidCone(4.2, 1.5, 4, 1);
    glPopMatrix();
  

   //lantai 1  
    glPushMatrix();
        glScaled(1.115, 0.03, 2.2);
        glTranslatef(0.0, 0, 0.0);
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.3402, 0.3412, 0.3117);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //lantai 2 depan
    glPushMatrix();
        glScaled(1.015, 0.03, 1.2);
        glTranslatef(0.0,80, 1.7);
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //lantai 2 belakang
    glPushMatrix();
        glScaled(0.5, 0.03, 0.8);
        glTranslatef(2.5,80, -2.8);
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //lantai 3 
    glPushMatrix();
        glScaled(1.015, 0.03, 1.8);
        glTranslatef(0.0,160, 0.3);
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.3402, 0.3412, 0.3117);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    
  //Dinding Kiri Bawah
    glPushMatrix();
        glScaled(0.035, 0.5, 1.6);
        glTranslatef(-70.0, 2.45, 0.0);   
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);
        glutSolidCube(5.0);
    glPopMatrix();
  
  //Dinding Kanan Bawah
    glPushMatrix();
        glScaled(0.035, 0.5, 1.6);
        glTranslatef(70.0, 2.45, 0.0);  
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);  
        glutSolidCube(5.0);
    glPopMatrix();
  
//Dinding Kiri Atas
    glPushMatrix();
        glScaled(0.035, 0.5, 1.8);
        glTranslatef(-70.0, 7.45, 0.3);   
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174); 
        glutSolidCube(5.0);
    glPopMatrix();
  
//Dinding Kanan Atas
    glPushMatrix();
        glScaled(0.035, 0.5, 1.8);
        glTranslatef(70.0, 7.45, 0.3); 
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);  
        glutSolidCube(5.0);
    glPopMatrix();  
   
  //Dinding Belakang bawah
    glPushMatrix();
        //glScaled(0.035, 0.5, 0.8);
        glScaled(1.015, 0.5, 0.07);
        glTranslatef(0, 2.45,-58);  
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);  
        glutSolidCube(5.0);
    glPopMatrix();
    
  //Dinding Belakang atas
    glPushMatrix();
        //glScaled(0.035, 0.5, 0.8);
        glScaled(1.015, 0.5, 0.07);
        glTranslatef(0, 7.45,-58);  
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);  
        glutSolidCube(5.0);
    glPopMatrix();
    
    
    

  //Dinding Depan bawah
    glPushMatrix();
        glScaled(1.015, 0.5, 0.035);
        glTranslatef(0, 2.45,116); 
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);   
        glutSolidCube(5.0);
    glPopMatrix();

  //Dinding Depan atas
    glPushMatrix();
        glScaled(1.015, 0.5, 0.035);
        glTranslatef(0, 7.45,116);  
        //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.4613, 0.4627, 0.4174);  
        glutSolidCube(5.0);
    glPopMatrix();

  //list hitam atas
    glPushMatrix();
        glScaled(0.35, 0.5, 0.035);
       glTranslatef(1, 7.2,124); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.1412, 0.1389, 0.1356);
        glutSolidCube(5.0);
    glPopMatrix();

  //list hitam atas
    glPushMatrix();
        glScaled(0.35, 0.43, 0.035);
       glTranslatef(1, 3.5,124); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.1412, 0.1389, 0.1356);
        glutSolidCube(5.0);
    glPopMatrix();

    //pintu atas
    glPushMatrix();
        glScaled(0.18, 0.35, 0.035);
       glTranslatef(-8, 9.5,118); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.0980, 0.0608, 0.0077);
        glutSolidCube(5.0);
    glPopMatrix();   
    
  //pintu bawah
    glPushMatrix();
        glScaled(0.18, 0.35, 0.035);
       glTranslatef(-8, 2.5,118); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
        glColor3f(0.0980, 0.0608, 0.0077);
        glutSolidCube(5.0);
    glPopMatrix();
    
   //alis
    glPushMatrix();
    glScaled(0.18, 0.017, 0.035);
   glTranslatef(-8, 110.5,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0, 0, 0);
    glutSolidCube(5.0);
    glPopMatrix();
    
   //alis atas kiri
    glPushMatrix();
        glScaled(0.18, 0.017, 0.035);
       glTranslatef(-8, 254,118); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         //glColor3f(0.3402, 0.3412, 0.3117);
         glColor3f(0, 0, 0);
        glutSolidCube(5.0);
    glPopMatrix();
    
   //alis atas kanan
    glPushMatrix();
    glScaled(0.10, 0.017, 0.035);
   glTranslatef(18, 254,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3f(0, 0, 0);
    glutSolidCube(5.0);
    glPopMatrix();    
 
   //alis jedela atas
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(22.5, 245,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();      
  
    //alis jedela bawah
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(22.5, 165,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();     
  
    //alis jedela kiri
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(96.6, 12.5,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();   
   
    //alis jedela kanan
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(115.1, 12.5,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();
    
//jendela bawah (kanan Bawah)
   //alis atas kanan (kanan Bawah)
    glPushMatrix();
    glScaled(0.10, 0.017, 0.035);
   glTranslatef(18, 110.5,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3f(0, 0, 0);
    glutSolidCube(5.0);
    glPopMatrix();  
    
//alis jedela atas (kanan Bawah)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(22.5, 101.5,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();      
  
    //alis jedela bawah (kanan Bawah)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(22.5, 22.0,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();     
  
    //alis jedela kiri (kanan Bawah)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(96.6, 3.8,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();   
   
    //alis jedela kanan (kanan Bawah)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(115.1, 3.8,118); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix();    
    
//alis jedela atas (tengah1)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(0, 119.5,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();  
    
    //alis jedela bawah (tengah1)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(0, 40.0,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();     
  
    //alis jedela kiri (tengah1)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(-9.6, 4.8,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();   
   
    //alis jedela kanan (tengah1)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(9.5, 4.8,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix(); 

//alis jedela atas (tengah2)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(9, 119.5,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();  
    
    //alis jedela bawah (tengah2)
    glPushMatrix();
    glScaled(0.08, 0.017, 0.035);
   glTranslatef(9, 40.0,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();     
  
    //alis jedela kiri (tengah2)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(33, 4.8,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();   
   
    //alis jedela kanan (tengah2)
    glPushMatrix();
    glScaled(0.017,0.28, 0.035);
   glTranslatef(51.7, 4.8,128); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();     
    
    
    
   //alis tiang kiri atas orange
    glPushMatrix();
    glScaled(0.06, 0.037, 0.095);
   glTranslatef(-41, 115,51.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();
        
   //alis tiang kiri bawah orange
    glPushMatrix();
    glScaled(0.06, 0.037, 0.095);
   glTranslatef(-41, 80,51.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();     

    //alis tiang kanan atas orange
    glPushMatrix();
    glScaled(0.06, 0.037, 0.095);
   glTranslatef(41, 115,51.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();
    
   //alis tiang kanan bawah orange
    glPushMatrix();
    glScaled(0.06, 0.037, 0.095);
   glTranslatef(41, 80,51.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();      

    //orange 3 di tengah
    glPushMatrix();
    glScaled(0.017,0.33, 0.035);
   glTranslatef(-16.6, 12,125); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();     

    //orange 3 di tengah
    glPushMatrix();
    glScaled(0.017,0.33, 0.035);
   glTranslatef(-6.6, 12,125); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();  
    
//orange 3 di tengah
    glPushMatrix();
    glScaled(0.017,0.33, 0.035);
   glTranslatef(3.6, 12,125); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();  

    //pagar atas 1
    glPushMatrix();
    glScaled(.88, 0.017, 0.017);
   glTranslatef(-.01, 149,290); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 

    //pagar atas 1
    glPushMatrix();
    glScaled(.88, 0.017, 0.017);
   glTranslatef(-.01, 159,290); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();   
    
    //pagar atas 1
    glPushMatrix();
    glScaled(.88, 0.017, 0.017);
   glTranslatef(-.01, 169,290); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
       
    //pagar atas 1
    glPushMatrix();
    glScaled(.88, 0.017, 0.017);
   glTranslatef(-.01, 179,290); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(0.3402, 0.3412, 0.3117);
    glutSolidCube(5.0);
    glPopMatrix(); 
       
       
    //lampu kanan atas
    glPushMatrix();
    glScaled(0.05, 0.05, 0.05);
    glTranslatef(34.5, 95.4, 96);
    //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE); //untuk memunculkan warna
    glColor3ub(252, 243, 169);
    glutSolidSphere(2.0,20,50);
    glPopMatrix();       
      
    //lampu kiri atas
    glPushMatrix();
    glScaled(0.05, 0.05, 0.05);
    glTranslatef(-32.5, 95.4, 96);
    //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glColor3ub(252, 243, 169);
    glutSolidSphere(2.0,20,50);
    glPopMatrix();       

    //lampu kanan atas
    glPushMatrix();
    glScaled(0.05, 0.05, 0.05);
    glTranslatef(34.5, 47, 96);
    //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE); //untuk memunculkan warna
    glColor3ub(252, 243, 169);
    glutSolidSphere(2.0,20,50);
    glPopMatrix();       
      
    //lampu kiri atas
    glPushMatrix();
    glScaled(0.05, 0.05, 0.05);
    glTranslatef(-32.5, 47, 96);
    //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glColor3ub(252, 243, 169);
    glutSolidSphere(2.0,20,50);
    glPopMatrix(); 
    
    //pagar bawah I
    glPushMatrix();
    glScaled(.7, 0.017, 0.017);
   glTranslatef(1, 50,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah I
    glPushMatrix();
    glScaled(.7, 0.017, 0.017);
   glTranslatef(1, 40,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah I
    glPushMatrix();
    glScaled(.7, 0.017, 0.017);
   glTranslatef(1, 30,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah I
    glPushMatrix();
    glScaled(.7, 0.017, 0.017);
   glTranslatef(1, 20,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah I
    glPushMatrix();
    glScaled(.7, 0.017, 0.017);
   glTranslatef(1, 10,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    
    //pagar bawah II
    glPushMatrix();
    glScaled(2.7, 0.017, 0.017);
   glTranslatef(3, 50,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah II
    glPushMatrix();
    glScaled(2.7, 0.017, 0.017);
   glTranslatef(3, 40,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah II
    glPushMatrix();
    glScaled(2.7, 0.017, 0.017);
   glTranslatef(3, 30,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah II
    glPushMatrix();
    glScaled(2.7, 0.017, 0.017);
   glTranslatef(3, 20,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah II
    glPushMatrix();
    glScaled(2.7, 0.017, 0.017);
   glTranslatef(3, 10,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
            
    // Batang Tiang Kanan
    glPushMatrix();
    glScaled(0.06, 0.2,0.06);
   glTranslatef(43, 3,115.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();    
    
    // Batang Tiang Kiri 1
    glPushMatrix();
    glScaled(0.06, 0.2,0.06);
   glTranslatef(-42, 3,115.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();    
    
    // Batang Tiang Kiri 2
    glPushMatrix();
    glScaled(0.06, 0.2,0.06);
   glTranslatef(-20, 3,115.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();      

    // Batang Tiang Kiri 3
    glPushMatrix();
    glScaled(0.06, 0.2,0.06);
   glTranslatef(250, 3,115.5); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();
    
        //pagar bawah III
    glPushMatrix();
    glScaled(0.017, 0.017, 5);
   glTranslatef(875, 50, -1.1);    
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah III
    glPushMatrix();
    glScaled(0.017, 0.017, 5);
   glTranslatef(875, 40, -1.1);  
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah III
    glPushMatrix();
    glScaled(0.017, 0.017, 5);
   glTranslatef(875, 30, -1.1); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah III
    glPushMatrix();
    glScaled(0.017, 0.017, 5);
   glTranslatef(875, 20, -1.1); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah III
    glPushMatrix();
    glScaled(0.017, 0.017, 5);
   glTranslatef(875, 10, -1.1);  
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    // Batang Tiang Kiri 4
    glPushMatrix();
    glScaled(0.06, 0.2,0.06);
   glTranslatef(250, 3, -300); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1.0000, 0.5252, 0.0157);
    glutSolidCube(5.0);
    glPopMatrix();
    
        //pagar bawah IV
    glPushMatrix();
    glScaled(4.0, 0.017, 0.017);
   glTranslatef(1.2, 50,-1060); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah IV
    glPushMatrix();
    glScaled(4.0, 0.017, 0.017);
   glTranslatef(1.2, 40,-1060); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah IV
    glPushMatrix();
    glScaled(4.0, 0.017, 0.017);
   glTranslatef(1.2, 30,-1060); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah IV
    glPushMatrix();
       glScaled(4.0, 0.017, 0.017);
       glTranslatef(1.2, 20,-1060); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah IV
    glPushMatrix();
        glScaled(4.0, 0.017, 0.017);
       glTranslatef(1.2, 10,-1060); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 

   //pagar bawah v
    glPushMatrix();
        glScaled(0.017, 0.017, 5);
       glTranslatef(-300, 50, -1.1);    
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah v
    glPushMatrix();
       glScaled(0.017, 0.017, 5);
       glTranslatef(-300, 40, -1.1); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah v
    glPushMatrix();
      glScaled(0.017, 0.017, 5);
       glTranslatef(-300, 30, -1.1); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah v
    glPushMatrix();
        glScaled(0.017, 0.017, 5);
       glTranslatef(-300, 20, -1.1); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah v
    glPushMatrix();
        glScaled(0.017, 0.017, 5);
       glTranslatef(-300, 10, -1.1);  
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    // Batang Tiang kanan 5
    glPushMatrix();
        glScaled(0.06, 0.2,0.06);
       glTranslatef(-85, 3, -300); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1.0000, 0.5252, 0.0157);
        glutSolidCube(5.0);
    glPopMatrix();
   
    //pagar bawah vI
    glPushMatrix();
        glScaled(0.5, 0.017, 0.017);
       glTranslatef(-7.5, 50,400); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah vI
    glPushMatrix();
        glScaled(0.5, 0.017, 0.017);
       glTranslatef(-7.5, 40,400); 
       //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
         glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah vI
    glPushMatrix();
    glScaled(0.5, 0.017, 0.017);
   glTranslatef(-7.5, 30,400); 
   //glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
     glColor3f(1,1,1);
    glutSolidCube(5.0);
    glPopMatrix(); 
    
    //pagar bawah vI
    glPushMatrix();
        glScaled(0.5, 0.017, 0.017);
       glTranslatef(-7.5, 20,400); 
       glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3f(1,1,1);
        glutSolidCube(5.0);
    glPopMatrix(); 
        
   //pagar bawah vI
    glPushMatrix();
        glScaled(0.5, 0.017, 0.017);
       glTranslatef(-7.5, 10,400); 
       glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3f(1,1,1);
       glutSolidCube(5.0);
    glPopMatrix(); 
    
    // Batang Tiang kanan 6
    glPushMatrix();
        glScaled(0.06, 0.2,0.06);
       glTranslatef(-85, 3, 115.5); 
       glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
       glColor3f(1.0000, 0.5252, 0.0157);
       glutSolidCube(5.0);
    glPopMatrix();
}
