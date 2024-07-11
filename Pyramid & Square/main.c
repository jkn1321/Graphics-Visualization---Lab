#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Draw small cyan cube
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
        // Front face
        glVertex3f(-0.5f, -0.5f,  0.5f);
        glVertex3f( 0.5f, -0.5f,  0.5f);
        glVertex3f( 0.5f,  0.5f,  0.5f);
        glVertex3f(-0.5f,  0.5f,  0.5f);
        // Back face
        glVertex3f(-0.5f, -0.5f, -0.5f);
        glVertex3f(-0.5f,  0.5f, -0.5f);
        glVertex3f( 0.5f,  0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f, -0.5f);
        // Left face
        glVertex3f(-0.5f, -0.5f, -0.5f);
        glVertex3f(-0.5f, -0.5f,  0.5f);
        glVertex3f(-0.5f,  0.5f,  0.5f);
        glVertex3f(-0.5f,  0.5f, -0.5f);
        // Right face
        glVertex3f( 0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f,  0.5f, -0.5f);
        glVertex3f( 0.5f,  0.5f,  0.5f);
        glVertex3f( 0.5f, -0.5f,  0.5f);
        // Top face
        glVertex3f(-0.5f,  0.5f, -0.5f);
        glVertex3f(-0.5f,  0.5f,  0.5f);
        glVertex3f( 0.5f,  0.5f,  0.5f);
        glVertex3f( 0.5f,  0.5f, -0.5f);
        // Bottom face
        glVertex3f(-0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f, -0.5f);
        glVertex3f( 0.5f, -0.5f,  0.5f);
        glVertex3f(-0.5f, -0.5f,  0.5f);
    glEnd();

    // Draw top pyramid
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex3f(0.0f, 1.0f, 0.0f); // Top vertex of the pyramid
        glColor3f(0.0f, 1.0f, 0.0f); // Green
        glVertex3f(-0.5f, 0.5f,  0.5f); // Bottom left vertex of the pyramid
        glColor3f(0.0f, 0.0f, 1.0f); // Blue
        glVertex3f( 0.5f, 0.5f,  0.5f); // Bottom right vertex of the pyramid
    glEnd();

    // Draw right pyramid
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex3f(1.0f, 0.0f, 0.0f); // Top vertex of the pyramid
        glColor3f(0.0f, 1.0f, 0.0f); // Green
        glVertex3f(0.5f, 0.5f,  0.5f); // Bottom left vertex of the pyramid
        glColor3f(0.0f, 0.0f, 1.0f); // Blue
        glVertex3f(0.5f, -0.5f,  0.5f); // Bottom right vertex of the pyramid
    glEnd();

    // Draw left pyramid
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex3f(-1.0f, 0.0f, 0.0f); // Top vertex of the pyramid
        glColor3f(0.0f, 1.0f, 0.0f); // Green
        glVertex3f(-0.5f, 0.5f,  0.5f); // Bottom left vertex of the pyramid
        glColor3f(0.0f, 0.0f, 1.0f); // Blue
        glVertex3f(-0.5f, -0.5f,  0.5f); // Bottom right vertex of the pyramid
    glEnd();

    glFlush();
    glutSwapBuffers();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("22020632-Cube with Gradient Pyramids");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}
