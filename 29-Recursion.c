//29- Recursion

#include <stdio.h>
#include <conio.h>

int factorial(int);

void main()
{
	clrscr();
	printf("Factorial of 6: %d", factorial(6));
	getch();
}

int factorial(int x)
{
	int f;
	if(x == 1) return(1);
	else
	{
		f = x * factorial(x-1);
		return f;
	}
}