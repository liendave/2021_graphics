
#include<GL/glut.h>



static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
             glBegin(GL_TRIANGLES); ///���ɨӪ��{���X

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

            glEnd();

    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv); ///�]�wGLUT����l��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�
    glutCreateWindow("GLUT Shapes");///�}GLUT����


    glutDisplayFunc(display);///��ܪ��禡

    glutMainLoop(); /// GLUT�D�n���j�� , �d���n����
}
