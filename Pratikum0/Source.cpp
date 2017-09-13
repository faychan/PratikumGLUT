#include <Windows.h>
#include <GL\freeglut.h>
#include <iostream>

void drawSquare()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glColor3f(1.0, 1.0, 1.0);
	int xsize = 0, ysize = 0;
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

void DrawPoly(){
	glLineWidth(2);
	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-100, 200);
	glVertex2f(-200, 0);
	glVertex2f(-100, -200);
	glVertex2f(100, -200);
	glVertex2f(200, 0);
	glVertex2f(100, 200);
	glEnd();
}

void render()
{ 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawSquare();
	
	DrawPoly();
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






