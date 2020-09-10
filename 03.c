//03- Conditional Branching (if-else)

#include <stdio.h>
#include <conio.h>

void main()
{
	int x = 3;	
	clrscr();
	if(x > 10)
	{
		printf("x is greater than 10.");
	}
	else if(x == 10)
	{
		printf("x is equal to 10.");
	}
	else
	{
		printf("x is less than 10.\n");
		if(x > 5)
		{
			printf("x is greater than 5.");
		}
		else if(x == 5)
		{
			printf("x is equal to 5.");
		}
		else
		{
			printf("x is less than 5.");
		}
	}	
	getch();
}