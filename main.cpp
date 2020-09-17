#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1416

float spin = 0.0;
float spin1 = 0.0;
float spin2 = 0.0;//initial degree for spinning, as initially still, so spin is set to 0


static float	tx	=  0.0;
static float	ty	=  0.0;

float msx1=0;
float msy1=0;

float msx2=0;
float msy2=0;

float msx3=0;
float msy3=0;


void circle(float radius_x, float radius_y,float x,float y)
{
	int i=0;
	float angle = 0.0;

	glBegin(GL_POLYGON);
    glVertex2f(x, y); // center of circle

		for(i = 0; i < 200; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex2f (x+(cos(angle) * radius_x), (y+sin(angle) * radius_y));
			//glVertex2f (cos(angle) * radius_x+5, sin(angle) * radius_y);
		}

	glEnd();
}

/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Black and opaque
   glOrtho(0,1920,0,1080,-1,1);

}
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */

void light1(int l1, int l2)
{
    glPushMatrix();
    glTranslatef(l1,l2,0);
    glLineWidth(2.5);          //Line drawing
    glColor3f(0.1, 0.0, 0.1);
    glBegin(GL_LINES);


    glVertex3f(178.0, 1080.0, 0.0);
    glVertex3f(178.0, 768.0, 0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.73f, 0.0f, 0.36f); // right red
      glVertex2f(178.0f, 769.0f);
      glVertex2f(123.0f, 716.0f);
      glVertex2f(228.0f, 716.0f);
    glEnd();

    glColor3f(0.36f, 0.0f, 0.36f);
    circle(48,12,178,718);

    glColor3f(0.96f, 0.0f, 0.36f);
    circle(20,20,178,708);


    glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 0.66f); // right red
      glVertex2f(1310.0f, 347.0f);
      glVertex2f(1284.0f, 362.0f);
      glVertex2f(1271.0f, 349.0f);
    glEnd();
    glPopMatrix();
}

void microphone_stand()
{
    glColor3f(0.1, 0.1, 0.1);
    circle(19,13,508,98);

    glLineWidth(4.5);          //Line drawing
    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_LINES);

    glVertex3f(508.0, 313.0, 0.0);
    glVertex3f(508.0, 103.0, 0.0);
    glEnd();

    glLineWidth(9);          //Line drawing
    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_LINES);

    glVertex3f(508.0, 332.0, 0.0);
    glVertex3f(508.0, 310.0, 0.0);
    glEnd();

    glLineWidth(6);          //Line drawing
    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_LINES);

    glVertex3f(508.0, 330.0, 0.0);
    glVertex3f(514.0, 346.0, 0.0);
    glEnd();

    glLineWidth(10);          //Line drawing
    glColor3f(0.1, 0.1, 0.1);
    glBegin(GL_LINES);

    glVertex3f(492.0, 360.0, 0.0);
    glVertex3f(532.0, 336.0, 0.0);
    glEnd();

    glColor3f(0.1, 0.1, 0.1);
    circle(11,11,485,365);

}


void musical_symbol1()
{
    glPushMatrix();
    glTranslatef(msx1,msy1,0);

 glLineWidth(4.5);          //Line drawing
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(633.0, 768.0, 0.0);
    glVertex3f(671.0, 749.0, 0.0);

    glVertex3f(633.0, 768.0, 0.0);
    glVertex3f(605.0, 720.0, 0.0);

    glVertex3f(671.0, 749.0, 0.0);
    glVertex3f(637.0, 695.0, 0.0);

    glVertex3f(.0, .0, 0.0);
    glVertex3f(.0, .0, 0.0);

  glEnd();
 glColor3f(0.0, 0.0, 0.0);
 circle(9,8,600,725);

  glColor3f(0.0, 0.0, 0.0);
  circle(9,8,631,698);


  glPopMatrix();

}

void musical_symbol2()
{
    glPushMatrix();
    glTranslatef(msx2,msy2,0);

    glLineWidth(4.5);          //Line drawing
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(822.0, 918.0, 0.0);
    glVertex3f(822.0, 871.0, 0.0);
    glEnd();

   glColor3f(0.0, 0.0, 0.0);
   circle(10,9,815,870);

   glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(839.0f, 903.0f);
      glVertex2f(819.0f, 922.0f);
      glVertex2f(819.0f, 908.0f);
    glEnd();

    glPopMatrix();
}
void musical_symbol3()
{
   glPushMatrix();
   glTranslatef(msx3,msy3,0);

   glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(1126.0, 664.0, 0.0);
   glVertex3f(1180.0, 623.0, 0.0);
   glEnd();

   glColor3f(0.0, 0.0, 0.0);
   circle(12,10,1169,622);

   glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(1160.0f, 669.0f);
      glVertex2f(1126.0f, 665.0f);
      glVertex2f(1139.0f, 656.0f);
    glEnd();
    glPopMatrix();

}

void drummer()
{

    glBegin(GL_QUADS);
      glColor3f(0.0f, 0.1f, 0.9f);
      glVertex2f(945.0f, 540.0f);
      glColor3f(0.1f, 0.1f, 0.8f);
      glVertex2f(909.0f, 543.0f);

      glVertex2f(909.0f, 406.0f);
      glColor3f(0.1f, 0.1f, 0.1f);
      glVertex2f(945.0f, 406.0f);
   glEnd();

   glBegin(GL_QUADS);
      glColor3f(0.0f, 0.1f, 0.9f);

      glColor3f(0.1f, 0.1f, 0.8f);
      glVertex2f(909.0f, 543.0f);
      glVertex2f(895.0f, 536.0f);
      glVertex2f(895.0f, 406.0f);


      glVertex2f(909.0f, 406.0f);
     glColor3f(0.1f, 0.1f, 0.1f);

   glEnd();

   glBegin(GL_QUADS);
      glColor3f(0.0f, 0.1f, 0.9f);



      glVertex2f(895.0f, 536.0f);
      glColor3f(0.1f, 0.1f, 0.8f);
      glVertex2f(880.0f, 543.0f);
      glVertex2f(880.0f, 406.0f);

      glVertex2f(895.0f, 406.0f);
      glColor3f(0.1f, 0.1f, 0.8f);


       glVertex2f(909.0f, 406.0f);
       glColor3f(0.1f, 0.1f, 0.1f);

   glEnd();

   glBegin(GL_QUADS);
      glColor3f(0.0f, 0.1f, 0.9f);




      glVertex2f(880.0f, 543.0f);
      glColor3f(0.1f, 0.1f, 0.8f);
      glVertex2f(848.0f, 540.0f);
      glColor3f(0.1f, 0.1f, 0.8f);
      glVertex2f(848.0f, 406.0f);
      glColor3f(0.1f, 0.1f, 0.8f);

      glVertex2f(880.0f, 406.0f);

      glColor3f(0.1f, 0.1f, 0.1f);

      glVertex2f(909.0f, 406.0f);

   glEnd();

   glBegin(GL_QUADS);              // ..........................face,................................................................
      glColor3f(1.0f, 0.9f, 0.56f); // Red
      glVertex2f(919.0f, 577.0f);
      glVertex2f(920.0f, 619.5f);
      glVertex2f(863.0f, 619.5f);
      glVertex2f(868.0f, 573.0f);
      glVertex2f(889.0f, 554.0f);
      glVertex2f(902.0f, 553.0f);
          // Define vertices in counter-clockwise (CCW) order

   glEnd();


   glBegin(GL_QUADS);              // ..........................face,................................................................
      glColor3f(1.0f, 0.9f, 0.56f); // Red
      glVertex2f(919.0f, 577.0f);

      glVertex2f(868.0f, 573.0f);
      glVertex2f(889.0f, 554.0f);
      glVertex2f(902.0f, 553.0f);
          // Define vertices in counter-clockwise (CCW) order

   glEnd();



   glBegin(GL_QUADS);              // ............................neck,................................................................
      glColor3f(1.0f, 0.9f, 0.56f); // Red
      glVertex2f(908.0f, 556.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(883.0f, 556.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(883.0f, 542.0f);
      glVertex2f(897.0f, 535.0f);

   glEnd();

   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(1.0f, 0.9f, 0.56f); // Red
      glVertex2f(908.0f, 542.0f);     // Define vertices in counter-clockwise (CCW) order
          //  so that the normal (front-face) is facing you
      glVertex2f(909.0f, 556.0f);
      glVertex2f(897.0f, 535.0f);

   glEnd();

   glBegin(GL_QUADS);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
      glVertex2f(924.0f, 595.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(930.0f, 610.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(921.0f, 628.0f);
      glVertex2f(905.0f, 636.0f);
      glVertex2f(906.0f, 615.0f);

   glEnd();

   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
      glVertex2f(930.0f, 610.0f);     //  so that the normal (front-face) is facing you

      glVertex2f(906.0f, 615.0f);
      glVertex2f(924.0f, 595.0f);

   glEnd();

   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
      glVertex2f(906.0f, 615.0f);     //  so that the normal (front-face) is facing you

      glVertex2f(905.0f, 636.0f);
      glVertex2f(921.0f, 610.0f);

   glEnd();

   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
      glVertex2f(908.0f, 615.0f);     //  so that the normal (front-face) is facing you

      glVertex2f(905.0f, 636.0f);
      glVertex2f(877.0f, 632.0f);

   glEnd();

    glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
           //  so that the normal (front-face) is facing you

      glVertex2f(905.0f, 636.0f);
      glVertex2f(877.0f, 632.0f);
      glVertex2f(870.0f, 599.0f);

   glEnd();


   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
           //  so that the normal (front-face) is facing you

      glVertex2f(870.0f, 599.0f);
      glVertex2f(877.0f, 632.0f);
      glVertex2f(854.0f, 605.0f);


   glEnd();

   glBegin(GL_TRIANGLES);              // ............................neck,................................................................
      glColor3f(0.1f, 0.1f, 0.1f); // Red
           // Define vertices in counter-clockwise (CCW) order
           //  so that the normal (front-face) is facing you

      glVertex2f(870.0f, 599.0f);

      glVertex2f(854.0f, 605.0f);
      glVertex2f(859.0f, 586.0f);


   glEnd();



   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.1f, 0.1f); // Red
      glVertex2f(845.0f, 364.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(720.0f, 364.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(720.0f, 249.0f);
      glVertex2f(845.0f, 249.0f);
   glEnd();

   glColor3f(1.0f, 0.1f, 0.1f);
   circle(60,19,780,361);

   glColor3f(0.4f, 0.1f, 0.1f);
   circle(60,19,779,255);


   glColor3f(0.1, 0.1, 0.1);
   circle(108,108,902,317);

   glColor3f(1.0, 1.0, 0.3);
   circle(100,100,902,317);

   glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(860.0f, 219.0f);
      glVertex2f(843.0f, 229.0f);
      glVertex2f(838.0f, 206.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(962.0f, 229.0f);
      glVertex2f(944.0f, 218.0f);
      glVertex2f(968.0f, 204.0f);
    glEnd();
   glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(1117.0, 587.0, 0.0);
   glVertex3f(1117.0, 246.0, 0.0);

   glVertex3f(1174.0, 212.0, 0.0);
   glVertex3f(1117.0, 246.0, 0.0);


   glVertex3f(1062.0, 212.0, 0.0);
   glVertex3f(1117.0, 246.0, 0.0);

   glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.3f);
      glVertex2f(1173.0f, 531.0f);
      glVertex2f(1116.5f, 552.0f);
      glVertex2f(1059.0f, 531.0f);
    glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1.0f, 0.8f, 0.3f);
      glVertex2f(1173.0f, 525.0f);
      glVertex2f(1059.0f, 525.0f);
      glVertex2f(1116.5f, 503.0f);

    glEnd();

    glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(695.0, 477.0, 0.0);
   glVertex3f(695.0, 245.0, 0.0);

   glVertex3f(695.0, 245.0, 0.0);
   glVertex3f(739.0, 211.0, 0.0);

   glVertex3f(695.0, 245.0, 0.0);
   glVertex3f(655.0, 211.0, 0.0);
   glEnd();

   glColor3f(0.1, 0.1, 0.1);
   circle(53,12,701,505);

   glColor3f(1.0, 1.0, 0.2);
   circle(51,10,701,505);

   glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(701.0, 505.0, 0.0);
   glVertex3f(676.0, 427.0, 0.0);
   glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.1f, 0.1f); // Red
      glVertex2f(1121.0f, 412.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1016.0f, 412.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1016.0f, 353.0f);
      glVertex2f(1121.0f, 353.0f);
   glEnd();

   glColor3f(1.0f, 0.1f, 0.1f);
   circle(52,20,1068,410);

   glColor3f(0.4f, 0.1f, 0.1f);
   circle(53,20,1068,360);

   glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(1043.0, 368.0, 0.0);
   glVertex3f(1075.0, 330.0, 0.0);

   glVertex3f(1097.0, 368.0, 0.0);
   glVertex3f(1075.0, 330.0, 0.0);

   glVertex3f(1075.0, 330.0, 0.0);
   glVertex3f(1075.0, 241.0, 0.0);

   glVertex3f(1075.0, 241.0, 0.0);
   glVertex3f(1043.0, 216.0, 0.0);

   glVertex3f(1075.0, 241.0, 0.0);
   glVertex3f(1107.0, 216.0, 0.0);

   glVertex3f(809.0, 251.0, 0.0);
   glVertex3f(834.0, 215.0, 0.0);

   glVertex3f(751.0, 252.0, 0.0);
   glVertex3f(720.0, 216.0, 0.0);

   glEnd();

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.1f, 0.1f); // Red
      glVertex2f(1064.0f, 477.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(957.0f, 477.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(957.0f, 426.0f);
      glVertex2f(1064.0f, 426.0f);
   glEnd();

   glColor3f(1.0f, 0.1f, 0.1f);
   circle(53,20,1010,473);

   glColor3f(0.4f, 0.1f, 0.1f);
   circle(53.5,20,1010,434);


   glLineWidth(5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(987.0, 438.0, 0.0);
   glVertex3f(1013.0, 405.0, 0.0);

   glVertex3f(1033.0, 438.0, 0.0);
   glVertex3f(1013.0, 405.0, 0.0);

   glVertex3f(1013.0, 405.0, 0.0);
   glVertex3f(1013.0, 231.0, 0.0);

   glVertex3f(1013.0, 231.0, 0.0);
   glVertex3f(989.0, 202.0, 0.0);

   glVertex3f(1013.0, 231.0, 0.0);
   glVertex3f(1041.0, 202.0, 0.0);



   glEnd();

   glLineWidth(1);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(864.0, 599.0, 0.0);
   glVertex3f(869.0, 569.0, 0.0);

   glVertex3f(887.0, 555.0, 0.0);
   glVertex3f(869.0, 569.0, 0.0);


   glVertex3f(887.0, 555.0, 0.0);
    glVertex3f(901.0, 555.0, 0.0);

    glVertex3f(901.0, 555.0, 0.0);
    glVertex3f(919.0, 576.0, 0.0);

    glVertex3f(919.0, 576.0, 0.0);
    glVertex3f(921.0, 599.0, 0.0);

    glVertex3f(883.0, 555.0, 0.0);
    glVertex3f(883.0, 541.0, 0.0);

    glVertex3f(908.0, 559.0, 0.0);
    glVertex3f(908.0, 541.0, 0.0);

    glVertex3f(872.0, 592.0, 0.0);
    glVertex3f(883.0, 592.0, 0.0);

    glVertex3f(900.0, 592.0, 0.0);
    glVertex3f(912.0, 592.0, 0.0);

    glVertex3f(890.0, 585.0, 0.0);
    glVertex3f(888.0, 574.0, 0.0);

    glVertex3f(888.0, 574.0, 0.0);
    glVertex3f(893.0, 574.0, 0.0);

    glVertex3f(883.0, 566.0, 0.0);
    glVertex3f(887.0, 563.0, 0.0);

    glVertex3f(887.0, 563.0, 0.0);
    glVertex3f(891.0, 563.0, 0.0);


    glVertex3f(891.0, 563.0, 0.0);
    glVertex3f(895.0, 564.0, 0.0);


    glVertex3f(895.0, 564.0, 0.0);
    glVertex3f(898.0, 565.0, 0.0);

    glVertex3f(1116.0, 552.0, 0.0);
    glVertex3f(1173.0, 531.0, 0.0);

    glVertex3f(1116.0, 552.0, 0.0);
    glVertex3f(1061.0, 531.0, 0.0);

    glVertex3f(1173.0, 531.0, 0.0);
    glVertex3f(1061.0, 531.0, 0.0);

    glVertex3f(1173.0, 527.0, 0.0);
    glVertex3f(1061.0, 527.0, 0.0);

    glVertex3f(1173.0, 527.0, 0.0);
    glVertex3f(1116.0, 504.0, 0.0);

    glVertex3f(1061.0, 527.0, 0.0);
    glVertex3f(1116.0, 504.0, 0.0);



   glEnd();

   glColor3f(0.0, 0.0, 0.0);
   circle(2,2,877,587);
   glColor3f(0.0, 0.0, 0.0);
   circle(2,2,906,587);

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(0.1f, 0.1f, 0.8f); // Red
      glVertex2f(850.0f, 541.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(818.0f, 539.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(820.0f, 510.0f);
      glVertex2f(850.0f, 512.0f);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(0.1f, 0.1f, 0.8f); // Red
      glVertex2f(964.0f, 532.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(942.0f, 541.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(942.0f, 503.0f);
      glVertex2f(963.0f, 499.0f);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(0.9f, 0.09f, 0.09f); // Red
      glVertex2f(967.0f, 346.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(954.0f, 359.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(872.0f, 252.0f);
      glVertex2f(886.0f, 241.0f);
    glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(0.9f, 0.09f, 0.09f); // Red
      glVertex2f(971.0f, 306.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(960.0f, 318.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(906.0f, 249.0f);
      glVertex2f(919.0f, 239.0f);
    glEnd();



}
void left_hand_drummer()
{
    int a=788;
    int b=522;

    glPushMatrix();
	glTranslatef(788, 522, 0);
	glRotatef(spin, 0.0, 0.0, 0.5);//y axis er shapekkhe so y=1 set kora



    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(819.0f-a, 534.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(804.0f-a, 533.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(804.0f-a, 515.0f-b);
      glVertex2f(819.0f-a, 515.0f-b);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(804.0f-a, 533.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(748.0f-a, 522.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(752.0f-a, 512.0f-b);
      glVertex2f(804.0f-a, 515.0f-b);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(748.0f-a, 522.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(734.0f-a, 525.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(730.0f-a, 511.0f-b);
      glVertex2f(747.0f-a, 503.0f-b);

    glEnd();

     glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(748.0f-a, 522.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(746.0f-a, 504.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(752.0f-a, 512.0f-b);


    glEnd();

    glLineWidth(1);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(819.0-a, 534.0-b, 0.0);
   glVertex3f(804.0-a, 533.0-b, 0.0);

   glVertex3f(804.0-a, 533.0-b, 0.0);
   glVertex3f(748.0-a, 522.0-b, 0.0);

   glVertex3f(748.0-a, 522.0-b, 0.0);
   glVertex3f(734.0-a, 525.0-b, 0.0);

   glVertex3f(734.0-a, 525.0-b, 0.0);
   glVertex3f(730.0-a, 511.0-b, 0.0);

   glVertex3f(730.0-a, 511.0-b, 0.0);
   glVertex3f(747.0-a, 503.0-b, 0.0);

   glVertex3f(747.0-a, 503.0-b, 0.0);
   glVertex3f(752.0-a, 512.0-b, 0.0);

   glVertex3f(752.0-a, 512.0-b, 0.0);
   glVertex3f(804.0-a, 515.0-b, 0.0);

   glVertex3f(804.0-a, 515.0-b, 0.0);
   glVertex3f(819.0-a, 515.0-b, 0.0);

   glEnd();



   glLineWidth(3);          //Line drawing
   glColor3f(0.3, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(742.0-a, 512.0-b, 0.0);
   glVertex3f(726.0-a, 502.0-b, 0.0);

   glVertex3f(759.0-a, 525.0-b, 0.0);
   glVertex3f(782.0-a, 539.0-b, 0.0);


   glEnd();

   glPopMatrix();


}

void right_hand_drummer()
{
    int a=979;
    int b=510;

    glPushMatrix();
	glTranslatef(a, b, 0);
	glRotatef(spin, 0.0, 0.0, 0.5);//y axis er shapekkhe so y=1 set kora

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(998.0f-a, 499.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(964.0f-a, 529.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(963.0f-a, 506.0f-b);
      glVertex2f(998.0f-a, 487.0f-b);
    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.77f); // Red
      glVertex2f(1015.0f-a, 495.0f-b);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1005.0f-a, 506.0f-b);     //  so that the normal (front-face) is facing you
      glVertex2f(998.0f-a, 504.0f-b);
      glVertex2f(998.0f-a, 490.0f-b);
      glVertex2f(1007.0f-a, 489.0f-b);
    glEnd();

   glLineWidth(1);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(964.0-a, 529.0-b, 0.0);
   glVertex3f(998.0-a, 504.0-b, 0.0);

   glVertex3f(998.0-a, 504.0-b, 0.0);
   glVertex3f(1005.0-a, 506.0-b, 0.0);

   glVertex3f(1005.0-a, 506.0-b, 0.0);
   glVertex3f(1015.0-a, 495.0-b, 0.0);

   glVertex3f(1015.0-a, 495.0-b, 0.0);
   glVertex3f(1007.0-a, 489.0-b, 0.0);

   glVertex3f(1007.0-a, 489.0-b, 0.0);
   glVertex3f(998.0-a, 489.0-b, 0.0);

   glVertex3f(998.0-a, 489.0-b, 0.0);
   glVertex3f(963.0-a, 506.0-b, 0.0);



   glEnd();

    glLineWidth(3);          //Line drawing
   glColor3f(0.3, 0.0, 0.0);
   glBegin(GL_LINES);
   glVertex3f(1006.0-a, 496.0-b, 0.0);
   glVertex3f(1029.0-a, 542.0-b, 0.0);
   glEnd();

   glPopMatrix();


}
void audience1(int a,int b,int c1,int c2)
{
    glPushMatrix();
	glTranslatef(c1, c2, 0);
	glRotatef(spin1, 0.0, 0.0, 0.1);

    glPushMatrix();
	glTranslatef(a, b, 0);
	//glRotatef(spin, 0.0, 0.0, 0.5);

    glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(1071.0f-c1, 0.0f-c2);
      glVertex2f(1070.0f-c1, 35.0f-c2);
      glVertex2f(1068.0f-c1, 50.0f-c2);
      glVertex2f(1066.0f-c1, 58.0f-c2);
      glVertex2f(1057.0f-c1, 66.0f-c2);
      glVertex2f(1044.0f-c1, 73.0f-c2);
      glVertex2f(1033.0f-c1, 80.0f-c2);
      glVertex2f(1013.0f-c1, 79.0f-c2);
      glVertex2f(994.0f-c1, 69.0f-c2);
      glVertex2f(982.0f-c1, 61.0f-c2);
      glVertex2f(977.0f-c1, 53.0f-c2);
      glVertex2f(976.0f-c1, 33.0f-c2);
      glVertex2f(976.0f-c1, 0.0f-c2);




   glEnd();

   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(1033.0f-c1, 79.0f-c2);
      glVertex2f(1032.0f-c1, 84.0f-c2);
      glVertex2f(1032.0f-c1, 88.0f-c2);
      glVertex2f(1037.0f-c1, 95.0f-c2);
      glVertex2f(1040.0f-c1, 107.0f-c2);
      glVertex2f(1040.0f-c1, 117.0f-c2);
      glVertex2f(1039.0f-c1, 126.0f-c2);
      glVertex2f(1036.0f-c1, 134.0f-c2);
      glVertex2f(1030.0f-c1, 139.0f-c2);
      glVertex2f(1023.0f-c1, 142.0f-c2);
      glVertex2f(1014.0f-c1, 141.0f-c2);
      glVertex2f(1006.0f-c1, 135.0f-c2);
      glVertex2f(1001.0f-c1, 127.0f-c2);
      glVertex2f(1000.0f-c1, 117.0f-c2);
      glVertex2f(1002.0f-c1, 106.0f-c2);
      glVertex2f(1005.0f-c1, 96.0f-c2);
      glVertex2f(1010.0f-c1, 89.0f-c2);
      glVertex2f(1014.0f-c1, 88.0f-c2);
      glVertex2f(1013.0f-c1, 79.0f-c2);



   glEnd();

    glPopMatrix();
    glPopMatrix();
}

void audience2(int a,int b,int c1,int c2)
{
    glPushMatrix();
	glTranslatef(c1, c2, 0);
	glRotatef(spin2, 0.0, 0.0, 0.1);

    glPushMatrix();
	glTranslatef(a, b, 0);
    glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(964.0f-c1, 0.0f-c2);
      glVertex2f(968.0f-c1, 32.0f-c2);
      glVertex2f(974.0f-c1, 56.0f-c2);
      glVertex2f(982.0f-c1, 78.0f-c2);
      glVertex2f(966.0f-c1, 89.0f-c2);
      glVertex2f(954.0f-c1, 76.0f-c2);
      glVertex2f(949.0f-c1, 79.0f-c2);
      glVertex2f(929.0f-c1, 80.0f-c2);
      glVertex2f(925.0f-c1, 75.0f-c2);
      glVertex2f(910.0f-c1, 93.0f-c2);
      glVertex2f(893.0f-c1, 85.0f-c2);
      glVertex2f(900.0f-c1, 66.0f-c2);
      glVertex2f(905.0f-c1, 53.0f-c2);
      glVertex2f(914.0f-c1, 0.0f-c2);


   glEnd();

   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(949.0f-c1, 79.0f-c2);
      glVertex2f(948.0f-c1, 88.0f-c2);
      glVertex2f(953.0f-c1, 96.0f-c2);
      glVertex2f(956.0f-c1, 106.0f-c2);
      glVertex2f(957.0f-c1, 115.0f-c2);
      glVertex2f(956.0f-c1, 124.0f-c2);
      glVertex2f(953.0f-c1, 133.0f-c2);
      glVertex2f(946.0f-c1, 139.0f-c2);
      glVertex2f(937.0f-c1, 141.0f-c2);
      glVertex2f(927.0f-c1, 139.0f-c2);
      glVertex2f(920.0f-c1, 133.0f-c2);
      glVertex2f(917.0f-c1, 126.0f-c2);
      glVertex2f(917.0f-c1, 115.0f-c2);
      glVertex2f(919.0f-c1, 104.0f-c2);
      glVertex2f(923.0f-c1, 94.0f-c2);
      glVertex2f(928.0f-c1, 89.0f-c2);
      glVertex2f(929.0f-c1, 80.0f-c2);


   glEnd();

   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(982.0f-c1, 78.0f-c2);
      glVertex2f(994.0f-c1, 116.0f-c2);
      glVertex2f(1008.0f-c1, 171.0f-c2);
      glVertex2f(1015.0f-c1, 182.0f-c2);
      glVertex2f(1005.0f-c1, 192.0f-c2);
      glVertex2f(1000.0f-c1, 176.0f-c2);
      glVertex2f(980.0f-c1, 120.0f-c2);
      glVertex2f(967.0f-c1, 88.0f-c2);


   glEnd();

   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(909.0f-c1, 93.0f-c2);
      glVertex2f(899.0f-c1, 118.0f-c2);
      glVertex2f(879.0f-c1, 174.0f-c2);
      glVertex2f(873.0f-c1, 191.0f-c2);
      glVertex2f(862.0f-c1, 183.0f-c2);
      glVertex2f(870.0f-c1, 171.0f-c2);
      glVertex2f(894.0f-c1, 84.0f-c2);




   glEnd();
   glLineWidth(2.5);          //Line drawing
   glColor3f(0.1, 0.1, 0.1);
   glBegin(GL_LINES);
   glVertex3f(1014.0-c1, 181.0-c2, 0.0);
   glVertex3f(1022.0-c1, 189.0-c2, 0.0);

   glVertex3f(1012.0-c1, 184.0-c2, 0.0);
   glVertex3f(1019.0-c1, 196.0-c2, 0.0);

   glVertex3f(1009.0-c1, 188.0-c2, 0.0);
   glVertex3f(1013.0-c1, 199.0-c2, 0.0);

   glVertex3f(1006.0-c1, 189.0-c2, 0.0);
   glVertex3f(1008.0-c1, 201.0-c2, 0.0);

   glVertex3f(1001.0-c1, 176.0-c2, 0.0);
   glVertex3f(999.0-c1, 193.0-c2, 0.0);

   glVertex3f(863.0-c1, 181.0-c2, 0.0);
   glVertex3f(857.0-c1, 188.0-c2, 0.0);

   glVertex3f(866.0-c1, 185.0-c2, 0.0);
   glVertex3f(859.0-c1, 195.0-c2, 0.0);

   glVertex3f(870.0-c1, 187.0-c2, 0.0);
   glVertex3f(863.0-c1, 200.0-c2, 0.0);

   glVertex3f(873.0-c1, 189.0-c2, 0.0);
   glVertex3f(870.0-c1, 201.0-c2, 0.0);

   glVertex3f(876.0-c1, 180.0-c2, 0.0);
   glVertex3f(879.0-c1, 193.0-c2, 0.0);

   glEnd();



   glPopMatrix();
   glPopMatrix();
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);  // Clear the color buffer with current clearing color

   // Define shapes enclosed within a pair of glBegin and glEnd

   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.9255f, 0.851f); // Red
      glVertex2f(1920.0f, 0.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(0.0f, 0.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(0.0f, 1080.0f);
      glVertex2f(1920.0f, 1080.0f);



      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(756.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(672.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(672.0f, 0.0f);
      glVertex2f(756.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(920.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(836.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(836.0f, 0.0f);
      glVertex2f(920.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1084.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1000.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1000.0f, 0.0f);
      glVertex2f(1084.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1248.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1162.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1162.0f, 0.0f);
      glVertex2f(1248.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1410.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1326.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1326.0f, 0.0f);
      glVertex2f(1410.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1574.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1490.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1490.0f, 0.0f);
      glVertex2f(1574.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1738.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1654.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1654.0f, 0.0f);
      glVertex2f(1738.0f, 0.0f);

      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(1902.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1818.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(1818.0f, 0.0f);
      glVertex2f(1902.0f, 0.0f);


      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(594.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(510.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(510.0f, 0.0f);
      glVertex2f(594.0f, 0.0f);

      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(430.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(346.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(346.0f, 0.0f);
      glVertex2f(430.0f, 0.0f);

      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(266.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(182.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(182.0f, 0.0f);
      glVertex2f(266.0f, 0.0f);

      glColor3f(1.0f, 0.773f, 0.5412f); // Red
      glVertex2f(102.0f, 1080.0f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(18.0f, 1080.0f);     //  so that the normal (front-face) is facing you
      glVertex2f(18.0f, 0.0f);
      glVertex2f(102.0f, 0.0f);

   glEnd();


   glBegin(GL_POLYGON);            // curtain left top
      glColor3f(0.89f, 0.0f, 0.00f); // red
      glVertex2f(588.0f, 1080.0f);
      glVertex2f(587.0f, 944.0f);
      glVertex2f(582.0f, 932.0f);
      glVertex2f(577.0f, 907.0f);
      glVertex2f(572.0f, 883.0f);
      glVertex2f(568.0f, 859.0f);
      glVertex2f(561.0f, 835.0f);
      glVertex2f(555.0f, 812.0f);
      glVertex2f(546.0f, 785.0f);
      glVertex2f(536.0f, 754.0f);
      glVertex2f(526.0f, 728.0f);
      glVertex2f(513.0f, 694.0f);
      glVertex2f(489.0f, 645.0f);
      glVertex2f(462.0f, 596.0f);
      glVertex2f(437.0f, 558.0f);
      glVertex2f(407.0f, 520.0f);
      glVertex2f(374.0f, 485.0f);
      glVertex2f(347.0f, 461.0f);
      glVertex2f(325.0f, 444.0f);
      glVertex2f(178.0f, 379.0f);
      glVertex2f(151.0f, 372.0f);
      glVertex2f(126.0f, 364.0f);
      glVertex2f(92.0f, 358.0f);
      glVertex2f(24.0f, 350.0f);
      glVertex2f(0.0f, 346.0f);
      glVertex2f(.0f, 1080.0f);





   glEnd();

   glBegin(GL_POLYGON);            // curtain left bottom
      glColor3f(0.5f, 0.0f, 0.00f); // red
      glVertex2f(0.0f, 388.0f);
      glVertex2f(91.0f, 357.0f);
      glVertex2f(103.0f, 350.0f);
      glVertex2f(114.0f, 341.0f);
      glVertex2f(124.0f, 332.0f);
      glVertex2f(133.0f, 322.0f);
      glVertex2f(143.0f, 310.0f);
      glVertex2f(151.0f, 298.0f);
      glVertex2f(161.0f, 282.0f);
      glVertex2f(170.0f, 265.0f);
      glVertex2f(180.0f, 241.0f);
      glVertex2f(211.0f, 105.0f);
      glVertex2f(47.0f, 74.0f);
      glVertex2f(31.0f, 75.0f);
      glVertex2f(17.0f, 77.0f);
      glVertex2f(6.0f, 81.0f);
      glVertex2f(0.0f, 85.0f);



   glEnd();


   glBegin(GL_POLYGON);            // curtain right top
      glColor3f(0.89f, 0.0f, 0.00f); // red
      glVertex2f(1315.0f, 1080.0f);
      glVertex2f(1337.0f, 946.0f);
      glVertex2f(1341.0f, 917.0f);
      glVertex2f(1345.0f, 896.0f);
      glVertex2f(1349.0f, 878.0f);
      glVertex2f(1354.0f, 859.0f);
      glVertex2f(1359.0f, 838.0f);
      glVertex2f(1365.0f, 814.0f);
      glVertex2f(1373.0f, 790.0f);
      glVertex2f(1382.0f, 762.0f);
      glVertex2f(1391.0f, 738.0f);
      glVertex2f(1402.0f, 710.0f);
      glVertex2f(1413.0f, 683.0f);
      glVertex2f(1430.0f, 647.0f);
      glVertex2f(1443.0f, 623.0f);
      glVertex2f(1457.0f, 599.0f);
      glVertex2f(1475.0f, 572.0f);
      glVertex2f(1495.0f, 541.0f);
      glVertex2f(1515.0f, 518.0f);
      glVertex2f(1538.0f, 494.0f);
      glVertex2f(1559.0f, 472.0f);
      glVertex2f(1581.0f, 455.0f);
      glVertex2f(1607.0f, 436.0f);
      glVertex2f(1669.0f, 404.0f);
      glVertex2f(1720.0f, 384.0f);
      glVertex2f(1752.0f, 375.0f);
      glVertex2f(1781.0f, 368.0f);
      glVertex2f(1810.0f, 362.0f);
      glVertex2f(1836.0f, 359.0f);
      glVertex2f(1920.0f, 351.0f);
      glVertex2f(1920.0f, 1080.0f);




   glEnd();



   glBegin(GL_POLYGON);            // curtain right bottom
      glColor3f(0.5f, 0.0f, 0.00f); // red
      glVertex2f(1920.0f, 379.0f);
      glVertex2f(1892.0f, 376.0f);
      glVertex2f(1860.0f, 370.0f);
      glVertex2f(1831.0f, 359.0f);
      glVertex2f(1819.0f, 354.0f);
      glVertex2f(1799.0f, 341.0f);
      glVertex2f(1778.0f, 321.0f);
      glVertex2f(1761.0f, 304.0f);
      glVertex2f(1745.0f, 281.0f);
      glVertex2f(1729.0f, 254.0f);
      glVertex2f(1717.0f, 228.0f);
      glVertex2f(1709.0f, 206.0f);
      glVertex2f(1705.0f, 186.0f);
      glVertex2f(1691.0f, 109.0f);
      glVertex2f(1863.0f, 83.0f);
      glVertex2f(1886.0f, 84.0f);
      glVertex2f(1902.0f, 88.0f);
      glVertex2f(1920.0f, 94.0f);




   glEnd();


   glBegin(GL_POLYGON);            //stage
      glColor3f(0.2f, 0.0f, 0.00f); // red
      glVertex2f(1920.0f, 8.0f);
      glVertex2f(1908.0f, 27.0f);
      glVertex2f(1896.0f, 46.0f);
      glVertex2f(1880.0f, 66.0f);
      glVertex2f(1864.0f, 82.0f);
      glVertex2f(1845.0f, 102.0f);
      glVertex2f(1819.0f, 121.0f);
      glVertex2f(1791.0f, 140.0f);
      glVertex2f(1756.0f, 160.0f);
      glVertex2f(1734.0f, 169.0f);
      glVertex2f(184.0f, 165.0f);
      glVertex2f(169.0f, 161.0f);
      glVertex2f(147.0f, 153.0f);
      glVertex2f(116.0f, 135.0f);
      glVertex2f(103.0f, 126.0f);
      glVertex2f(88.0f, 114.0f);
      glVertex2f(73.0f, 99.0f);
      glVertex2f(55.0f, 82.0f);
      glVertex2f(38.0f, 63.0f);
      glVertex2f(26.0f, 48.0f);
      glVertex2f(13.0f, 29.0f);
      glVertex2f(0.0f, 12.0f);
      glVertex2f(0.0f, 0.0f);
      glVertex2f(1920.0f, 0.0f);


   glEnd();


   glBegin(GL_POLYGON);            // elipse 1st
      glColor3f(1.0f, 0.61f, 0.61f); //
      glVertex2f(1729.0f, 151.0f);
      glVertex2f(1703.0f, 164.0f);
      glVertex2f(218.0f, 164.0f);
      glVertex2f(192.0f, 150.0f);
      glVertex2f(186.0f, 143.0f);
      glVertex2f(185.0f, 134.0f);
      glVertex2f(192.0f, 124.0f);
      glVertex2f(207.0f, 114.0f);
      glVertex2f(227.0f, 105.0f);
      glVertex2f(260.0f, 95.0f);
      glVertex2f(306.0f, 84.0f);
      glVertex2f(359.0f, 74.0f);
      glVertex2f(415.0f, 66.0f);
      glVertex2f(476.0f, 59.0f);
      glVertex2f(545.0f, 53.0f);
      glVertex2f(608.0f, 48.0f);
      glVertex2f(667.0f, 44.0f);
      glVertex2f(734.0f, 41.0f);
      glVertex2f(801.0f, 39.0f);
      glVertex2f(871.0f, 37.0f);
      glVertex2f(971.0f, 36.0f);
      glVertex2f(1020.0f, 37.0f);
      glVertex2f(1090.0f, 38.0f);
      glVertex2f(1169.0f, 41.0f);
      glVertex2f(1240.0f, 43.0f);
      glVertex2f(1345.0f, 50.0f);
      glVertex2f(1422.0f, 57.0f);
      glVertex2f(1494.0f, 65.0f);
      glVertex2f(1570.0f, 76.0f);
      glVertex2f(1644.0f, 91.0f);
      glVertex2f(1673.0f, 99.0f);
      glVertex2f(1710.0f, 114.0f);
      glVertex2f(1727.0f, 126.0f);
      glVertex2f(1733.0f, 135.0f);
      glVertex2f(1733.0f, 144.0f);




   glEnd();








   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.81f, 0.404f, 0.00f); // red
      glVertex2f(1733.0f, 164.0f);
      glVertex2f(1727.0f, 177.0f);
       glVertex2f(1723.0f, 180.0f);
      glVertex2f(1714.0f, 186.0f);
      glVertex2f(1708.0f, 189.0f);
      glVertex2f(1504.0f, 235.0f);
      glVertex2f(1453.0f, 241.0f);
      glVertex2f(1410.0f, 245.0f);
      glVertex2f(1364.0f, 249.0f);
      glVertex2f(1315.0f, 253.0f);
      glVertex2f(1258.0f, 257.0f);
      glVertex2f(1202.0f, 260.0f);
      glVertex2f(1142.0f, 261.0f);
      glVertex2f(1077.0f, 263.0f);
      glVertex2f(1018.0f, 264.0f);
      glVertex2f(958.0f, 265.0f);
      glVertex2f(899.0f, 264.0f);
      glVertex2f(841.0f, 263.0f);
      glVertex2f(785.0f, 262.0f);
      glVertex2f(731.0f, 260.0f);
      glVertex2f(673.0f, 257.0f);
      glVertex2f(610.0f, 253.0f);
      glVertex2f(538.0f, 247.0f);
      glVertex2f(470.0f, 241.0f);
      glVertex2f(410.0f, 235.0f);
      glVertex2f(390.0f, 232.0f);
      glVertex2f(191.0f, 170.0f);
      glVertex2f(187.0f, 164.0f);
      glVertex2f(189.0f, 156.0f);
      glVertex2f(194.0f, 147.0f);
       glVertex2f(202.0f, 142.0f);
      glVertex2f(214.0f, 137.0f);
       glVertex2f(230.0f, 129.0f);
      glVertex2f(249.0f, 123.0f);
       glVertex2f(272.0f, 117.0f);
      glVertex2f(300.0f, 111.0f);
      glVertex2f(353.0f, 100.0f);
      glVertex2f(413.0f, 90.0f);
      glVertex2f(479.0f, 84.0f);
      glVertex2f(533.0f, 78.0f);
      glVertex2f(593.0f, 74.0f);
      glVertex2f(653.0f, 71.0f);
      glVertex2f(717.0f, 66.0f);
      glVertex2f(785.0f, 64.0f);
      glVertex2f(853.0f, 62.0f);
      glVertex2f(930.0f, 61.0f);
      glVertex2f(1003.0f, 61.0f);
      glVertex2f(1080.0f, 62.0f);
      glVertex2f(1166.0f, 65.0f);
       glVertex2f(1226.0f, 67.0f);
        glVertex2f(1231.0f, 68.0f);
      glVertex2f(1267.0f, 70.0f);
       glVertex2f(1306.0f, 73.0f);
        glVertex2f(1331.0f, 74.0f);
         glVertex2f(1338.0f, 73.0f);
      glVertex2f(1347.0f, 75.0f);
      glVertex2f(1427.0f, 82.0f);
      glVertex2f(1503.0f, 91.0f);
      glVertex2f(1588.0f, 104.0f);
      glVertex2f(1649.0f, 117.0f);
       glVertex2f(1675.0f, 124.0f);

      glVertex2f(1697.0f, 133.0f);
       glVertex2f(1711.0f, 138.0f);
      glVertex2f(1720.0f, 144.0f);
       glVertex2f(1728.0f, 151.0f);
      glVertex2f(1731.0f, 152.0f);
       glVertex2f(1732.0f, 158.0f);



   glEnd();

   glBegin(GL_QUADS);              // spekar left
      glColor3f(0.35f, 0.2f, 0.2f); // Red

      glVertex2f(381.0f, 147.0f);
      glVertex2f(401.0f, 381.0f); //bottom
      glVertex2f(163.0f, 373.0f);
      glVertex2f(196.0f, 152.0f);



      glColor3f(0.51f, 0.3f, 0.3f); // Red

      glVertex2f(401.0f, 380.0f);
      glVertex2f(360.0f, 437.0f); //bottom
      glVertex2f(222.0f, 439.0f);
      glVertex2f(163.0f, 373.0f);


      glColor3f(0.35f, 0.2f, 0.2f); // Red

      glVertex2f(1732.0f, 371.0f);
      glVertex2f(1492.0f, 380.0f); //bottom
      glVertex2f(1515.0f, 147.0f);
      glVertex2f(1699.0f, 152.0f);


      glColor3f(0.51f, 0.3f, 0.3f); // Red

      glVertex2f(1732.0f, 371.0f);
      glVertex2f(1678.0f, 438.0f); //bottom
      glVertex2f(1535.0f, 438.0f);
      glVertex2f(1492.0f, 380.0f);




   glEnd();

   glColor3f(0.93, 0.85, 0.3);
   circle(60,60,285,313);

   glColor3f(0.2, 0.2, 0.2);
   circle(50,50,285,313);

   glColor3f(0.33, 0.33, 0.33);
   circle(30,30,285,313);

   glColor3f(0.2, 0.2, 0.2);
   circle(18,18,285,313);





   glColor3f(0.93, 0.85, 0.3);
   circle(60,60,1609,312);

   glColor3f(0.2, 0.2, 0.2);
   circle(50,50,1609,312);

   glColor3f(0.33, 0.33, 0.33);
   circle(30,30,1609,312);

   glColor3f(0.2, 0.2, 0.2);
   circle(18,18,1609,312);



   glColor3f(0.93, 0.85, 0.3);
   circle(45,45,288,205);

   glColor3f(0.2, 0.2, 0.2);
   circle(35,35,288,205);

   glColor3f(0.33, 0.33, 0.33);
   circle(25,25,288,205);

   glColor3f(0.2, 0.2, 0.2);
   circle(15,15,288,205);



   glColor3f(0.93, 0.85, 0.3);
   circle(45,45,1609,205);

   glColor3f(0.2, 0.2, 0.2);
   circle(35,35,1609,205);

   glColor3f(0.33, 0.33, 0.33);
   circle(25,25,1609,205);

   glColor3f(0.2, 0.2, 0.2);
   circle(15,15,1609,205);







   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.89f, 0.0f, 0.00f); // red
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);



   glEnd();


   glBegin(GL_POLYGON);            // 2nd elipse
      glColor3f(0.89f, 0.0f, 0.00f); // red
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);



   glEnd();



   glBegin(GL_POLYGON);            // These vertices form a closed polygon
      glColor3f(1.0f, 0.51f, 0.02f); // Yellow
      glVertex2f(1920.0f, 1080.0f);
      glVertex2f(994.0f, 1080.0f);
      glVertex2f(0.0f, 1080.0f);
      glVertex2f(0.5f, 1077.0f);
      glVertex2f(15.0f, 1074.0f);
      glVertex2f(51.0f, 1067.0f);
      glVertex2f(115.0f, 1056.0f);
      glVertex2f(189.0f, 1044.0f);
      glVertex2f(291.0f, 1029.0f);
      glVertex2f(400.0f, 1016.0f);
      glVertex2f(461.0f, 1008.0f);
      glVertex2f(510.0f, 1003.0f);
      glVertex2f(564.0f, 998.0f);
      glVertex2f(603.0f, 994.0f);
      glVertex2f(645.0f, 993.0f);
      glVertex2f(766.0f, 985.0f);
      glVertex2f(843.0f, 981.0f);
      glVertex2f(878.0f, 979.0f);
      glVertex2f(920.0f, 978.0f);
      glVertex2f(984.0f, 977.0f);
      glVertex2f(1114.0f, 978.0f);
      //glVertex2f(1149.0f, 978.0f);
      glVertex2f(1057.0f, 976.0f);
      glVertex2f(1084.0f, 979.0f);
      glVertex2f(1255.0f, 982.0f);
      glVertex2f(1322.0f, 984.0f);
      glVertex2f(1440.0f, 994.0f);
      glVertex2f(1519.0f, 1002.0f);
      glVertex2f(1610.0f, 1015.0f);
      glVertex2f(1742.0f, 1037.0f);
      glVertex2f(1868.0f, 1064.0f);


   glEnd();

   glBegin(GL_POLYGON);            // inner circle
      glColor3f(0.71f, 0.0f, 0.00f);
      glVertex2f(1870.0f, 1080.0f);
      glVertex2f(924.0f, 1080.0f);
      glVertex2f(50.0f, 1080.0f);
      glVertex2f(94.0f, 1073.0f);
      glVertex2f(124.0f, 1068.0f);
      glVertex2f(153.0f, 1064.0f);
      glVertex2f(187.0f, 1058.0f);
      glVertex2f(221.0f, 1052.0f);
      glVertex2f(250.0f, 1050.0f);
      glVertex2f(283.0f, 1044.0f);
      glVertex2f(317.0f, 1041.0f);
      glVertex2f(352.0f, 1035.0f);
      glVertex2f(404.0f, 1030.0f);
      glVertex2f(460.0f, 1024.0f);
      glVertex2f(518.0f, 1017.0f);
      glVertex2f(578.0f, 1012.0f);
      glVertex2f(638.0f, 1006.0f);
      glVertex2f(693.0f, 1002.0f);
      glVertex2f(747.0f, 999.0f);
      glVertex2f(803.0f, 996.0f);
      glVertex2f(929.0f, 991.0f);
      glVertex2f(993.0f, 990.0f);
      glVertex2f(1072.0f, 989.0f);
      glVertex2f(1142.0f, 990.0f);
      glVertex2f(1212.0f, 993.0f);
      glVertex2f(1267.0f, 995.0f);
      glVertex2f(1347.0f, 1000.0f);
      glVertex2f(1422.0f, 1006.0f);
      glVertex2f(1509.0f, 1015.0f);
      glVertex2f(1580.0f, 1024.0f);
      glVertex2f(1659.0f, 1036.0f);
      glVertex2f(1745.0f, 1052.0f);
      glVertex2f(1808.0f, 1068.0f);





   glEnd();


   glBegin(GL_POLYGON);            // 2nd promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(313.0f, 1027.0f);
      glVertex2f(243.0f, 1035.0f);
      glVertex2f(198.0f, 1042.0f);
      glVertex2f(152.0f, 1051.0f);
      glVertex2f(130.0f, 1053.0f);
      glVertex2f(195.0f, 929.0f);

   glEnd();

   glBegin(GL_POLYGON);            // 1st promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(127.0f, 1054.0f);
      glVertex2f(70.0f, 1063.0f);
      glVertex2f(26.0f, 1071.0f);
      glVertex2f(0.0f, 1077.0f);
      glVertex2f(0.0f, 1005.0f);
      glVertex2f(31.0f, 934.0f);


   glEnd();


   glBegin(GL_POLYGON);            // 3rd promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(452.0f, 1010.0f);
      glVertex2f(401.0f, 1015.0f);
      glVertex2f(352.0f, 1021.0f);
      glVertex2f(313.0f, 1027.0f);
      glVertex2f(372.0f, 901.0f);



   glEnd();

   glBegin(GL_POLYGON);            // 4th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(640.0f, 993.0f);
      glVertex2f(581.0f, 997.0f);
      glVertex2f(524.0f, 1002.0f);
      glVertex2f(475.0f, 1008.0f);
      glVertex2f(545.0f, 901.0f);

   glEnd();


   glBegin(GL_POLYGON);            // 5th promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(788.0f, 984.0f);
      glVertex2f(741.0f, 987.0f);
      glVertex2f(693.0f, 989.0f);
      glVertex2f(647.0f, 993.0f);
      glVertex2f(710.0f, 878.0f);



   glEnd();

   glBegin(GL_POLYGON);            // 6th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(967.0f, 978.0f);
      glVertex2f(922.0f, 978.0f);
      glVertex2f(879.0f, 979.0f);
      glVertex2f(817.0f, 983.0f);
      glVertex2f(883.0f, 875.0f);

   glEnd();


   glBegin(GL_POLYGON);            // 7th promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(1104.0f, 978.0f);
      glVertex2f(1058.0f, 976.0f);
      glVertex2f(1010.0f, 976.0f);
      glVertex2f(974.0f, 977.0f);
      glVertex2f(1045.0f, 868.0f);



   glEnd();

   glBegin(GL_POLYGON);            // 8th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(1289.0f, 984.0f);
      glVertex2f(1246.0f, 982.0f);
      glVertex2f(1196.0f, 982.0f);
      glVertex2f(1141.0f, 980.0f);
      glVertex2f(1205.0f, 887.0f);

   glEnd();

   glBegin(GL_POLYGON);            // 9th promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(1441.0f, 994.0f);
      glVertex2f(1390.0f, 989.0f);
      glVertex2f(1345.0f, 986.0f);
      glVertex2f(1293.0f, 983.0f);
      glVertex2f(1382.0f, 865.0f);



   glEnd();

   glBegin(GL_POLYGON);            // 10th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(1625.0f, 1018.0f);
      glVertex2f(1573.0f, 1009.0f);
      glVertex2f(1516.0f, 1001.0f);
      glVertex2f(1456.0f, 996.0f);
      glVertex2f(1545.0f, 896.0f);

   glEnd();

   glBegin(GL_POLYGON);            // 11th promp
      glColor3f(0.4f, 0.0f, 0.2f);
      glVertex2f(1786.0f, 1046.0f);
      glVertex2f(1732.0f, 1035.0f);
      glVertex2f(1685.0f, 1026.0f);
      glVertex2f(1634.0f, 1019.0f);
      glVertex2f(1737.0f, 903.0f);



   glEnd();

   glBegin(GL_POLYGON);            // 12th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(1625.0f, 1018.0f);
      glVertex2f(1573.0f, 1009.0f);
      glVertex2f(1516.0f, 1001.0f);
      glVertex2f(1456.0f, 996.0f);
      glVertex2f(1545.0f, 896.0f);

   glEnd();


   glBegin(GL_POLYGON);            // 12th promp
      glColor3f(0.0f, 0.0f, 0.52f);
      glVertex2f(1920.0f, 1014.0f);
      glVertex2f(1920.0f, 1079.0f);
      glVertex2f(1870.0f, 1064.0f);
      glVertex2f(1828.0f, 1056.0f);
      glVertex2f(1790.0f, 1047.0f);
      glVertex2f(1889.0f, 958.0f);

   glEnd();

   ////////////////////////////////////////////.................................................light

   light1(0,0);
   light1(130,80);
   light1(1330,80);
   light1(1460,0);


   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 0.66f); // right red
      glVertex2f(1310.0f, 347.0f);
      glVertex2f(1284.0f, 362.0f);
      glVertex2f(1271.0f, 349.0f);
      glVertex2f(1306.0f, 330.0f);

      glEnd();




   glBegin(GL_POLYGON);            // ...pianist............................................. upper part
      glColor3f(0.29f, 0.29f, 0.29f); // right red
      glVertex2f(1624.0f, 338.0f);
      glVertex2f(1635.0f, 356.0f);
      glVertex2f(1651.0f, 384.0f);
      glVertex2f(1654.0f, 392.0f);
      glVertex2f(1653.0f, 403.0f);
      glVertex2f(1644.0f, 417.0f);
      glVertex2f(1632.0f, 424.0f);
      glVertex2f(1609.0f, 427.0f);
      glVertex2f(1595.0f, 429.0f);
      glVertex2f(1588.0f, 436.0f);
      glVertex2f(1587.5f, 447.0f);
      glVertex2f(1598.0f, 461.0f);
      glVertex2f(1616.0f, 494.0f);
      glVertex2f(1618.0f, 509.0f);
      glVertex2f(1610.0f, 522.0f);
      glVertex2f(1595.0f, 529.0f);
      glVertex2f(1570.0f, 535.0f);
      glVertex2f(1558.0f, 533.0f);
      glVertex2f(1551.0f, 527.0f);
      glVertex2f(1423.0f, 341.0f);





   glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 0.66f); // right hand finger
      glVertex2f(1380.0f, 300.0f);
      glVertex2f(1389.0f, 297.0f);
      glVertex2f(1392.0f, 282.0f);
      glVertex2f(1375.0f, 282.0f);
      glVertex2f(1374.0f, 289.0f);

glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.35f, 0.35f, 0.35f); // right hand
      glVertex2f(1380.0f, 300.0f);
      glVertex2f(1357.0f, 308.0f);
      glVertex2f(1310.0f, 339.0f);
      glVertex2f(1312.0f, 305.0f);
      glVertex2f(1358.0f, 293.0f);
      glVertex2f(1375.0f, 287.0f);

 glEnd();

   glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist

      glVertex2f(1349.0f, 120.0f);
      glVertex2f(1360.0f, 134.0f);
      glVertex2f(1368.0f, 149.0f);
      glVertex2f(1354.0f, 192.0f);
      glVertex2f(1343.0f, 148.0f);
      glVertex2f(1331.0f, 122.0f);
 glEnd();

 glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1380.0f, 180.0f);
      glVertex2f(1389.0f, 214.0f);
      glVertex2f(1356.0f, 227.0f);
      glVertex2f(1325.0f, 232.0f);
      glVertex2f(1309.0f, 232.0f);
      glVertex2f(1306.0f, 212.0f);

 glEnd();
 glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1396.0f, 102.0f);
      glVertex2f(1349.0f, 120.0f);
      glVertex2f(1331.0f, 122.0f);
      glVertex2f(1324.0f, 108.0f);
      glVertex2f(1365.0f, 101.0f);
      glVertex2f(1393.0f, 97.0f);
glEnd();



   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1587.0f, 342.0f);
      glVertex2f(1526.0f, 428.0f);
      glVertex2f(1522.0f, 425.0f);
      glVertex2f(1578.0f, 342.0f);

   glEnd();
     glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1469.0f, 145.0f);
      glVertex2f(1449.0f, 144.0f);
      glVertex2f(1436.0f, 137.0f);
      glVertex2f(1417.0f, 124.0f);
      glVertex2f(1403.0f, 109.0f);
      glVertex2f(1409.0f, 101.0f);
      glVertex2f(1430.0f, 112.0f);
      glVertex2f(1455.0f, 130.0f);


  glEnd();


   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.38f, 0.38f, 0.38f); // right red
      glVertex2f(1661.0f, 342.0f);
      glVertex2f(1524.0f, 342.0f);
      glVertex2f(1524.0f, 264.0f);
      glVertex2f(1661.0f, 264.0f);

   glEnd();

    glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.30f, 0.30f, 0.30f); // right red
      glVertex2f(1588.0f, 335.0f);
      glVertex2f(1569.0f, 335.0f);
      glVertex2f(1522.0f, 270.0f);
      glVertex2f(1540.0f, 270.0f);

   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.30f, 0.30f, 0.30f); // right red
      glVertex2f(1658.0f, 335.0f);
      glVertex2f(1606.0f, 335.0f);
      glVertex2f(1558.0f, 270.0f);
      glVertex2f(1611.0f, 270.0f);

   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1437.0f, 342.0f);
      glVertex2f(1567.0f, 534.0f);
      glVertex2f(1558.0f, 533.0f);
      glVertex2f(1550.0f, 526.0f);
      glVertex2f(1425.0f, 342.0f);
   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.33f, 0.33f, 0.33f); // right red
      glVertex2f(1649.0f, 264.0f);
      glVertex2f(1574.0f, 264.0f);
      glVertex2f(1574.0f, 257.0f);
      glVertex2f(1649.0f, 257.0f);
   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.44f, 0.44f, 0.44f); // right red
      glVertex2f(1642.0f, 257.0f);
      glVertex2f(1582.0f, 257.0f);
      glVertex2f(1582.0f, 247.0f);
      glVertex2f(1642.0f, 247.0f);
   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.30f, 0.30f, 0.30f); // right red
      glVertex2f(1619.0f, 247.0f);
      glVertex2f(1603.0f, 247.0f);
      glVertex2f(1603.0f, 140.0f);
      glVertex2f(1619.0f, 140.0f);

   glEnd();



   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.33f, 0.33f, 0.33f); // right red
      glVertex2f(1493.0f, 235.0f);
      glVertex2f(1417.0f, 235.0f);
      glVertex2f(1417.0f, 229.0f);
      glVertex2f(1493.0f, 229.0f);
  glEnd();

  glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1485.0f, 229.0f);
      glVertex2f(1424.0f, 229.0f);
      glVertex2f(1424.0f, 219.0f);
      glVertex2f(1485.0f, 219.0f);
  glEnd();

  glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.35f, 0.35f, 0.35f); // right red
      glVertex2f(1462.0f, 219.0f);
      glVertex2f(1448.0f, 219.0f);
      glVertex2f(1448.0f, 117.0f);
      glVertex2f(1462.0f, 117.0f);
   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.3f, 0.3f, 0.3f); // right red
      glVertex2f(1473.0f, 117.0f);
      glVertex2f(1437.0f, 117.0f);
      glVertex2f(1437.0f, 107.0f);
      glVertex2f(1473.0f, 107.0f);
   glEnd();



   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.33f, 0.33f, 0.33f); // right red
      glVertex2f(1629.0f, 140.0f);
      glVertex2f(1594.0f, 140.0f);
      glVertex2f(1594.0f, 130.0f);
      glVertex2f(1629.0f, 130.0f);
   glEnd();

   glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1526.0f, 342.0f);
      glVertex2f(1422.0f, 342.0f);
      glVertex2f(1422.0f, 300.0f);
      glVertex2f(1406.0f, 300.0f);
      glVertex2f(1405.0f, 292.0f);
      glVertex2f(1401.0f, 285.0f);
      glVertex2f(1395.0f, 280.0f);
      glVertex2f(1347.0f, 278.0f);
      glVertex2f(1341.0f, 273.0f);
      glVertex2f(1341.0f, 241.0f);
      glVertex2f(1347.0f, 235.0f);
      glVertex2f(1526.0f, 235.0f);




   glEnd();

    glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.35f, 0.35f, 0.35f); // right red
      glVertex2f(1521.0f, 335.0f);
      glVertex2f(1459.0f, 335.0f);
      glVertex2f(1386.0f, 241.0f);
      glVertex2f(1450.0f, 241.0f);

   glEnd();



    glBegin(GL_TRIANGLES);            // ...pianist.............................................
      glColor3f(0.35f, 0.35f, 0.35f); // right red
      glVertex2f(1526.0f, 311.0f);
      glVertex2f(1473.0f, 241.0f);
      glVertex2f(1526.0f, 241.0f);


   glEnd();


  glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.3f, 0.3f, 0.3f); // right red
      glVertex2f(1414.0f, 235.0f);
      glVertex2f(1401.0f, 235.0f);
      glVertex2f(1401.0f, 141.0f);
      glVertex2f(1414.0f, 141.0f);
   glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 1.0f); // white shirt
      glVertex2f(1308.0f, 346.0f);
      glVertex2f(1297.0f, 342.0f);
      glVertex2f(1281.0f, 359.0f);
      glVertex2f(1272.0f, 351.0f);
      glVertex2f(1286.0f, 333.0f);
      glVertex2f(1299.0f, 300.0f);
      glVertex2f(1305.0f, 330.0f);
      glVertex2f(1310.0f, 341.0f);

   glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.8f, 0.8f, 0.8f); // shirt
      glVertex2f(1306.0f, 330.0f);
      glVertex2f(1298.0f, 337.0f);
      glVertex2f(1289.0f, 326.0f);
      glVertex2f(1300.0f, 299.0f);
glEnd();


  glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.28f, 0.28f, 0.28f); // right red
      glVertex2f(1423.0f, 141.0f);
      glVertex2f(1392.0f, 141.0f);
      glVertex2f(1392.0f, 131.0f);
      glVertex2f(1423.0f, 131.0f);

  glEnd();




  // .....................pianist body ................................................................................................................




glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1418.0f, 125.0f);
      glVertex2f(1355.0f, 217.0f);

      glVertex2f(1340.0f, 186.0f);
      glVertex2f(1404.0f, 109.0f);

glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1355.0f, 217.0f);
      glVertex2f(1307.0f, 230.0f);
      glVertex2f(1239.0f, 230.0f);
      glVertex2f(1239.0f, 219.0f);
      glVertex2f(1236.0f, 202.0f);
      glVertex2f(1232.0f, 186.0f);
      glVertex2f(1340.0f, 186.0f);
      glVertex2f(1348.0f, 202.0f);



glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1271.0f, 186.0f);
      glVertex2f(1232.0f, 186.0f);
      glVertex2f(1225.0f, 166.0f);
      glVertex2f(1192.0f, 114.0f);
      glVertex2f(1200.0f, 114.0f);
      glVertex2f(1208.0f, 115.0f);
      glVertex2f(1222.0f, 123.0f);
      glVertex2f(1229.0f, 132.0f);
      glVertex2f(1238.0f, 144.0f);
      glVertex2f(1239.0f, 120.0f);
      glVertex2f(1257.0f, 143.0f);
      glVertex2f(1266.0f, 163.0f);

glEnd();

glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1404.0f, 109.0f);
      glVertex2f(1411.0f, 117.0f);
      glVertex2f(1348.0f, 203.0f);
      glVertex2f(1340.0f, 187.0f);
glEnd();

glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1340.0f, 187.0f);
      glVertex2f(1345.0f, 196.0f);
      glVertex2f(1348.0f, 203.0f);

      glVertex2f(1290.0f, 203.0f);
      glVertex2f(1282.0f, 212.0f);
      glVertex2f(1278.0f, 220.0f);
      glVertex2f(1247.0f, 222.0f);
      glVertex2f(1245.0f, 204.0f);
      glVertex2f(1241.0f, 187.0f);
      glVertex2f(1271.0f, 187.0f);




   glEnd();

glBegin(GL_POLYGON);            // ...
      glColor3f(0.3f, 0.3f, 0.3f); // pianist
      glVertex2f(1271.0f, 187.0f);
      glVertex2f(1241.0f, 187.0f);
      glVertex2f(1234.0f, 164.0f);
      glVertex2f(1225.0f, 146.0f);
      glVertex2f(1218.0f, 128.0f);
      glVertex2f(1208.0f, 118.0f);
      glVertex2f(1195.0f, 115.0f);
      glVertex2f(1211.0f, 117.0f);
      glVertex2f(1222.0f, 124.0f);
      glVertex2f(1238.0f, 145.0f);
      glVertex2f(1239.0f, 120.0f);
      glVertex2f(1257.0f, 142.0f);
      glVertex2f(1266.0f, 163.0f);

   glEnd();
glBegin(GL_POLYGON);            // ...
      glColor3f(0.2f, 0.2f, 0.2f); // pianist
      glVertex2f(1341.0f, 183.0f);
      glVertex2f(1341.0f, 197.0f);
      glVertex2f(1248.0f, 197.0f);
      glVertex2f(1248.0f, 183.0f);
glEnd();

glColor3f(0.2f, 0.2f, 0.2f);
circle(30,12,1294,113);

glBegin(GL_POLYGON);            // ...
      glColor3f(0.2f, 0.2f, 0.2f); // pianist
      glVertex2f(1300.0f, 183.0f);
      glVertex2f(1288.0f, 183.0f);
      glVertex2f(1288.0f, 113.0f);
      glVertex2f(1300.0f, 113.0f);
glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.43f, 0.43f, 0.43f); // right red
      glVertex2f(1300.0f, 215.0f);
      glVertex2f(1325.0f, 229.0f);
      glVertex2f(1310.0f, 342.0f);
      glVertex2f(1306.0f, 331.0f);
      glVertex2f(1299.0f, 298.0f);
      glVertex2f(1284.0f, 333.0f);
      glVertex2f(1271.0f, 350.0f);
      glVertex2f(1258.0f, 344.0f);
      glVertex2f(1249.0f, 335.0f);
      glVertex2f(1244.0f, 323.0f);
      glVertex2f(1240.0f, 300.0f);
      glVertex2f(1239.0f, 274.0f);
      glVertex2f(1239.5f, 230.0f);
glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.5f, 0.5f, 0.5f); // right red

      glVertex2f(1274.0f, 292.0f);
      glVertex2f(1274.0f, 315.0f);
      glVertex2f(1279.0f, 330.0f);
      glVertex2f(1278.0f, 336.0f);
      glVertex2f(1274.0f, 341.0f);
      glVertex2f(1267.0f, 344.0f);
      glVertex2f(1250.0f, 335.0f);
      glVertex2f(1246.0f, 321.0f);
      glVertex2f(1244.0f, 299.0f);
      glVertex2f(1245.0f, 286.0f);
      glVertex2f(1253.0f, 272.0f);
      glVertex2f(1262.0f, 268.0f);
      glVertex2f(1275.0f, 270.0f);


glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.5f, 0.5f, 0.5f); // right red
      glVertex2f(1330.0f, 299.0f);
      glVertex2f(1300.0f, 298.0f);
      glVertex2f(1274.0f, 292.0f);
      glVertex2f(1275.0f, 270.0f);
      glVertex2f(1282.0f, 271.0f);
      glVertex2f(1305.0f, 278.0f);
      glVertex2f(1318.0f, 283.0f);
      glVertex2f(1328.0f, 284.0f);

glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 0.66f); // right red
      glVertex2f(1362.0f, 279.0f);
      glVertex2f(1356.0f, 291.0f);
      glVertex2f(1344.0f, 297.0f);
      glVertex2f(1353.0f, 301.0f);
      glVertex2f(1351.0f, 303.0f);
      glVertex2f(1342.0f, 298.0f);
      glVertex2f(1330.0f, 298.0f);
      glVertex2f(1328.0f, 284.0f);
      glVertex2f(1337.0f, 282.0f);
      glVertex2f(1345.0f, 285.0f);
      glVertex2f(1351.0f, 279.0f);

glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 0.66f); // right red
      glVertex2f(1348.0f, 360.0f);
      glVertex2f(1343.0f, 410.0f);
      glVertex2f(1336.0f, 430.0f);
      glVertex2f(1269.0f, 446.0f);
      glVertex2f(1263.0f, 410.0f);
      glVertex2f(1271.0f, 394.0f);
      glVertex2f(1285.0f, 363.0f);
      glVertex2f(1296.0f, 346.0f);
      glVertex2f(1323.0f, 348.0f);
glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.4f, 0.0f, 0.0f); // hair
      glVertex2f(1343.0f, 410.0f);
      glVertex2f(1348.0f, 430.0f);
      glVertex2f(1269.0f, 446.0f);
      glVertex2f(1279.0f, 425.0f);
      glVertex2f(1322.0f, 423.0f);

glEnd();
glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.4f, 0.0f, 0.0f); // right red
      glVertex2f(1275.0f, 402.0f);
      glVertex2f(1279.0f, 425.0f);
      glVertex2f(1269.0f, 446.0f);
      glVertex2f(1262.0f, 409.0f);
      glVertex2f(1271.0f, 393.0f);

glEnd();


 glLineWidth(3);          //Line drawing
    glColor3f(0.4, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(1272.0, 395.0, 0.0);
    glVertex3f(1285.0, 363.0, 0.0);

    glVertex3f(1285.0, 363.0, 0.0);
    glVertex3f(1296.0, 346.0, 0.0);


    glVertex3f(1342.0, 410.0, 0.0);
    glVertex3f(1346.0, 360.0, 0.0);

    glVertex3f(1298.0, 408.0, 0.0);
    glVertex3f(1283.0, 402.0, 0.0);

    glVertex3f(1330.0, 410.0, 0.0);
    glVertex3f(1315.0, 411.0, 0.0);





glEnd();

glColor3f(0.4f, 0.0f, 0.0f);
circle(4,4,1294,395);

glColor3f(1.0f, 1.0f, 1.0f);
circle(1.8,1.8,1296,395);



glColor3f(0.4f, 0.0f, 0.0f);
circle(4,4,1325,400);

glColor3f(1.0f, 1.0f, 1.0f);
circle(1.8,1.8,1327,400);

glLineWidth(.5);          //Line drawing
    glColor3f(0.6, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(1316.0, 393.0, 0.0);
    glVertex3f(1309.0, 391.0, 0.0);


glEnd();



glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(0.4f, 0.0f, 0.0f); // right red
      glVertex2f(1345.0f, 383.0f);
      glVertex2f(1327.0f, 387.0f);
      glVertex2f(1310.0f, 385.0f);
      glVertex2f(1293.0f, 379.0f);
      glVertex2f(1282.0f, 372.0f);
      glVertex2f(1294.0f, 346.0f);
      glVertex2f(1323.0f, 350.0f);
      glVertex2f(1348.0f, 359.0f);


glEnd();

glBegin(GL_POLYGON);            // ...pianist.............................................
      glColor3f(1.0f, 1.0f, 1.0f); // right red
      glVertex2f(1336.0f, 383.0f);
      glVertex2f(1324.0f, 383.0f);
      glVertex2f(1312.0f, 380.0f);
      glVertex2f(1303.0f, 376.0f);
      glVertex2f(1310.0f, 369.0f);
      glVertex2f(1318.0f, 367.0f);
      glVertex2f(1325.0f, 368.0f);
      glVertex2f(1330.0f, 371.0f);
      glVertex2f(1334.0f, 376.0f);
glEnd();
 musical_symbol3();



//..............................................................................................................

drummer();
left_hand_drummer();
right_hand_drummer();

   glPushMatrix();             //Guitarist................................................................................................................
   glTranslatef(tx,ty,0);

   glBegin(GL_POLYGON);            // left leg of the guitarist
      glColor3f(0.21f, 0.5f, 0.97f); // red
      glVertex2f(481.0f, 205.0f);
      glVertex2f(471.0f, 200.0f);
      glVertex2f(463.0f, 199.0f);
      glVertex2f(455.0f, 198.0f);
      glVertex2f(449.0f, 199.0f);
      glVertex2f(440.0f, 200.0f);
      glVertex2f(442.0f, 192.0f);
      glVertex2f(438.0f, 180.0f);
      glVertex2f(432.0f, 168.0f);
      glVertex2f(426.0f, 158.0f);
      glVertex2f(420.0f, 150.0f);
      glVertex2f(422.0f, 143.0f);
      glVertex2f(429.0f, 137.0f);
      glVertex2f(438.0f, 132.0f);
      glVertex2f(458.0f, 128.0f);
      glVertex2f(460.0f, 140.0f);
      glVertex2f(463.0f, 150.0f);
      glVertex2f(464.0f, 154.0f);
      glVertex2f(468.0f, 161.0f);
      glVertex2f(473.0f, 173.0f);
      glVertex2f(478.0f, 188.0f);
      glVertex2f(480.0f, 196.0f);


   glEnd();


   glBegin(GL_POLYGON);            // right leg
      glColor3f(0.21f, 0.5f, 0.97f); // red
      glVertex2f(515.0f, 231.0f);
      glVertex2f(507.0f, 229.0f);
      glVertex2f(499.0f, 229.0f);
      glVertex2f(496.0f, 226.0f);
      glVertex2f(492.0f, 216.0f);
      glVertex2f(487.0f, 210.0f);
      glVertex2f(483.0f, 206.0f);
      glVertex2f(489.0f, 196.0f);
      glVertex2f(495.0f, 185.0f);
      glVertex2f(500.0f, 173.0f);
      glVertex2f(504.0f, 159.0f);
      glVertex2f(505.0f, 149.0f);
      glVertex2f(505.0f, 133.0f);
      glVertex2f(517.0f, 133.0f);
      glVertex2f(527.0f, 135.0f);
      glVertex2f(542.0f, 139.0f);
      glVertex2f(540.0f, 156.0f);
      glVertex2f(534.0f, 176.0f);
      glVertex2f(526.0f, 203.0f);
      glVertex2f(520.0f, 219.0f);



   glEnd();


   glBegin(GL_POLYGON);            // left shoe
      glColor3f(0.45f, 0.22f, 0.0f); // red
      glVertex2f(455.0f, 122.0f);
      glVertex2f(456.0f, 133.0f);
      glVertex2f(448.0f, 138.0f);
      glVertex2f(439.0f, 137.0f);
      glVertex2f(434.0f, 133.0f);
      glVertex2f(423.0f, 143.0f);
      glVertex2f(420.0f, 138.0f);
      glVertex2f(416.0f, 133.0f);
      glVertex2f(415.0f, 125.0f);
      glVertex2f(415.0f, 119.0f);
      glVertex2f(418.0f, 107.0f);
      glVertex2f(420.0f, 102.0f);
      glVertex2f(424.0f, 99.0f);
      glVertex2f(433.0f, 94.0f);
      glVertex2f(443.0f, 92.0f);
      glVertex2f(452.0f, 91.0f);
      glVertex2f(460.0f, 92.0f);
      glVertex2f(464.0f, 96.0f);
      glVertex2f(463.0f, 109.0f);
      glVertex2f(460.0f, 116.0f);



   glEnd();


   glBegin(GL_POLYGON);            // right leg
      glColor3f(0.45f, 0.22f, 0.0f); // red
      glVertex2f(543.0f, 138.0f);
      glVertex2f(528.0f, 134.0f);
      glVertex2f(518.0f, 133.0f);
      glVertex2f(506.0f, 132.0f);
      glVertex2f(505.0f, 118.0f);
      glVertex2f(515.0f, 114.0f);
      glVertex2f(526.0f, 107.0f);
      glVertex2f(538.0f, 102.0f);
      glVertex2f(548.0f, 101.0f);
      glVertex2f(559.0f, 103.0f);
      glVertex2f(567.0f, 107.0f);
      glVertex2f(573.0f, 113.0f);
      glVertex2f(571.0f, 119.0f);
      glVertex2f(558.0f, 128.0f);
      glVertex2f(549.0f, 132.0f);




   glEnd();

   glBegin(GL_POLYGON);            // ...
      glColor3f(0.99f, 0.9f, 0.5f); // right hand..................................................................
      glVertex2f(559.0f, 295.0f);
      glVertex2f(554.0f, 301.0f);
      glVertex2f(550.0f, 307.0f);
      glVertex2f(531.0f, 286.0f);
      glVertex2f(531.0f, 286.0f);
      glVertex2f(531.0f, 294.0f);
      glVertex2f(511.0f, 281.0f);
      glVertex2f(518.0f, 260.0f);
      glVertex2f(540.0f, 267.0f);





   glEnd();


    glBegin(GL_POLYGON);            // guitar
      glColor3f(1.0f, 0.12f, 0.0f); // red
      glVertex2f(508.0f, 304.0f);
      glVertex2f(497.0f, 306.0f);
      glVertex2f(488.0f, 304.0f);
      glVertex2f(481.0f, 299.0f);
      glVertex2f(476.0f, 293.0f);
      glVertex2f(472.0f, 288.0f);
      glVertex2f(465.0f, 289.0f);
      glVertex2f(455.0f, 290.0f);
      glVertex2f(442.0f, 290.0f);
      glVertex2f(432.0f, 288.0f);
      glVertex2f(425.0f, 283.0f);
      glVertex2f(420.0f, 278.0f);
      glVertex2f(414.0f, 270.0f);
      glVertex2f(410.0f, 261.0f);
      glVertex2f(408.0f, 250.0f);
      glVertex2f(409.0f, 238.0f);
      glVertex2f(412.0f, 229.0f);
      glVertex2f(417.0f, 220.0f);
      glVertex2f(425.0f, 211.0f);
      glVertex2f(434.0f, 205.0f);
      glVertex2f(444.0f, 201.0f);
      glVertex2f(455.0f, 199.0f);
      glVertex2f(465.0f, 199.0f);
      glVertex2f(471.0f, 200.0f);
      glVertex2f(478.0f, 203.0f);
      glVertex2f(484.0f, 207.0f);
      glVertex2f(488.0f, 212.0f);
      glVertex2f(493.0f, 218.0f);
      glVertex2f(496.0f, 222.0f);
      glVertex2f(499.0f, 229.0f);
      glVertex2f(501.0f, 237.0f);
      glVertex2f(503.0f, 242.0f);
      glVertex2f(506.0f, 246.0f);
      glVertex2f(512.0f, 248.0f);
      glVertex2f(521.0f, 249.0f);
      glVertex2f(530.0f, 251.0f);
      glVertex2f(536.0f, 257.0f);
      glVertex2f(540.0f, 266.0f);
      //glVertex2f(531.0f, 273.0f);
      //glVertex2f(536.0f, 272.0f);
      //glVertex2f(525.0f, 273.0f);
     glVertex2f(516.0f, 274.0f);
      //glVertex2f(509.0f, 276.0f);
    glVertex2f(503.0f, 284.0f);

      //glVertex2f(502.0f, 293.0f);
      //glVertex2f(505.0f, 298.0f);




   glEnd();

   glBegin(GL_POLYGON);            // shirt lower part
      glColor3f(0.0f, 0.9f, 0.0f); // red
      glVertex2f(516.0f, 249.0f);
      glVertex2f(512.0f, 248.0f);
      glVertex2f(506.0f, 246.0f);
      glVertex2f(503.0f, 242.0f);
      glVertex2f(501.0f, 237.0f);
      glVertex2f(499.0f, 229.0f);
      glVertex2f(507.0f, 229.0f);
      glVertex2f(514.0f, 232.0f);
      glVertex2f(521.0f, 232.0f);
      glVertex2f(519.0f, 240.0f);



   glEnd();

   glBegin(GL_POLYGON);            // guitar fret
      glColor3f(0.13f, 0.13f, 0.13f);
      glVertex2f(572.0f, 341.0f);
      glVertex2f(484.0f, 281.0f);
      glVertex2f(491.0f, 269.0f);
      glVertex2f(580.0f, 329.0f);

   glEnd();

   glBegin(GL_POLYGON);            // guitar fret
      glColor3f(0.13f, 0.13f, 0.13f);
      glVertex2f(432.0f, 250.0f);
      glVertex2f(429.0f, 247.0f);
      glVertex2f(441.0f, 229.0f);
      glVertex2f(445.0f, 232.0f);

   glEnd();

   glBegin(GL_POLYGON);            // guitar fret
      glColor3f(1.0f, 0.12f, 0.0f);
      glVertex2f(612.0f, 362.0f);
      glVertex2f(598.0f, 355.0f);
      glVertex2f(577.0f, 353.0f);
      glVertex2f(571.0f, 341.0f);
      glVertex2f(581.0f, 329.0f);
      glVertex2f(599.0f, 331.0f);
      glVertex2f(620.0f, 356.0f);


   glEnd();

   glColor3f(0.13f, 0.13f, 0.13f);
   circle(15,15,465,258);

   glColor3f(0.13f, 0.13f, 0.13f);
   circle(2.2,2.2,579,345);

   glColor3f(0.13f, 0.13f, 0.13f);
   circle(2.2,2.2,590,348);

   glColor3f(0.13f, 0.13f, 0.13f);
   circle(2.2,2.2,600,351);

   glColor3f(0.13f, 0.13f, 0.13f);
   circle(2.2,2.2,610,355);




    glLineWidth(.5);          //Line drawing
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_LINES);
    glVertex3f(433.0, 244.0, 0.0);
    glVertex3f(576.0, 345.0, 0.0);

    glVertex3f(435.0, 241.0, 0.0);
    glVertex3f(587.0, 348.0, 0.0);

    glVertex3f(437.0, 238.0, 0.0);
    glVertex3f(597.0, 351.0, 0.0);

    glVertex3f(439.0, 235.0, 0.0);
    glVertex3f(607.0, 355.0, 0.0);

    glEnd();




   glBegin(GL_POLYGON);            // shirt left side
      glColor3f(0.0f, 0.9f, 0.0f); // red
      glVertex2f(463.0f, 289.0f);
      glVertex2f(459.0f, 306.0f);
      glVertex2f(457.0f, 325.0f);
      glVertex2f(458.0f, 345.0f);
      glVertex2f(458.0f, 356.0f);
      glVertex2f(454.0f, 357.0f);
      glVertex2f(448.0f, 352.0f);
      glVertex2f(446.0f, 348.0f);
      glVertex2f(429.0f, 339.0f);
      glVertex2f(423.0f, 333.0f);
      glVertex2f(420.0f, 327.0f);
      glVertex2f(417.0f, 317.0f);
      glVertex2f(416.0f, 311.0f);
      glVertex2f(424.0f, 303.0f);
      glVertex2f(433.0f, 303.0f);
      glVertex2f(439.0f, 306.0f);
      glVertex2f(442.0f, 289.0f);
      glVertex2f(447.0f, 291.0f);
      glVertex2f(456.0f, 290.0f);




   glEnd();




    glPushMatrix();
	glTranslatef(442, 264, 0);
	glRotatef(spin, 0.0, 0.0, 0.8);//y axis er shapekkhe so y=1 set kora


   glBegin(GL_POLYGON);            //  left hand.........................................................................................
      glColor3f(0.99f, 0.9f, 0.5f); // red
      glVertex2f(439.0f-442, 289.0f-264);
      glVertex2f(432.0f-442, 287.0f-264);
      glVertex2f(423.0f-442, 287.0f-264);
      glVertex2f(417.0f-442, 289.0f-264);
      glVertex2f(419.0f-442, 281.0f-264);
      glVertex2f(430.0f-442, 261.0f-264);
      glVertex2f(437.0f-442, 251.0f-264);
      glVertex2f(446.0f-442, 236.0f-264);
      glVertex2f(454.0f-442, 235.0f-264);
      glVertex2f(457.0f-442, 237.0f-264);
      glVertex2f(463.0f-442, 236.0f-264);
      glVertex2f(466.0f-442, 243.0f-264);
      glVertex2f(470.0f-442, 248.0f-264);
      glVertex2f(471.0f-442, 253.0f-264);
      glVertex2f(466.0f-442, 255.0f-264);
      glVertex2f(462.0f-442, 253.0f-264);
      glVertex2f(454.0f-442, 260.0f-264);
      glVertex2f(466.0f-442, 259.0f-264);
      glVertex2f(467.0f-442, 264.0f-264);
      glVertex2f(459.0f-442, 266.0f-264);
      glVertex2f(449.0f-442, 254.0f-264);
      glVertex2f(440.0f-442, 283.0f-264);

   glEnd();

   glPopMatrix();
    glBegin(GL_POLYGON);            // shirt left dark
      glColor3f(0.0f, 0.2f, 0.0f); // red
      glVertex2f(440.0f, 292.0f);
      glVertex2f(439.0f, 306.0f);
      glVertex2f(433.0f, 303.0f);
      glVertex2f(424.0f, 303.0f);
      glVertex2f(419.0f, 306.0f);
      glVertex2f(416.0f, 311.0f);
      glVertex2f(412.0f, 293.0f);
      glVertex2f(423.0f, 287.0f);
      glVertex2f(433.0f, 287.0f);

   glEnd();


   glBegin(GL_POLYGON);            // shirt right side
      glColor3f(0.0f, 0.9f, 0.0f); // red
      glVertex2f(522.0f, 319.0f);
      glVertex2f(516.0f, 331.0f);
      glVertex2f(506.0f, 344.0f);
      glVertex2f(500.0f, 349.0f);
      glVertex2f(494.0f, 352.0f);
      glVertex2f(489.0f, 357.0f);
      glVertex2f(483.0f, 360.0f);
      glVertex2f(480.0f, 357.0f);
      glVertex2f(484.0f, 347.0f);
      glVertex2f(485.0f, 341.0f);
      glVertex2f(486.0f, 323.0f);
      glVertex2f(486.0f, 305.0f);
      glVertex2f(497.0f, 306.0f);
      glVertex2f(510.0f, 306.0f);
      glVertex2f(517.0f, 312.0f);




   glEnd();

   glBegin(GL_POLYGON);            // shirt right dark
      glColor3f(0.0f, 0.2f, 0.0f); // red
      glVertex2f(528.0f, 312.0f);
      glVertex2f(523.0f, 318.0f);
      glVertex2f(510.0f, 307.0f);
      glVertex2f(508.0f, 295.0f);
      glVertex2f(518.0f, 304.0f);


   glEnd();
   glBegin(GL_POLYGON);            // shirt middle part
      glColor3f(0.66f, 1.0f, 1.0f); // red
      glVertex2f(482.0f, 348.0f);
      glVertex2f(477.0f, 342.0f);
      glVertex2f(468.0f, 341.0f);
      glVertex2f(462.0f, 343.0f);
      glVertex2f(458.0f, 349.0f);
      glVertex2f(458.0f, 327.0f);
      glVertex2f(459.0f, 304.0f);
      glVertex2f(463.0f, 290.0f);
      glVertex2f(472.0f, 290.0f);
      glVertex2f(480.0f, 298.0f);
      glVertex2f(486.0f, 304.0f);
      glVertex2f(486.0f, 323.0f);
      glVertex2f(485.0f, 341.0f);

   glEnd();

   glBegin(GL_POLYGON);            // gola
      glColor3f(1.0f, 0.58f, 0.58f); // red
      glVertex2f(480.0f, 359.0f);
      glVertex2f(473.0f, 356.0f);
      glVertex2f(465.0f, 355.0f);
      glVertex2f(459.0f, 356.0f);
      glVertex2f(459.0f, 348.0f);
      glVertex2f(463.0f, 343.0f);
      glVertex2f(471.0f, 341.0f);
      glVertex2f(478.0f, 342.0f);
      glVertex2f(482.0f, 349.0f);
      glVertex2f(483.0f, 353.0f);

   glEnd();

   /*glLineWidth(.5);          //Line drawing
   glColor3f(0.0, 0.0, 0.0);
   glBegin(GL_LINES);
    glVertex3f(480.0f, 359.0f, 0.0);
    glVertex3f(473.0f, 356.0f, 0.0);

    glVertex3f(473.0f, 356.0f, 0.0);
    glVertex3f(465.0f, 355.0f, 0.0);



    glEnd();
   */

   glBegin(GL_POLYGON);            // head
      glColor3f(0.99f, 0.9f, 0.5f); // red
      glVertex2f(503.0f, 392.0f);
      glVertex2f(498.0f, 425.0f);
      glVertex2f(425.0f, 444.0f);
      glVertex2f(417.0f, 417.0f);
      glVertex2f(413.0f, 416.0f);
      glVertex2f(408.0f, 405.0f);
      glVertex2f(416.0f, 393.0f);
      glVertex2f(424.0f, 391.0f);
      glVertex2f(427.0f, 379.0f);
      glVertex2f(435.0f, 369.0f);
      glVertex2f(459.0f, 357.0f);
      glVertex2f(474.0f, 356.0f);
      glVertex2f(481.0f, 359.0f);
      glVertex2f(499.0f, 376.0f);
      glVertex2f(503.0f, 385.0f);

   glEnd();


   glBegin(GL_POLYGON);            // hair
      glColor3f(0.1f, 0.1f, 0.1f); // red
      glVertex2f(500.0f, 411.0f);
      glVertex2f(506.0f, 424.0f);
      glVertex2f(507.0f, 438.0f);
      glVertex2f(512.0f, 431.0f);
      glVertex2f(512.0f, 450.0f);
      glVertex2f(498.0f, 469.0f);
      glVertex2f(506.0f, 470.0f);
      glVertex2f(482.0f, 487.0f);
      glVertex2f(438.0f, 491.0f);
      glVertex2f(412.0f, 475.0f);
      glVertex2f(402.0f, 462.0f);
      glVertex2f(397.0f, 452.0f);
      glVertex2f(396.0f, 437.0f);

     // glVertex2f(405.0f, 424.0f);

      glVertex2f(409.0f, 411.0f);
      //glVertex2f(413.0f, 416.0f);
      //glVertex2f(418.0f, 418.0f);
    //  glVertex2f(428.0f, 412.0f);




    //  glVertex2f(424.0f, 443.0f);


     // glVertex2f(446.0f, 429.0f);
      //glVertex2f(494.0f, 420.0f);
      //glVertex2f(498.0f, 415.0f);

   glEnd();


   glLineWidth(.5);          //Line drawing
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(462.0, 400.0, 0.0);
    glVertex3f(472.0, 390.0, 0.0);


   glLineWidth(.5);          //Line drawing
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(462.0, 400.0, 0.0);
    glVertex3f(472.0, 390.0, 0.0);

    glVertex3f(472.0, 390.0, 0.0);
    glVertex3f(460.0, 384.0, 0.0);

   // glVertex3f(484.0, 372.0, 0.0);
   // glVertex3f(454.0, 372.0, 0.0);

    glVertex3f(453.0, 372.0, 0.0); //smile
    glVertex3f(460.0, 368.0, 0.0);

    glVertex3f(460.0, 368.0, 0.0);
    glVertex3f(467.0, 367.0, 0.0);

    glVertex3f(467.0, 367.0, 0.0);
    glVertex3f(475.0, 370.0, 0.0);

    glVertex3f(475.0, 370.0, 0.0);
    glVertex3f(478.0, 375.0, 0.0);


    //smile


    glVertex3f(441.0, 405.0, 0.0);
    glVertex3f(454.0, 405.0, 0.0);

    glVertex3f(479.0, 405.0, 0.0);
    glVertex3f(491.0, 405.0, 0.0);


    glVertex3f(499.0, 409.0, 0.0); //border
    glVertex3f(504.0, 392.0, 0.0);

    glVertex3f(504.0, 392.0, 0.0); //border
    glVertex3f(499.0, 375.0, 0.0);

    glVertex3f(499.0, 375.0, 0.0); //border
    glVertex3f(481.0, 358.0, 0.0);

    glVertex3f(481.0, 358.0, 0.0); //border
    glVertex3f(459.0, 356.0, 0.0);

    glVertex3f(459.0, 356.0, 0.0); //border
    glVertex3f(435.0, 368.0, 0.0);

    glVertex3f(435.0, 368.0, 0.0); //border
    glVertex3f(428.0, 378.0, 0.0);

    glVertex3f(428.0, 378.0, 0.0); //border
    glVertex3f(425.0, 391.0, 0.0);

    glVertex3f(425.0, 391.0, 0.0); //border
    glVertex3f(417.0, 392.0, 0.0);

    glVertex3f(417.0, 392.0, 0.0); //border
    glVertex3f(408.0, 403.0, 0.0);

    glVertex3f(408.0, 403.0, 0.0); //border
    glVertex3f(409.0, 411.0, 0.0);

    glVertex3f(454.0, 357.0, 0.0); //border
    glVertex3f(448.0, 352.0, 0.0);

    glVertex3f(448.0, 352.0, 0.0); //border
    glVertex3f(446.0, 348.0, 0.0);

    glVertex3f(446.0, 348.0, 0.0); //border
    glVertex3f(439.0, 331.0, 0.0);

    glVertex3f(439.0, 331.0, 0.0); //border
    glVertex3f(451.0, 337.0, 0.0);

    glVertex3f(451.0, 337.0, 0.0); //border
    glVertex3f(459.0, 306.0, 0.0);

    glVertex3f(458.0, 356.0, 0.0); //border
    glVertex3f(459.0, 306.0, 0.0);

    glVertex3f(459.0, 306.0, 0.0); //border
    glVertex3f(463.0, 290.0, 0.0);

    glVertex3f(480.0, 358.0, 0.0); //border
    glVertex3f(489.0, 356.0, 0.0);

    glVertex3f(489.0, 356.0, 0.0); //border
    glVertex3f(500.0, 337.0, 0.0);

    glVertex3f(500.0, 337.0, 0.0); //border
    glVertex3f(489.0, 339.0, 0.0);

    glVertex3f(489.0, 339.0, 0.0); //border
    glVertex3f(486.0, 304.0, 0.0);

    glVertex3f(480.0, 358.0, 0.0); //border
    glVertex3f(486.0, 340.0, 0.0);

    glVertex3f(486.0, 340.0, 0.0); //border
    glVertex3f(486.0, 304.0, 0.0);


    glVertex3f(570.0, 325.0, 0.0); //border
    glVertex3f(569.0, 313.0, 0.0);

    glVertex3f(569.0, 313.0, 0.0); //border
    glVertex3f(565.0, 302.0, 0.0);

    glVertex3f(565.0, 302.0, 0.0); //border
    glVertex3f(559.0, 295.0, 0.0);

    glVertex3f(559.0, 295.0, 0.0); //border
    glVertex3f(540.0, 267.0, 0.0);

    glVertex3f(549.0, 307.0, 0.0); //border
    glVertex3f(531.0, 286.0, 0.0);

    glVertex3f(531.0, 286.0, 0.0); //border
    glVertex3f(529.0, 295.0, 0.0);

    glVertex3f(554.0, 307.0, 0.0); //border
    glVertex3f(547.0, 315.0, 0.0);

    glVertex3f(547.0, 315.0, 0.0); //border
    glVertex3f(561.0, 337.0, 0.0);

    glVertex3f(561.0, 337.0, 0.0); //border
    glVertex3f(571.0, 326.0, 0.0);

    glVertex3f(571.0, 322.0, 0.0); //border
    glVertex3f(570.0, 314.0, 0.0);

    glVertex3f(565.0, 303.0, 0.0); //border
    glVertex3f(559.0, 296.0, 0.0);

    glVertex3f(549.0, 318.0, 0.0); //border
    glVertex3f(554.0, 314.0, 0.0);



    glEnd();


   glBegin(GL_POLYGON);            // ...
      glColor3f(0.99f, 0.9f, 0.5f); // right hand................................................................./////
      glVertex2f(571.0f, 326.0f);
      glVertex2f(561.0f, 337.0f);
      glVertex2f(547.0f, 315.0f);
      glVertex2f(550.0f, 307.0f);
      glVertex2f(554.0f, 301.0f);
      glVertex2f(559.0f, 295.0f);
      glVertex2f(565.0f, 302.0f);
      glVertex2f(569.0f, 314.0f);




   glEnd();

   glColor3f(0.2, 0.2, 0.2);
   circle(2,2,448,400);

   glColor3f(0.2, 0.2, 0.2);
   circle(2,2,486,400);

   glBegin(GL_POLYGON);            // ...
      glColor3f(1.0f, 0.5f, 0.5f); // right red
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);
      glVertex2f(.0f, .0f);




   glEnd();







   glPopMatrix();


  musical_symbol1();
  musical_symbol2();


  microphone_stand();
  audience1(0,0,1022,48);

  audience1(80,0,1102,48);

  audience1(-90,0,932,18);
  audience1(-270,0,752,48);
  audience1(240,0,1262,48);
  audience1(-430,0,592,48);





  audience2(-100,0,1038,45);
  audience2(-270,0,868,45);
  audience2(240,0,1378,45);


   glFlush();  // Render now
}



void spinDisplay_left(void)
{

   spin = spin + 0.04; //to increase or decrease speed change the value added to spin
   if (spin > 10.0)
      spin = spin - 10.0;
   //the above if block is given only for clear understanding, otherwise 370 degrees is the same as 10 degrees

   spin1 = spin1 + 0.01; //to increase or decrease speed change the value added to spin
   if (spin1 > 5.0)
      spin1 = spin1 - 5.0;

    spin2 = spin2 + 0.01; //to increase or decrease speed change the value added to spin
   if (spin2 > 3.0)
      spin2 = spin2 - 3.0;


   if(msx1<1285)
       msx1=msx1+.1;
   else
       msx1=-630;

   if(msy1<9)
        msy1=msy1+.03;
   else
        msy1=0;


   if(msx2>-824)
       msx2=msx2-.1;
   else
       msx2=1096;

   if(msy2<9)
        msy2=msy2+.01;
   else
        msy2=0;


   if(msx3>-1249)
       msx3=msx3-.15;
   else
       msx3=671;

   if(msy3<9)
        msy3=msy3+.02;
   else
        msy3=0;



   glutPostRedisplay(); //calls the display function again
}

void spinDisplay_right(void)
{
   spin = spin - 0.04;
   if (spin < -10.0)
      spin = spin + 10.0;

   spin1 = spin1 - 0.01;
   if (spin1 < -5.0)
      spin1 = spin1 + 5.0;

    spin2 = spin2 - 0.01;
   if (spin2 < -2.0)
      spin2 = spin2 + 2.0;


   if(msx1<1285)
       msx1=msx1+.1;
   else
       msx1=-630;

   if(msy1<9)
        msy1=msy1+.03;
   else
        msy1=0;


   if(msx2>-824)
       msx2=msx2-.1;
   else
       msx2=1096;

   if(msy2<9)
        msy2=msy2+.01;
   else
        msy2=0;


   if(msx3>-1249)
       msx3=msx3-.15;
   else
       msx3=671;

   if(msy3<9)
        msy3=msy3+.02;
   else
        msy3=0;


   glutPostRedisplay();
}





void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=5;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				ty -=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				ty +=5;
				glutPostRedisplay();
				break;
	  default:
			break;
	}
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
            PlaySound("nupur.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(spinDisplay_left);//the idle func is usually used for any continuous movement, animation or background processing tasks.
			break;
        case 'L':
            PlaySound("nupur.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(spinDisplay_left);//the idle func is usually used for any continuous movement, animation or background processing tasks.
			break;

		case 'r':

		    PlaySound("ekta_gopon_kotha.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(spinDisplay_right);
			break;
        case 'R':

		    PlaySound("ekta_gopon_kotha.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(spinDisplay_right);
			break;

		case 's':
		     msx1=0;
		     msy1=0;
		     msx2=0;
		     msy2=0;
		     msx3=0;
		     msy3=0;
		     PlaySound("blank.wav", NULL, SND_FILENAME| SND_ASYNC);
			 glutIdleFunc(NULL);// make idle function inactive by passing NULL
			 break;
        case 'S':
		     msx1=0;
		     msy1=0;
		     msx2=0;
		     msy2=0;
		     msx3=0;
		     msy3=0;
		     PlaySound("blank.wav", NULL, SND_FILENAME| SND_ASYNC);
			 glutIdleFunc(NULL);// make idle function inactive by passing NULL
			 break;

	  default:
			break;
	}
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)//mouse press detected
            PlaySound("nupur.wav", NULL, SND_FILENAME| SND_ASYNC);
            glutIdleFunc(spinDisplay_left);//then call the spinDisplay_left func to spin in left direction
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
            PlaySound("ekta_gopon_kotha.wav", NULL, SND_FILENAME| SND_ASYNC);
			glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}






/* Main function: GLUT runs as a console application starting at main()  */
int main() {

   //PlaySound("nupur.wav", NULL, SND_FILENAME| SND_ASYNC);
   glutInitWindowSize(1920, 720);   // Set the window's initial width & height
   glutInitWindowPosition(0,0); // Position the window's initial top-left corner
   glutCreateWindow("Play With The Band");  // Create window with the given title
   initGL();                       // Our own OpenGL initialization
   glutDisplayFunc(display);
   glutSpecialFunc(spe_key);
   glutKeyboardFunc(my_keyboard);
   glutMouseFunc(my_mouse);    // Register callback handler for window re-paint event
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}
