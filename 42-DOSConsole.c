//42- DOS Console

#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
	int i;
	char c = 219;
	clrscr();
	for(i = 0; i < 16; i++)
	{
		_setcursortype(1);
		textcolor(i);
		printf("%d:", i);
		cprintf("%c ", c);
		delay(100);
	}
	getch();
	clrscr();
	if(_chmod("c:\\1.txt", 1, FA_HIDDEN | FA_SYSTEM | FA_RDONLY) != -1)
	{
		printf("1.txt is hided.\n");	
		getch();
		_chmod("c:\\1.txt", 1, 0);
		printf("1.txt is unhided.\n");
	}
	getch();
}
