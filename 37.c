//37- Memory Models

#include <stdio.h>
#include <conio.h>

void main()
{
	int x = 200;
	int near *n;
	int huge *h;
	int far *f;
	n = &x;
	h = &x;
	f = &x;
	clrscr();
	printf("Size of Near Pointer: %d\n", sizeof(n));
	printf("Size of Huge Pointer: %d\n", sizeof(h));
	printf("Address of Huge Pointer: %Fp\n", h);
	printf("Size of Far Pointer: %d\n", sizeof(f));
	printf("Address of Far Pointer: %Fp\n", f);
	getch();
}
	