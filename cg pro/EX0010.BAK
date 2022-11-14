#include<windows.h>
#include<glut.h>
int c = 0;
void init()
{
glClearColor(0, 1, 1, 0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0, 800, 0,600);
}
void drawSquare(GLint x1, GLint y1, GLint x2, GLint y2, GLint x3, GLint y3, GLint x4, GLint
y4)
{
if (c == 0)
{
glColor3f(1, 1, 1);
c = 1;
}

else
{
glColor3f(0, 0, 0);
c = 0;
}

glBegin(GL_POLYGON);
glVertex2i(x1, y1);
glVertex2i(x2, y2);
glVertex2i(x3, y3);
glVertex2i(x4, y4);
glEnd();
}
void chessboard()
{
glClear(GL_COLOR_BUFFER_BIT);
GLint x, y;
for (x = 0; x <= 800; x += 100)
{
for (y = 0; y <= 600; y += 75)
{
drawSquare(x, y + 75, x + 100, y + 75, x + 100, y, x, y);
}
}
glFlush();
}
int main(int agrc, char ** argv)
{
glutInit(&agrc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

glutInitWindowPosition(100, 100);

glutInitWindowSize(800, 600);

glutCreateWindow("Chess Board using OpenGL in C++");

init();

glutDisplayFunc(chessboard);

glutMainLoop();
}