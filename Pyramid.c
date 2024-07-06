#include <GL/glut.h>

void createPyramid(void)
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);                //white - front
        glColor3f(1.0, 1.0, 1.0 );
        glVertex3f(0, 1.0, 0 );
        glVertex3f(-0.5, 0, 0.5 );
        glVertex3f(0.5, 0, 0.5 );
    glEnd();

    /*glBegin(GL_TRIANGLES);                //Purple - back
        glColor3f(160, 32, 240 );
        glVertex3f(0, 1, 0 );
        glVertex3f(-0.5, 0, -0.5 );
        glVertex3f(0.5, 0, -0.5 );
    glEnd();*/

    /*glBegin(GL_TRIANGLES);               // Green - Left
        glColor3f(0, 255, 0 );
        glVertex3f(0, 1, 0 );
        glVertex3f(-0.5, 0, -0.5 );
        glVertex3f(-0.5, 0, 0.5 );
    glEnd();*/

    glBegin(GL_TRIANGLES);               // Green - Right
        glColor3f(0, 255, 0 );
        glVertex3f(0, 1, 0 );
        glVertex3f(0.5, 0, 0.5 );
        glVertex3f(0.5, 0, -0.5 );
    glEnd();

    /*glBegin(GL_POLYGON);               // Red - Bottom
        glColor3f(255, 0, 0 );
        glVertex3f(-0.5, 0, 0.5 );
        glVertex3f(-0.5, 0, -0.5 );
        glVertex3f(0.5, 0, -0.5 );
        glVertex3f(0.5, 0, 0.5 );
    glEnd();*/
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("My Pyramid");
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(createPyramid);
    glutMainLoop();
    return 0;
}
