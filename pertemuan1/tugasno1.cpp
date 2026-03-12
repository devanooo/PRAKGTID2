#include <GLUT/glut.h>

void rumah(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0f,0.0f);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.9, 0.7);
        glVertex2f(-0.7, 0.9);
        glVertex2f(-0.5, 0.7);
        glVertex2f(-0.3, 0.9);
    glEnd();

    
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.2, 0.3);
    glVertex2f(0.0, 0.9);
    glVertex2f(0.2, 1);
    glVertex2f(0.0, 0.5);
    glEnd();
    
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.6, 0.8);  // pusat
        glVertex2f(0.5, 0.6);
        glVertex2f(0.7, 0.6);
        glVertex2f(0.8, 0.8);
        glVertex2f(0.7, 1.0);
        glVertex2f(0.5, 1.0);
        glVertex2f(0.4, 0.8);
    glEnd();

    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glVertex2f(-0.2, 0.0);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.2, -0.4);
        glVertex2f(-0.2, -0.4);
    glEnd();

    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 0.0);

        glVertex2f(0.0, 0.0);
        glVertex2f(0.6, -0.2);

        glVertex2f(0.4, -0.4);
        glVertex2f(0.6, -0.4);

        glVertex2f(0.4, -0.6);
        glVertex2f(0.6, -0.6);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f);
    glRectf(-0.10f, -0.10f,0.10f,0.10f);
    
    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_LINES);
        glVertex2f(0.0f,1.0f);
        glVertex2f(0.0f,-1.0f);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
    glEnd();

    

    glFlush();




    
}

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640,480);
    glutCreateWindow("Line Strip");

    glClearColor(.0f,0.0f,0.0f,0.0f);

    glutDisplayFunc(rumah);
    glutMainLoop();

    return 0;
}
