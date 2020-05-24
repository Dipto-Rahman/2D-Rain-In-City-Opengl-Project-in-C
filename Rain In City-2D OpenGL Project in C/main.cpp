#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>

float cx = 0.0f, cy = 0.0f;
GLfloat position3 = 10.0f;
GLfloat speed3 =- 3.5f; //Rain speed
void rain(int value)
{
    if(position3 <- 5.0)
        position3 = 10.0f;
    position3 += speed3;
    glutPostRedisplay();
    glutTimerFunc(80, rain, 0); //rain timer
}

void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle1 = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 100; i++)
    {
        angle1 = 2 * PI * i / 100;
        glVertex3f (cos(angle1) * radius_x, sin(angle1) * radius_y, 0);
    }

    glEnd();
}
void sky1() //Rain Sky
{
    glBegin(GL_QUADS);
    glColor3ub(50, 44, 155); //sky color
    glVertex2f(-1.0f, 0.45f);

    glVertex2f(1.0f, 0.45f);

    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void sky() //Normal Sky
{
    glBegin(GL_QUADS);
    glColor3ub(120, 204, 255); //sky color
    glVertex2f(-1.0f, 0.45f);

    glVertex2f(1.0f, 0.45f);

    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void road()
{

    glColor3f(0.464f,0.531f,0.597f); //road color

    glBegin(GL_QUADS);
    glVertex2d(-1.0,0.0);
    glVertex2d(1.0,0.0);
    glVertex2d(1.0,-0.65); //road widening
    glVertex2d(-1.0,-0.65); //road widening
    glEnd();

    glColor3f(1.0f,1.0f,1.0f); //strip of road
    glBegin(GL_QUADS);
    glVertex2d(-1.0,-0.20);
    glVertex2d(-0.5,-0.20);
    glVertex2d(-0.5,-0.30);
    glVertex2d(-1.0,-0.30);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f); //strip of road
    glBegin(GL_QUADS);
    glVertex2d(-0.25,-0.20);
    glVertex2d(0.5,-0.20);
    glVertex2d(0.5,-0.30);
    glVertex2d(-0.25,-0.30);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f); //strip of road
    glBegin(GL_QUADS);
    glVertex2d(0.6,-0.20);
    glVertex2d(1.0,-0.20);
    glVertex2d(1.0,-0.30);
    glVertex2d(0.6,-0.30);
    glEnd();


}

void reshape(int w, int h)
{
//    std::cout<<"Reshape is called"<<std::endl;
    float aspectRatio = (float)w/(float)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);

}
void building()
{
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(-1.0f, 0.2f); //building front back parameters
    glVertex2f(-0.8f, 0.2f);
    glVertex2f(-0.8f, 0.8f); //building tall parameters
    glVertex2f(-1.0f, 0.6f); //building tall parameters
    glEnd();

    glBegin(GL_QUADS); //window 1
    glColor3f(0, 0, 0);  // window color
    glVertex2f(-0.98f, 0.4f); //window shape
    glVertex2f(-0.93f, 0.4f);
    glVertex2f(-0.93f, 0.561f); //window shape upper part
    glVertex2f(-0.98f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.92f, 0.4f);
    glVertex2f(-0.87f, 0.4f);
    glVertex2f(-0.87f, 0.5f);
    glVertex2f(-0.92f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.98f, 0.38f);
    glVertex2f(-0.93f, 0.38f);
    glVertex2f(-0.93f, 0.28f);
    glVertex2f(-0.98f, 0.28f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.92f, 0.38f);
    glVertex2f(-0.87f, 0.38f);
    glVertex2f(-0.87f, 0.28f);
    glVertex2f(-0.92f, 0.28f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 1, 1);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.75f, 0.43f);
    glVertex2f(-0.64f, 0.43f);
    glVertex2f(-0.64f, 0.28f);
    glVertex2f(-0.75f, 0.28f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.75f, 0.45f);
    glVertex2f(-0.64f, 0.45f);
    glVertex2f(-0.64f, 0.6f);
    glVertex2f(-0.75f, 0.6f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-0.6f, 0.1f);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.4f, 0.7f);
    glVertex2f(-0.6f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.55f, 0.45f);
    glVertex2f(-0.45f, 0.45f);
    glVertex2f(-0.45f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.45f, 0.25f);
    glVertex2f(-0.45f, 0.4f);
    glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1, 1, 0);
    glVertex2f(-0.4f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.38f, 0.55f);
    glVertex2f(-0.22f, 0.55f);
    glVertex2f(-0.22f, 0.7f);
    glVertex2f(-0.38f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.38f, 0.35f);
    glVertex2f(-0.22f, 0.35f);
    glVertex2f(-0.22f, 0.5f);
    glVertex2f(-0.38f, 0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, .5);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(-0.2f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.18f, 0.15f);
    glVertex2f(-0.11f, 0.15f);
    glVertex2f(-0.11f, 0.45f);
    glVertex2f(-0.18f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-0.09f, 0.15f);
    glVertex2f(-0.019f, 0.15f);
    glVertex2f(-0.019f, 0.45f);
    glVertex2f(-0.09f, 0.45f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1, .7, .5);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.4f, 0.1f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.1f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.12f, 0.25f);
    glVertex2f(0.23f, 0.25f);
    glVertex2f(0.23f, 0.45f);
    glVertex2f(0.12f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.25f, 0.25f);
    glVertex2f(0.38f, 0.25f);
    glVertex2f(0.38f, 0.45f);
    glVertex2f(0.25f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.12f, 0.47f);
    glVertex2f(0.23f, 0.47f);
    glVertex2f(0.23f, 0.67f);
    glVertex2f(0.12f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.25f, 0.47f);
    glVertex2f(0.38f, 0.47f);
    glVertex2f(0.38f, 0.67f);
    glVertex2f(0.25f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.9, .1, .5);
    glVertex2f(0.4f, 0.1f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.8f);
    glVertex2f(0.4f, 0.8f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.42f, 0.25f);
    glVertex2f(0.53f, 0.25f);
    glVertex2f(0.53f, 0.45f);
    glVertex2f(0.42f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.55f, 0.25f);
    glVertex2f(0.68f, 0.25f);
    glVertex2f(0.68f, 0.45f);
    glVertex2f(0.55f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.42f, 0.47f);
    glVertex2f(0.53f, 0.47f);
    glVertex2f(0.53f, 0.67f);
    glVertex2f(0.42f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.55f, 0.47f);
    glVertex2f(0.68f, 0.47f);
    glVertex2f(0.68f, 0.67f);
    glVertex2f(0.55f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.9, .9, .5);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(1.0f, 0.1f);
    glVertex2f(1.0f, 0.7f);
    glVertex2f(0.7f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.72f, 0.25f);
    glVertex2f(0.83f, 0.25f);
    glVertex2f(0.83f, 0.45f);
    glVertex2f(0.72f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.85f, 0.25f);
    glVertex2f(0.98f, 0.25f);
    glVertex2f(0.98f, 0.45f);
    glVertex2f(0.85f, 0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.72f, 0.47f);
    glVertex2f(0.83f, 0.47f);
    glVertex2f(0.83f, 0.67f);
    glVertex2f(0.72f, 0.67f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(0.85f, 0.47f);
    glVertex2f(0.98f, 0.47f);
    glVertex2f(0.98f, 0.67f);
    glVertex2f(0.85f, 0.67f);
    glEnd();

}



void tree(float x, float y)
{
    float newx=x;
    float newy=y;

    glColor3f(1.871, 0.722, 0.529); // tree bottom color
    glBegin(GL_TRIANGLES);
    glVertex2f(newx,newy-0.9f); // tree bottom shape
    glVertex2f(newx+0.08,newy+0.15f);
    glVertex2f(newx-0.1,newy-0.15f);
    glEnd();
    //Up
    glColor3f(0.133, 0.545, 0.133); //tree upper color
    glBegin(GL_TRIANGLES);
    glVertex2f(newx,newy-0.25f+0.58f); //tree upper shape
    glVertex2f(newx+0.2f,newy-0.27f);
    glVertex2f(newx-0.2f,newy-0.29f);
    glEnd();
}

void tree1(float x, float y)
{
    float newx=x;
    float newy=y;

    glColor3f(1.871, 0.722, 0.529); // tree bottom color
    glBegin(GL_TRIANGLES);
    glVertex2f(newx,newy-0.9f); // tree bottom shape
    glVertex2f(newx+0.08,newy+0.15f);
    glVertex2f(newx-0.1,newy-0.15f);
    glEnd();
    //Up
    glColor3f(.3, .545, .43); //tree upper color
    glBegin(GL_TRIANGLES);
    glVertex2f(newx,newy-0.25f+0.58f); //tree upper shape
    glVertex2f(newx+0.2f,newy-0.27f);
    glVertex2f(newx-0.2f,newy-0.29f);
    glEnd();
}

void car(float cx, float cy){
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.1, 0.3); //car color
    glVertex2f(cx-0.90f, cy-0.1f); //car shape
    glVertex2f(cx-0.55f, cy-0.1f);
    glVertex2f(cx-0.45f, cy-0.35f);
    glVertex2f(cx-0.85f, cy-0.35f);
    glEnd();


    glPushMatrix();
        glColor3f(1, 1, 1); //wheel color
        glTranslated(cx - 0.78, cy-0.35f, 0); //rear wheel position at x-axis
        circle(0.04,0.04);

    glPopMatrix();
    glPushMatrix();
        glColor3f(1, 1, 1);
        glTranslated(cx - 0.59, cy-0.35f, 0); //front wheel position at x-axis
        circle(0.04,0.04);

    glPopMatrix();

}

void init( )
{
    int x, z;

    glShadeModel(GL_SMOOTH);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);  //sets the color value to clear buffer
    glOrtho(-20, 20, -10, 10, -10, 10); //left,right,bottom,top, near, far

}


struct Point
{
    float x, y;
    unsigned char r, g, b, a;
};
std::vector< Point > points;
// Draw Particles
void drawScene( ) //Rain Scene
{
    glClearColor(0.33f, 0.38f, 0.35f, 1.0f); //sidewalk color
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(2);
    sky1();

    road();

    building();
    car(cx,cy);
    tree(0.8, -0.4); //tree position x-axis and y-axis
    tree1(-0.8, -0.6); //tree position x-axis and y-axis
    tree1(-0.5, -0.7);
    glOrtho(-50, 50, -50, 50, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    // draw
    glPushMatrix();
    glTranslatef(0.0f,position3, 0.0f);
    glColor3ub( 255, 255, 255 );
    glEnableClientState( GL_VERTEX_ARRAY );
    glEnableClientState( GL_COLOR_ARRAY );
    glVertexPointer( 2, GL_FLOAT, sizeof(Point), &points[0].x );
    glColorPointer( 4, GL_UNSIGNED_BYTE, sizeof(Point), &points[0].r );
    glPointSize( 2.6 ); //Rain Droplet size
    glDrawArrays( GL_POINTS, 0, points.size() );
    glDisableClientState( GL_VERTEX_ARRAY );
    glDisableClientState( GL_COLOR_ARRAY );
    glPopMatrix();

    cx+=0.001f;
    if(cx > 12.90){
        cx = 0.0f;
    }
    printf("%f\n", cx);
    glutPostRedisplay();
    glFlush();
    glutSwapBuffers();



}

void drawScene1( ) //Non-Rain Scene
{
    glClearColor(0.33f, 0.3f, 0.3f, 1.0f); //side walk color
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(2);
    sky();

    road();

    building();
    car(cx,cy);
    tree(0.8, -0.4); //tree position x-axis and y-axis
    tree(-0.8, -0.6);  //tree position x-axis and y-axis
    tree1(-0.5, -0.7);
    glOrtho(-50, 50, -50, 50, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    cx+=0.001f; //car speed
    if(cx > 12.90){
        cx = 0.0f;
    }
    printf("%f\n", cx);
    glutPostRedisplay();

    glFlush();
    glutSwapBuffers();



}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
        case  'r':
            glutDestroyWindow(1);
            glutInitWindowSize(1600, 1000);
            glutCreateWindow("Rain");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(drawScene);
            break;

    }
}

void idle ( )
{
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1600, 1000);
    glutCreateWindow("Final Project");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(drawScene1);
    for( size_t i = 0; i < 2500; ++i ) //rain amount
    {
        Point pt;
        pt.x = -50 + (rand() % 100); //covers left 50% of the screen
        pt.y = -50 + (rand() % 100); //covers right 50% of the screen
        pt.r = 55; //Rain color
        pt.g = 255;
        pt.b = 255;
        pt.a = 255;
        points.push_back(pt);
    }
    glutTimerFunc(100, rain, 0);
    glutKeyboardFunc(handleKeypress);
    init();
    glutMainLoop();
    return 0;
}


