//38- Keyboard

#include <stdio.h>
#include <conio.h>

void main()
{
	int c;
	char far *key;

	clrscr();
	//ASCII Characters
	for(c = 0; c < 256; c++)
		printf("%d:%c\t", c, c);
	getch();
	
	key = (char far*)0x417;
	while(1)
	{
		clrscr();
		printf("Press ALT to quit.\n");
		if(*key & 1) printf("RIGHT-SHIFT\n");
		if(*key & 2) printf("LEFT-SHIFT\n");
		if(*key & 4) printf("CTRL\n");
		if(*key & 8) break;
		if(*key & 16) printf("SCROLL-LOCK\n");
		if(*key & 32) printf("NUM-LOCK\n");
		if(*key & 64) printf("CAPS-LOCK\n");
		if(*key & 128) printf("INSERT\n");
		delay(100);
	}
	
	clrscr();
	printf("Press q to quit.\n");
	while(1)
	{
		c = getch();
		printf("You've pressed %d:%c\n", c, c);
		if(c == 'q' || c =='Q') break;
	}
	getch();
}