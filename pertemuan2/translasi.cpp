#include <glut/glut.h>

void SegiEmpat(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(-0.50,0.50, 0);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18,-0.18);
    glFlush();
}


int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Line Strip");

    glClearColor(.0f,0.0f,0.0f,0.0f);

    glutDisplayFunc(SegiEmpat);
    glutMainLoop();
    
    return 0;
}