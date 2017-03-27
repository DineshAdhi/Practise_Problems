
#include<GLUT/glut.h>
void display_callback()
{
  glutSwapBuffers();
}
int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE );
  glutInitWindowSize(500,500);
  glutCreateWindow("Dinesh");
  glutDisplayFunc(display_callback);
  glutMainLoop();
}
