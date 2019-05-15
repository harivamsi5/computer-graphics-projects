
#include <GL/glut.h>

#include<stdlib.h>

int score,exit1=0;
float x,y;
float x1,y1=1000,x2=200,x3=-200,y2=1500,y3=2000;
int time=0;
typedef struct lines
		{
	int x,y;
		}linet;
		linet line[5];
		void createline()
		{int i=0;
			for(;i<5;i++)
			{
				line[i].x=0;
				line[i].y=i*250;
			}
		}
void enemy(float a,float b)
{


	glBegin(GL_QUADS);

	glColor3f(0,0,0);
	glVertex2f(-75+a,50+b);
	glVertex2f(-75+a,100+b);
	glVertex2f(75+a,100+b);
	glVertex2f(75+a,50+b);

	glColor3f(0,0,0);
	glVertex2f(-75+a,150+b);
	glVertex2f(-75+a,200+b);
	glVertex2f(75+a,200+b);
	glVertex2f(75+a,150+b);

	glColor3f(1,0,0);
	glVertex2f(-25+a,40+b);
	glVertex2f(-25+a,250+b);
	glVertex2f(25+a,250+b);
	glVertex2f(25+a,40+b);

	glEnd();
}

void sc(int a)
{
	int i,j,k;
	i=a/100;
	j=a/10-i*10;
	k=a-j*10-i*100;
	glPushMatrix();

	glColor3f(0.0,0.0,0.0);

	glTranslated(400,800,0);
	glScaled(.5,.5,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'c');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glColor3f(1.0,0.0,1.0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)':');
	glColor3f(0.0,0.0,0.0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)i+48);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)j+48);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)k+48);
	glPopMatrix();


    	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,50,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'>');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'S');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'m');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glPopMatrix();


glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,75,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'>');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'q');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'q');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'u');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'i');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glPopMatrix();





	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,150,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'3');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'b');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'l');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'u');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glPopMatrix();


glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,175,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'1');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'d');

	glPopMatrix();



glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,200,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'P');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'s');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'0');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'w');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'h');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'i');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glPopMatrix();


glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,250,0);
	glScaled(.2,.2,0);
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'>');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'t');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'c');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'k');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'c');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'l');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'o');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'r');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)' ');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'c');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'h');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'a');
    	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'n');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'g');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'e');
	glPopMatrix();


glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(300,300,0);
	glScaled(.3,.3,0);
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'M');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'N');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'U');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');
    glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'*');

glPopMatrix();
}






void car(float a,float b)
{
	glBegin(GL_QUADS);

	glColor3f(0,0,0);
	glVertex2f(-75+a,50+b);
	glVertex2f(-75+a,100+b);
	glVertex2f(75+a,100+b);
	glVertex2f(75+a,50+b);

	glColor3f(0,0,0);
	glVertex2f(-75+a,150+b);
	glVertex2f(-75+a,200+b);
	glVertex2f(75+a,200+b);
	glVertex2f(75+a,150+b);

	glColor3f(1,1,0);
	glVertex2f(-25+a,40+b);
	glVertex2f(-25+a,250+b);
	glVertex2f(25+a,250+b);
	glVertex2f(25+a,40+b);
	glEnd();
}

void display()
{int i,t;
	time++;
	if(exit1==0)
	{
		if(score<25)
		{
	y1--;
	y2--;
	y3--;
		}
if(score>=25&&score<50)
		{
	y1-=1.5;
	y2-=1.5;
	y3-=1.5;
		}
if(score>=50)
		{
	y1-=2;
	y2-=2;
	y3-=2;
		}
	//
	if(y1<-250)
	{
		score+=5;
	    y1=1000;
	}
	if(y2<-250)
	{
		score+=5;
		y2=1500;
	}
	if(y3<-250)
	{
		score+=5;
		y3=2000;
	}
	//
	if(x<-255||x>255)exit1=1;

	if(75+x>-80&&-75+x<80)
	if(250+y>100+y1&&250+y1>40+y)
		exit1=1;

	if(75+x>-260&&-75+x<-140)
	if(250+y>100+y3&&250+y3>40+y)
		exit1=1;

	if(75+x>140&&-75+x<260)
	if(250+y>100+y2&&250+y2>40+y)
		exit1=1;

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0,1,0);

    glBegin(GL_QUADS);
	glVertex2f(-300,0);
	glVertex2f(-300,2000);
	glVertex2f(-2000,2000);
	glVertex2f(-2000,0);

	glVertex2f(300,0);
	glVertex2f(300,2000);
	glVertex2f(2050,2050);
	glVertex2f(2000,0);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	t=0;
	glPushMatrix();
	for(i=0;i<5;i++)
		{line[i].y+=-2;
if(line[i].y<-200)
{
	line[i].y+=1200;
}
		}
	for(i=0;i<5;i++)
	{


	glBegin(GL_POLYGON);
		glVertex2f(line[i].x,line[i].y+40);
		glVertex2f(line[i].x,line[i].y+190);
		glVertex2f(line[i].x+40,line[i].y+190);
		glVertex2f(line[i].x+40,line[i].y+40);
		glEnd();
	}
glPopMatrix();

		glFlush();




	sc(score);
	car(x,y);
	enemy(x1,y1);
	enemy(x2,y2);
	enemy(x3,y3);
	glutSwapBuffers();
	}

	else
	{
    glLineWidth(5);
	glClear(GL_COLOR_BUFFER_BIT);
	sc(score);


	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(-200,800,0);
	glScaled(.5,.5,0);
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'G');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'A');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'M');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'O');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'V');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'E');
	glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,(int)'R');
	glPopMatrix();

	


	glutSwapBuffers();
	}
}



void keyboards(unsigned char keys,int x4,int y4)
{
	//to quit
    if(keys=='q'||keys=='Q')
	{
		  exit(-1);
	}


	//to start
	if(keys=='s')
    {
		glutIdleFunc(display);
    }


	//track color
	if(keys=='1')
	{
		 glClearColor(1.0,0.0,0.0,0.0);
	}

	if(keys=='3')
	{
		 glClearColor(0.0,0.0,1.0,0.0);
	}

	if(keys=='0')
	{

		glClearColor(1.0,1.0,1.0,1.0);
	}



  	//movement keys
	if(keys=='4')
		x-=20;
	if(keys=='6')
		x+=20;
	if(keys=='8')
		y+=20;
	if(keys=='2')
		y-=20;
	glutPostRedisplay();





}
void dropmenu(int keys)
{
	  keyboards((unsigned char) keys,0,0);
}


int main(int argc, char **argv)
{
  glutInit(&argc,argv);

  glutInitWindowSize(500,700);
  glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
  glutCreateWindow("Car Race");
  glClearColor(1,1,1,1);//set Background
  glutDisplayFunc(display);
   glutKeyboardFunc(keyboards);

createline();
   gluOrtho2D(-1000,1000,0,1000);


	 glutMainLoop();

  return 0;             /* ANSI C requires main to return int. */
}
