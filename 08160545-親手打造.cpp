#include<GL/glut.h>
 void display()
 {
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M��
     glutSolidTeapot(0.3);///��߯���
     glutSwapBuffers();///�洫�⭿��buffers
 }

 int main(int argc,char ** argv) ///�H�e�O int main()
 {
    glutInit(&argc,argv);///GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�
    glutCreateWindow("08160545 ����");///�������D

    glutDisplayFunc(display);///���@�U�n��ܪ��禡

    glutMainLoop();///�D�n�j��
 }
