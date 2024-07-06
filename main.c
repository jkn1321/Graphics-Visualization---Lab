#include <GL/glut.h>

void createCube(void)
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);                //white - front
        glColor3f(1.0, 1.0, 1.0 );
        glVertex3f(-0.4, -0.2, 0 );
        glVertex3f(-0.4, 0.2, 0 );
        glVertex3f(0, 0.2, 0 );
        glVertex3f(0, -0.2, 0 );
    glEnd();

    /*glBegin(GL_POLYGON);                //Purple - back
        glColor3f(160, 32, 240 );
        glVertex3f(-0.2, 0, -0.4 );
        glVertex3f(-0.2, 0.4, -0.4 );
        glVertex3f(0.2, 0, -0.4 );
        glVertex3f(0.2, 0.4, -0.4 );
    glEnd();*/

    /*glBegin(GL_POLYGON);               // Green - Left
        glColor3f(0, 255, 0 );
        glVertex3f( -0.4, 0.2, 0 );
        glVertex3f(-0.2, 0.4, -0.4 );
        glVertex3f(-0.2, 0, -0.4 );
        glVertex3f(-0.4, -0.2, 0 );
    glEnd();*/

    glBegin(GL_POLYGON);               // Green - Right
        glColor3f(0, 255, 0 );
        glVertex3f(0, 0.2, 0 );
        glVertex3f(0.2, 0.4, -0.4 );
        glVertex3f(0.2, 0, -0.4 );
        glVertex3f(0, -0.2, 0 );
    glEnd();

    glBegin(GL_POLYGON);               //Blue - Top
        glColor3f(0, 0, 255 );
        glVertex3f(-0.4, 0.2, 0 );
        glVertex3f(-0.2, 0.4, -0.4 );
        glVertex3f(0.2, 0.4, -0.4 );
        glVertex3f(0, 0.2, 0 );
    glEnd();

    /*glBegin(GL_POLYGON);               // Red - Bottom
        glColor3f(255, 0, 0 );
        glVertex3f(-0.4, -0.2, 0 );
        glVertex3f(-0.2, 0, -0.4 );
        glVertex3f(0.2, 0, -0.4);
        glVertex3f(0, -0.2, 0 );
    glEnd();*/
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("My Cube");
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(createCube);
    glutMainLoop();
    return 0;
}

