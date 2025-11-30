#include <stdio.h>
#include <conio.h>

	int main ()
	{
		int i, j;
		clrscr();

		for (i=1; i<=5; i++)
		{
		    for (j=1; j<=i; j++)
		    {
			printf("%d ", j * 10);
		    }
		    printf("\n");
		}
	getch();
	return 0;

	//we see the world through the lens, but we never see the lens. ~Junaid Akram

	}
