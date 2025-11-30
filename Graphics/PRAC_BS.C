#include <stdio.h>
#include <conio.h>
#include <graphics.h>

	int main()
	{
	  int x=250, y=200, rad;
	  int gd=DETECT, gm;
	  clrscr();
	  printf("Circle Size: ");
	  scanf("%d", &rad);

	  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");


		setcolor(YELLOW);
		circle(x, y, rad);


	  getch();
	  closegraph();
	  return 0;

	  //is it worth writing all this code?


	}
