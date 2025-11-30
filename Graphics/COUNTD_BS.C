#include <stdio.h>
#include <conio.h>
#include <dos.h>

	void main () {
		int i, j, h, m, s;
		int x, y;
		clrscr();

		printf("Enter X position: ");
		scanf("%d", &x);

		printf("Enter Y postion: ");
		scanf("%d", &y);


		printf("Press any key to start");
		getch();



		for(i=1; i<=1; i++)
			{
			for(h=1; h<=3; h++)
				{
				for(m=1; m<=59; m++)
					{
					for(s=1; s<=59; s++)
						{
						clrscr();
						gotoxy(x, y);
						textcolor(CYAN);
						cprintf("%d:%d:%d", h,m,s);
						delay(2);

						if (kbhit()) {

							getch();

							gotoxy(40,14);
							textcolor(GREEN);
							cprintf("Paused!");
							getch();}

						}
					}
				}
			}

			//The enemies can't Leak our plan, if we don't have one. -Monkey D. Luffy
	    getch();
		}
