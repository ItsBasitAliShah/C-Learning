#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5] = {66, 65, 83, 73, 84},i,sum=0;
    clrscr();
    for(i=0;i<=4;i++)
    {
	if(a[i]>30)
	{
	    printf("[%c] ",a[i]);
	    sum+=a[i];
	    delay(200);
	}
    }
    printf("%d",sum);
    getch();


    //What if we are in a dream? does the real world have a better shawarma version ? XD
}
