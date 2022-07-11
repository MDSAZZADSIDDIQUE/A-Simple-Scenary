#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#define PI          3.141516
#include<math.h>

void display() {

// Set background color to black and opaque

    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	int i;




    glBegin (GL_QUADS);
    glColor3ub ( 102, 178,  255);
    glVertex2f (-1.0f,-0.3f);
    glVertex2f (1.0f,-0.3f);
    glVertex2f (1.0f,1.0f);
    glVertex2f (-1.0f,1.0f);
    glEnd ();

    glBegin (GL_QUADS);
    glColor3ub (153, 76,  0);
    glVertex2f (-1.0f,-1.0f);
    glVertex2f (1.0f,-1.0f);
    glVertex2f (1.0f,-0.3f);
    glVertex2f (-1.0f,-0.3f);
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    GLfloat p1=-0.50; GLfloat q1= 0.60f; GLfloat r1 = 0.25f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.50; q1= 0.60f; r1 = 0.15f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.60; q1= 0.60f; r1 = 0.15f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.40; q1= 0.60f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.70; q1= 0.60f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.80; q1= 0.60f; r1 = 0.10f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.30; q1= 0.60f; r1 = 0.10f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.40; q1= 0.60f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_QUADS);
    glColor3ub (102, 51,  0);
    glVertex2f (0.45f,-0.3f);
    glVertex2f (0.55f,-0.3f);
    glVertex2f (0.55f,0.125f);
    glVertex2f (0.45f,0.125f);
    glEnd ();

    //tree
    glBegin (GL_TRIANGLE_FAN);
    p1=0.40; q1= 0.60f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 255, 255,  255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.50; q1= 0.20f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 204,  0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    glBegin (GL_TRIANGLE_FAN);
    p1=0.40; q1= 0.10f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 204,  0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();
    glBegin (GL_TRIANGLE_FAN);
    p1=0.60; q1= 0.10f; r1 = 0.125f;
    tringle2=40;

    tp2 =2.0f * PI  ;
    glColor3ub ( 0, 204,  0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();





    glFlush();  // Render now

}



/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {

glutInit(&argc, argv);                 // Initialize GLUT
glutInitWindowSize(720, 720);   // Set the window's initial width & height

glutCreateWindow("Circle"); // Create a window with the given title



glutDisplayFunc(display); // Register display callback handler for window re-paint

glutMainLoop();           // Enter the event-processing loop

return 0;

}
