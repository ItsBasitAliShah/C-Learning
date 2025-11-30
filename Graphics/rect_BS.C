#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

	void main(){

		int x1=90, y1=200, x2=300, y2=300, x3=112, y3=279, rad=20;
		int i;
		int up = 220;
		int down = 280;
		int y_direction = -1;
		int gd=DETECT, gm;
		initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
		cleardevice();

		     for(i=0; i<=300; i++)
			{

			y3 =  y3 + y_direction;

			if (y3 >= down)
			{
			y_direction = -1;
			}

			else if (y3 <= up)
			{
			y_direction =1;
			}

			setcolor(RED);
			rectangle(x1 + i, y1, x2 + i, y2);
			delay(5);


			     setcolor(YELLOW);
			     circle(x3 + i * 1.5, y3 , rad);
			     delay(5);


			      cleardevice();
		     }




			//Eat Shawarma While coding and Enjoy!
		getch();
		closegraph();
		}

