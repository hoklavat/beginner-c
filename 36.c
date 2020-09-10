//36- Bit Level Programming

#include <stdio.h>
#include <conio.h>

void main()
{
	clrscr();
	printf("~65535: %d \t(0xFFFF)\n", ~65535);
	printf("2 << 1: %d \t(0010 : 0100)\n", 2 << 1);
	printf("16 >> 2: %d \t(10000 : 00100)\n", 16 >> 2);
	printf("2 & 4: %d \t(0010 & 0100 = 0000)\n", 2 & 4);
	printf("2 | 4: %d \t(0010 | 0100 = 0110)\n", 2 | 4);
	printf("2 ^ 14: %d \t(0010 ^ 1110 = 1100)\n", 2 ^ 14); //turn on/off
	getch();
}