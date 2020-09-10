//06- Conditional Looping (while)

#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 1;
	clrscr();
	while(i <= 10)
	{
		printf("%d\n", i);
		i++;
	}
	getch();
}