#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 1);
	glVertex3f(200, 200, 0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 1);
	glVertex3f(200, -200, 0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 1);
	glVertex3f(-200, 200, 0);
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3f(1, 0, 1);
	glVertex3f(-200, -200, 0);
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 700);
	glutCreateWindow("XIIRPL3-11-FARAH NORIFFAT");
	gluOrtho2D(-400, 400, -300, 300);
	glClearColor(1, 1, 1, 0);
	glutDisplayFunc(render);

	glutMainLoop();
	return 0;
}

