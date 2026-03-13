#include <GLUT/glut.h>

void awan(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f,0.0f,0.0f);
    //bawahan awan
    glRectf(-0.35f,0.05f,0.35f,-0.05f);
    
    //awan kanan
    glRectf(0.45f,0.15f,0.35f,0.05f);
    glRectf(0.45f,0.25f,0.35f,0.15f);
    glRectf(0.25f,0.35f,0.35f,0.25f);
    glRectf(0.15f,0.45f,0.25f,0.35f);
    
    glRectf(0.05f,0.45f,0.15f,0.35f);
    glRectf(0.05f,0.55f,0.15f,0.45f);
    
    glRectf(-0.05f,0.45f,0.05f,0.35f);
    glRectf(-0.05f,0.35f,0.05f,0.25f);
    glRectf(-0.15f,0.55f,-0.05f,0.45f);
    
    glRectf(-0.25f,0.55f,-0.15f,0.45f);
    
    glRectf(-0.35f,0.45f,-0.25f,0.35f);
    glRectf(-0.35f,0.35f,-0.25f,0.25f);
    
    glRectf(-0.45f,0.25f,-0.35f,0.15f);
    glRectf(-0.45f,0.15f,-0.35f,0.05f);
    



    
    //merah
    glColor3f(1.0f,0.0f,0.0f);
    glRectf(-0.35f,-0.05f,-0.25f,-0.15f);
    glRectf(-0.35f,-0.15f,-0.25f,-0.25f);
    glRectf(-0.35f,-0.25f,-0.25f,-0.35f);
    glRectf(-0.35f,-0.35f,-0.25f,-0.45f);
    glRectf(-0.35f,-0.45f,-0.25f,-0.55f);
   
    
    //panjang 0.1 lebar 0.1

    //oren
    glColor3f(1.0f,0.5f,0.0f);
    glRectf(-0.25f,-0.05f,-0.15f,-0.15f);
    glRectf(-0.25f,-0.15f,-0.15f,-0.25f);
    glRectf(-0.25f,-0.25f,-0.15f,-0.35f);
    glRectf(-0.25f,-0.35f,-0.15f,-0.45f);
    glRectf(-0.25f,-0.45f,-0.15f,-0.55f);
    glRectf(-0.25f,-0.55f,-0.15f,-0.65f);
    
    //kuning
    glColor3f(1.0f,1.0f,0.0f);
    glRectf(-0.15f,-0.05f,-0.05f,-0.15f);
    glRectf(-0.15f,-0.15f,-0.05f,-0.25f);
    glRectf(-0.15f,-0.25f,-0.05f,-0.35f);
    glRectf(-0.15f,-0.35f,-0.05f,-0.45f);
    
    //ijo
    glColor3f(0.0f,1.0f,0.0f);
    glRectf(-0.05f,-0.05f,0.05f,-0.15f);
    glRectf(-0.05f,-0.15f,0.05f,-0.25f);
    glRectf(-0.05f,-0.25f,0.05f,-0.35f);
    glRectf(-0.05f,-0.35f,0.05f,-0.45f);
    glRectf(-0.05f,-0.45f,0.05f,-0.55f);
    
    //biru
    glColor3f(0.0f,0.0f,1.0f);
    glRectf(0.05f,-0.05f,0.15f,-0.15f);
    glRectf(0.05f,-0.15f,0.15f,-0.25f);
    glRectf(0.05f,-0.25f,0.15f,-0.35f);
    
    //biru tua
    glColor3f(0.0f,0.0f,0.5f);
    glRectf(0.15f,-0.05f,0.25f,-0.15f);
    glRectf(0.15f,-0.15f,0.25f,-0.25f);
    glRectf(0.15f,-0.25f,0.25f,-0.35f);
    glRectf(0.15f,-0.35f,0.25f,-0.45f);
    glRectf(0.15f,-0.45f,0.25f,-0.55f);
    
    //ungu
    glColor3f(0.5f,0.0f,0.5f);
    glRectf(0.25f,-0.05f,0.35f,-0.15f);
    glRectf(0.25f,-0.15f,0.35f,-0.25f);
    glRectf(0.25f,-0.25f,0.35f,-0.35f);
    glRectf(0.25f,-0.35f,0.35f,-0.45f);
    glRectf(0.25f,-0.45f,0.35f,-0.55f);
    glRectf(0.25f,-0.55f,0.35f,-0.65f);
    
    glFlush();
}




int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640,480);
    glutCreateWindow("Awan ganteng");

    glClearColor(1.0f,1.0f,1.0f,1.0f);

    glutDisplayFunc(awan);
    glutMainLoop();

    return 0;
}


