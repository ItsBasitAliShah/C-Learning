#include <stdio.h>
#include <conio.h>

	void main()
	{
		float income;
		float taxper, tax;
		//taxper = tax percentage, tax = tax amount
		clrscr();
		//clear screen

		printf("Enter Salary amount: ");
		scanf("%f", &income);
		//read income into variable income

		printf("Enter Percentage of Tax: ");
		scanf("%f", &taxper);
		//read tax percentage into taxper

		tax = income * taxper / 100;
		//compute tax

		printf("\n\n Tax amount payable = %.2f", tax);
		//print with 2 decimals

		getch();
		//wait for a keypress (Turbo C)


		//One Piece is real
	}
