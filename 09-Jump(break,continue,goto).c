//09- Unconditional Jump (break, continue, goto)

#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	
	//break
	clrscr();
	for(i = 1; i <= 10; i++)
	{
		if(i == 5) break;
		printf("%d ", i);
	}
	getch();
	
	//continue
	clrscr();
	for(i = 1; i <= 10; i++)
	{
		if(i == 5) continue;
		printf("%d ", i);
	}
	getch();
	
	//goto
	clrscr();
	i = 1;
	label:
	printf("%d ", i);
	i++;
	if(i <= 10) goto label;
	getch();
}