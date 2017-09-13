#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void drawGrid()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(1.0, 1.0, 1.0);
	int xsize = 0, ysize = 0;
	glLineWidth(1);
	for (int j = 0; j<400; j++){
		xsize = 0;
		for (int i = 0; i<400; i++)
		{
			glBegin(GL_LINES);
			glVertex3f(-400.0 + xsize, -400.0 + ysize, 0.0);
			glVertex3f(-300.0 + xsize, -400.0 + ysize, 0.0);
			glVertex3f(-300.0 + xsize, -300.0 + ysize, 0.0);
			glVertex3f(-400.0 + xsize, -300.0 + ysize, 0.0);
			//2
			glVertex3f(400 + xsize, 400 + ysize, 0);
			glVertex3f(400 + xsize, -400 + ysize, 0);
			glVertex3f(-400 + xsize, -400 + ysize, 0);
			glVertex3f(-400 + xsize, 400 + ysize, 0);
			glEnd();
			xsize += 50.0;
		}
		ysize += 50.0;
	}
	glFlush();
}

void DrawEyes(){
	glLineWidth(5);
	glColor3f(0, 0, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-250, 250);
	glVertex2f(-300, 250);
	glVertex2f(-300, 150);
	glVertex2f(-250, 150);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(250, 250);
	glVertex2f(300, 250);
	glVertex2f(300, 150);
	glVertex2f(250, 150);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-250, 250);
	glVertex2f(-200, 250);
	glVertex2f(-200, 150);
	glVertex2f(-250, 150);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(250, 250);
	glVertex2f(200, 250);
	glVertex2f(200, 150);
	glVertex2f(250, 150);
	glEnd();
}

void DrawNose() {
	glLineWidth(5);
	glColor3f(0, 0, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-100, 0);
	glVertex2f(-100, -50);
	glVertex2f(100, -50);
	glVertex2f(100, 0);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-100, 0);
	glVertex2f(-100, 50);
	glVertex2f(100, 50);
	glVertex2f(100, 0);
	glEnd();
}

void DrawMouth() {	
	glLineWidth(5);
	glColor3f(0, 0, 1);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-150, -200);
	glVertex2f(-150, -250);
	glVertex2f(-50, -250);
	glVertex2f(-50, -200);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(150, -200);
	glVertex2f(150, -250);
	glVertex2f(50, -250);
	glVertex2f(50, -200);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-200, -150);
	glVertex2f(-200, -200);
	glVertex2f(200, -200);
	glVertex2f(200, -150);
	glEnd();
}

void render()
{ 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawGrid();
	DrawEyes();
	DrawNose();
	DrawMouth();
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800, 600);
	glutCreateWindow("XIIRPL3-11-FARAH NORIFFAT");
	gluOrtho2D(-400, 400, -300, 300);
	glClearColor(0, 0, 0, 0);
	glutDisplayFunc(render);
	glutMainLoop();
	return 0;
}






