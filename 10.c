//10- Array

#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	int a[5] = {5, 15, 23, 765, 43}; //Array Initialization	
	clrscr();
	for(i = 0; i < 5; i++)
	{
		a[i] = i * 10;
	}	
	printf("Index\tValue\tAddress\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t%d\t%u\n", i, a[i], &a[i]);
	}
	getch();
}