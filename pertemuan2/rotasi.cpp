#include <GLUT/glut.h>

void Segitiga(void){
    glTranslatef(0.25,-0.25,0);
    glRotated(60.0,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.0f,0.0f); glVertex3f(-0.05f,0.05f,0.0f); 
        glColor3f(0.0f,1.0f,0.0f); glVertex3f(0.15,-0.05f,0.0f);
        glColor3f(0.0f,0.0f,1.0f); glVertex3f(-0.05f,0.0f,0.0f);
    glEnd();

    glFlush();
}



int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640,480);
    glutCreateWindow("Line Strip");

    glClearColor(0.0f,0.0f,0.0f,0.0f);

    glutDisplayFunc(Segitiga);
    glutMainLoop();
    
    return 0;
}