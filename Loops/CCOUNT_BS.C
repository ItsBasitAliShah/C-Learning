#include<stdio.h>
#include<conio.h>
#include<string.h>

	void main () {
		char word[200] = "The quick brown fox jumps over a lazy dog";
		int i, counta = 0;

		clrscr();

		printf("\n%s",word);

		for(i=0; i<strlen(word); i++)

			{
			counta++;
			}

		printf("\n\n Total Number of in sentence: word = %d", counta);


		getch();

				//This world Shall know pain
		}
