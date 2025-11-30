#include <stdio.h>
#include <conio.h>

void main()
{
	float a[5];
	float even_sum = 0.0;
	float odd_sum = 0.0;
	float frac;
	int i, int_part, first_digit;

	clrscr();


	for (i = 0; i < 5; i++)
	{
		printf("Enter 5 float values %d: ", i + 1);
		scanf("%f", &a[i]);
	}


	for (i = 0; i < 5; i++)
	{

		int_part = (int)a[i];
		frac = a[i] - int_part;


		if (frac < 0)
			frac = -frac;


		first_digit = (int)(frac * 10) % 10;


		if (first_digit % 2 == 0)
			even_sum += a[i];
		else
			odd_sum += a[i];
	}

	printf("\nSum of EVEN first digit after decimal = %.2f\n", even_sum);
	printf("Sum of ODD  first digit after decimal = %.2f\n", odd_sum);


	//So this was your dream Naruto Uzumaki?

	getch();
}
