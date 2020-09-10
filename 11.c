//11- Two Dimensional Array

#include <stdio.h>
#include <conio.h>

void main()
{
	int i, j;
	int a[3][5] = {	{1, 2, 3, 4, 5}, 
			{10, 20, 30, 40, 50}, 
			{100, 200, 300, 400, 500}
			}; //Row-Column	
	clrscr();
	for(i = 0; i < 3; i++) //Row
	{
		for(j = 0; j < 5; j++) //Column
		{
			a[i][j] = i * j;
		}		
	}	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	getch();
}