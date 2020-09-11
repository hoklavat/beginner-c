//07- Conditional Looping (do-while)

#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 1;
	clrscr();
	do
	{
		printf("%d\n", i);
		i++;
	}while(i <= 10);
	getch();
}