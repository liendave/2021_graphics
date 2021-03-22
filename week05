#include<GL/glut.h>
#include<stdio.h>
float vx[2000],vy[2000];
int N=0; ///有N個頂點
void display()
 {
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
     glBegin(GL_LINE_LOOP);
       for(int i=0;i<N;i++){
        glVertex2f(vx[i],vy[i]);
       }
     glEnd();
     glutSwapBuffers(); ///交換兩倍的buffers
 }
 void motion(int x,int y)/// mouse motion 函式
{
    ///換算座標
    printf("%d %d\n",x,y);
    vx[N]=(x-150)/150.0;
    vy[N]=(y-150)/150.0;
    N++;
    display();
}
int main(int argc ,char** argv)
{
    glutInit(&argc,argv); ///GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///顯示模式
    glutCreateWindow("08160545 week05");///視窗標題

    glutDisplayFunc(display);///display 顯示的函式
    glutMotionFunc(motion);///準備 mouse motion 移動時的函式
    glutMainLoop();///主要迴圈

 }
