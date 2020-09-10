//02- Console Input/Output

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b, c;
	clrscr();
	printf("Enter Two Values: ");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("Sum: %d", c);
	getch();
}