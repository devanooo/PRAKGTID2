#include <GLUT/glut.h>
#include <math.h>
#define PI 3.14159265359


void jalan(){
    glPushMatrix();
        glColor3f(0.2,0.2,0.2);
        
        glBegin(GL_POLYGON);
            glVertex2f(1,-0.6);
            glVertex2f(-1,-0.60);
            glVertex2f(-1,-1);
            glVertex2f(1,-1);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(-0.5,-0.6,0);
        glScalef(0.25,0.25,1);
        glBegin(GL_POLYGON);
            glVertex2f(1,-0.6);
            glVertex2f(-1,-0.60);
            glVertex2f(-1,-1);
            glVertex2f(1,-1);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(0.25,-0.6,0);
        glScalef(0.25,0.25,1);
        glBegin(GL_POLYGON);
            glVertex2f(1,-0.6);
            glVertex2f(-1,-0.60);
            glVertex2f(-1,-1);
            glVertex2f(1,-1);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glColor3f(1,1,1);
        glTranslatef(1,-0.6,0);
        glScalef(0.25,0.25,1);
        glBegin(GL_POLYGON);
            glVertex2f(1,-0.6);
            glVertex2f(-1,-0.60);
            glVertex2f(-1,-1);
            glVertex2f(1,-1);
        glEnd();
    glPopMatrix();
}


void lamer(){
    glPushMatrix();
    glColor3f(0.2,0.2,0.2);
    glTranslatef(0.8,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.15,0.7);  
        glVertex2f(0.1,0.7);  
        glVertex2f(0.1,0.2);  
        glVertex2f(-0.15,0.2);  
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glColor3f(0.2,0.2,0.2);
        glTranslatef(0.81,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.08,0.2);  
            glVertex2f(0.006,0.2);  
            glVertex2f(0.006,-0.6);  
            glVertex2f(-0.08,-0.6);  
        glEnd();
    glPopMatrix();

    float radius = 0.07;

    glPushMatrix();
        glColor3f(1.0, 0, 0);
        glTranslatef(0.773,0.6,1);
        glBegin(GL_POLYGON);
        GLint circle_points = 100;
        for(int i = 0; i <circle_points; i++){
            float angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();
    glPopMatrix();

    //kuning
    glPushMatrix();
        glColor3f(1.0, 1, 0);
        glTranslatef(0.773,0.3,1);
        
        glBegin(GL_POLYGON);
        for(int i = 0; i <circle_points; i++){
            float angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(0, 1, 0);
        glTranslatef(0.773,0.45,1);
        
        glBegin(GL_POLYGON);
        for(int i = 0; i <circle_points; i++){
            float angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();
    glPopMatrix();
}

void gunung(){
    glPushMatrix();
    glColor3f(0.6,0.6,0.6);
    glBegin(GL_POLYGON);
        glVertex2f(1.2,-0.6);
        glVertex2f(0.4,0.5);
        glVertex2f(-0.6,-0.6);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.4,0.4,0.4);
    glTranslatef(-0.7,0,0);
     glBegin(GL_POLYGON);
        glVertex2f(1.2,-0.6);
        glVertex2f(0.4,0.5);
        glVertex2f(-0.6,-0.6);
    glEnd();
    glPopMatrix();
}

void bulan(){
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(-0.9,0.8,0);
        glBegin(GL_POLYGON);
        GLint circle_points =100;
        float radius = 0.3;
        for(int i = 0; i <circle_points; i++)   {
            float angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();
    glPopMatrix();
}

void detailmobil(){
    
}
void display (void){
    glClear(GL_COLOR_BUFFER_BIT);
    
    gunung();
    bulan();

    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(-0.5,-0.5,0);
        glBegin(GL_POLYGON);
        GLint circle_points =100;
        float angle;
        float radius = 0.1;
        for(int i = 0; i <circle_points; i++)   {
            angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();

        glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        radius = 0.05;
        for(int i = 0; i < circle_points; i++){
            angle = 2*PI*i/circle_points;
            glVertex3f(radius*cos(angle), radius*sin(angle), 0);
        }
        glEnd();
    glPopMatrix();

    glPushMatrix();

        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(0.2,-0.5,0);
        glBegin(GL_POLYGON);
        radius = 0.1;
        for(int i = 0; i <circle_points; i++)   {
            angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();

        glColor3f(1, 0, 0);
        glBegin(GL_POLYGON);
        radius = 0.05;
        
        for(int i = 0; i <circle_points; i++)   {
            angle = 2*PI*i/circle_points;
            float x = radius * cos(angle);
            float y = radius * sin(angle);
            glVertex3f(x,y,0);
        }
        glEnd();
        
    glPopMatrix();
        
    glPushMatrix();
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.70,-0.50);
            glVertex2f(-0.80,-0.40);
            glVertex2f(-0.80,-0.30);
            glVertex2f(-0.70,-0.30);
            glVertex2f(-0.50,-0.20);
            glVertex2f(-0.40,-0.10);
            glVertex2f(0.0,0.0);
            glVertex2f(0.1,-0.2);
            glVertex2f(0.3,-0.2);
            glVertex2f(0.4,-0.3);
            glVertex2f(0.4,-0.5);
            
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            glVertex2f(-0.02, -0.02);
            glVertex2f(0.08, -0.2);
            glVertex2f(-0.48, -0.2);
            glVertex2f(-0.40, -0.11);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(0.025, -0.1); // kanan atas
            glVertex2f(0.08, -0.2);
            glVertex2f(-0.04, -0.2);
            glVertex2f(-0.05, -0.12); //kiri atas
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glColor3f(1,1,1);
        glScalef(0.7, 0.7, 1);
        glTranslatef(0.033,-0.085,0);
        glBegin(GL_POLYGON);
            glVertex2f(0.025, -0.1); // kanan atas
            glVertex2f(0.08, -0.2);
            glVertex2f(-0.04, -0.2);
            glVertex2f(-0.05, -0.12); // kiri atas
        glEnd();
    glPopMatrix();
    //lampu mbl
    glPushMatrix();
        glColor3f(1.0, 0.4, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.80,-0.40);
            glVertex2f(-0.80,-0.30);
            glVertex2f(-0.70,-0.30);
            glVertex2f(-0.70,-0.40);
        glEnd();
    glPopMatrix();

    jalan();

    
    lamer();

    glFlush();
}   

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(1000,1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("mobil");
    glutDisplayFunc(display);
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glutMainLoop();
    return  0;
}