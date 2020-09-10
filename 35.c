//35- Storage Classes

#include <stdio.h>
#include <conio.h>

void static_check();
void global_check();

//int g;
extern int g = 10;

void main()
{
	auto int x, y;
	register int r;
	clrscr();	
	printf("x = %d, y = %d\n", x, y);
	printf("r = %d\n", r);
	for(r = 0; r < 5; r++) static_check();
	for(r = 0; r < 5; r++) global_check();
	getch();
}

void static_check()
{
	static int s;
	printf("s = %d\n", s);
	s += 5;
}

void global_check()
{
	printf("g = %d\n", g);
	g += 100;
}