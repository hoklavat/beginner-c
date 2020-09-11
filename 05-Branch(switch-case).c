//05- Conditional Branching (switch-case)

#include <stdio.h>
#include <conio.h>

void main()
{
	int i;	
	clrscr();
	printf("Enter number between 1 and 5: ");
	scanf("%d", &i);
	switch(i)
	{
		case 1: printf("1 is RED."); break;
		case 2: printf("2 is BLUE."); break;
		case 3: printf("3 is GREEN."); break;
		case 4: printf("4 is WHITE."); break;
		case 5: printf("5 is BLACK."); break;
		default: printf("Incorrect Number!"); break;
	}
	getch();
}