//#include <GL/glew.h>
//#include <GL/freeglut.h>
//
//static int leftFirst=GLU_TRUE;
//
//static void init(void)
//{
//	glEnable(GL_BLEND);
//	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);	
//	glShadeModel(GL_FLAT);
//	glClearColor(0.0,0.0,0.0,0.0);
//}
//
//static void drawLeftTriangle(void)
//{
//	glBegin(GL_TRIANGLES);
//	glColor4f(1.0,1.0,0.0,0.75);
//	glVertex3f(0.1,0.9,0.0);
//	glVertex3f(0.1,0.1,0.0);
//	glVertex3f(0.7,0.5,0.0);
//	glEnd();
//}
//
//static void drawRightTriangle(void)
//{
//	glBegin(GL_TRIANGLES);
//	glColor4f(0.0,1.0,1.0,0.75);
//	glVertex3f(0.9,0.9,0.0);
//	glVertex3f(0.3,0.5,0.0);
//	glVertex3f(0.9,0.1,0.0);
//	glEnd();
//}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	if(leftFirst)
//	{
//		drawLeftTriangle();
//		drawRightTriangle();
//	}
//	else
//	{
//		drawRightTriangle();
//		drawLeftTriangle();		
//	}
//	glFlush();
//}
//
//void reshape(int w,int h)
//{
//	glViewport(0,0,(GLfloat)w,(GLfloat)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	if(w<=h)
//		gluOrtho2D(0.0,1.0,0.0,1.0*(GLfloat)h/(GLfloat)w);
//	else
//		gluOrtho2D(0.0,1.0*(GLfloat)w/(GLfloat)h,0.0,1.0);
//}
//
//void keyboard(unsigned char key,int x,int y)
//{
//	switch (key)
//	{
//	case 't':case 'T':
//		leftFirst=!leftFirst;
//		glutPostRedisplay();
//		break;
//	case 27:
//		exit(0);
//		break;
//	default:
//		break;
//	}
//}
//
//int main(int argc,char **argv)
//{
//	glutInit(&argc,argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(500,500);
//	glutInitWindowPosition(100,100);
//	glutCreateWindow("���");
//	init();
//	glutReshapeFunc(reshape);
//	glutDisplayFunc(display);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//	return 0;
//}
