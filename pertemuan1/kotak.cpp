#include <GLUT/glut.h>

void SegiEmpat(void) {
    // Membersihkan layar
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Mengatur warna menjadi merah (R=1, G=0, B=0)
    glColor3f(1.0f, 0.0f, 0.0f);
    
    // Menggambar persegi dengan koordinat (x1, y1, x2, y2)
    glRectf(-0.18f, -0.18f, 0.0f, 0.18f);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(0.0f, -0.18f, 0.50f,0.18f);
    
    // Memastikan perintah gambar segera dieksekusi
    glFlush();


}

void Segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        // Titik 1: Merah
        glColor3f(1.0f, 0.0f, 0.0f); 
        glVertex3f(-0.10f, -0.10f, 0.00f);
        
        // Titik 2: Hijau
        glColor3f(0.0f, 1.0f, 0.0f); 
        glVertex3f(0.10f, -0.50f, 0.00f);
        
        // Titik 3: Biru
        glColor3f(0.0f, 0.0f, 1.0f); 
        glVertex3f(0.00f, 0.10f, 0.00f);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    // Inisialisasi GLUT
    glutInit(&argc, argv);
    
    // Mengatur ukuran jendela
    glutInitWindowSize(640, 480);
    
    // Mengatur mode tampilan
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    
    // Membuat jendela dengan judul "Segi Empat"
    glutCreateWindow("Segi Empat");
    
    // Menentukan fungsi untuk menggambar
    glutDisplayFunc(SegiEmpat);
    glutDisplayFunc(Segitiga);
    
    // Mengatur warna latar belakang menjadi biru (R=0, G=0, B=1)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    
    // Memulai loop utama program
    glutMainLoop();
    
    return 0;
}