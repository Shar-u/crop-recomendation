#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include <windows.h>


void Mydisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glVertex2i(50,50);
    glEnd();
    glFlush();
}

void myinit()
{
    glClearColor(1,1,1,1);
    glColor3i(0,0,0);
    glPointSize(4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,600,0,400);
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(550,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Drow a vertex");
    glutDisplayFunc(Mydisplay);
    myinit();
    glutMainLoop();
    return 0;
}



