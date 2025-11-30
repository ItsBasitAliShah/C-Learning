#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

	void main(){

		int x1=100, y1=100, x2=100, y2=100;
		int side = 100;
		int i;
		int gd=DETECT, gm;
		initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
		for(i = 0; i <= side; i++)
			{
			setcolor(RED);
			line(x1,y1,x2 + i,y2);
			delay(10);
			}

		for(i = 0; i <= side; i++)
			{
			setcolor(RED);
			line(x1 + side, y1, x2 + side, y2 + i);
			delay(10);
			}

		for(i = 0; i <= side; i++)
			{
			setcolor(RED);
			line(x1 + side, y1 + side, x2 + side - i, y2 + side);
			delay(10);
			}

		for (i = 0; i <= side; i++)
			{
			setcolor(RED);
			line(x1, y1 + side, x2, y2 + side - i);
			delay(10);
			}

		getch();
		closegraph();
		}