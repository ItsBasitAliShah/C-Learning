#include<stdio.h>
#include<conio.h>
#include <dos.h>

	void main()
	{
		char player1[15], player2[15];
		int i, sum1 = 0, sum2 = 0;

		clrscr();

		printf("Enter Player 1 name in Capital Letters: ");
		scanf("%s", player1);

		printf("Enter Player 2 Name in Capital Letters: ");
		scanf("%s", player2);


		for (i = 0; player1[i] != '\0'; i++)
			{

			sum1 = sum1 + player1[i];

			}

		for (i = 0; player2[i] != '\0'; i++)
			{

			sum2 = sum2 + player2[i];

			}


		printf("\nPlayer 1 score is: %d", sum1);
		printf("\nPlayer 2 score is: %d", sum2);


		if (sum1 > sum2)
		{

			printf("\nPlayer 1 Won! with score: %d", sum1);

		}

		else if (sum2 > sum1)
		{

			printf("\nPlayer 2 Won! with score: %d", sum2);

		}

		else
		{

			printf("\nIt's a DRAW!");

		}



	// Death is emptier, it has no suffering, no pain, but no joy either.

	getch();
	}
