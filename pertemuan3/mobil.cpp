#include <GLUT/glut.h>
#include <math.h>
#define PI 3.14159265359

void display (void){
    glClear(GL_COLOR_BUFFER_BIT);
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

    glPushMatrix();
        glColor3f(1.0, 0.4, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.80,-0.40);
            glVertex2f(-0.80,-0.30);
            glVertex2f(-0.70,-0.30);
            glVertex2f(-0.70,-0.40);
        glEnd();
    glPopMatrix();
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