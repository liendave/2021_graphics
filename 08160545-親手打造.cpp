#include<GL/glut.h>
 void display()
 {
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清空
     glutSolidTeapot(0.3);///實心茶壺
     glutSwapBuffers();///交換兩倍的buffers
 }

 int main(int argc,char ** argv) ///以前是 int main()
 {
    glutInit(&argc,argv);///GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式
    glutCreateWindow("08160545 茶壺");///視窗標題

    glutDisplayFunc(display);///等一下要顯示的函式

    glutMainLoop();///主要迴圈
 }
