//25- Call by Reference

#include <stdio.h>
#include <conio.h>

void Swap(int *x, int *y);

void main()
{
	int x, y;
	x = 10;
	y = 20;
	clrscr();
	printf("x: %d, y: %d\n", x, y);
	Swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
	getch();
}

void Swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}