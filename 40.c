//40- Text Graphics

#include <stdio.h>
#include <conio.h>

void main()
{
	char far *ptr = (char *)0xB8000000;
	*ptr = 'C';
	*(ptr + 1) = 2;
	getch();
}
	