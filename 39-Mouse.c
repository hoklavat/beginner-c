//39- Mouse

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

union REGS in, out;
void DetectMouse();
void ShowMouse();
void CheckButton();
void Restrict();

void main()
{
	int GD = DETECT, GM;
	initgraph(&GD, &GM, "c:\\turboc3\\bgi");
	DetectMouse();
	ShowMouse();
	Restrict();
	CheckButton();
	getch();
}

void DetectMouse()
{
	in.x.ax = 0;
	int86(0x33, &in, &out);
	if(out.x.ax == 0)
		printf("Mouse is not initialized.\n");
	else
		printf("Mouse is initialized.\n");
}

void ShowMouse()
{
	in.x.ax = 1;
	int86(0x33, &in, &out);
}

void CheckButton()
{
	while(!kbhit())
	{
		in.x.ax = 3;
		int86(0x33, &in, &out);
		if(out.x.bx == 1) printf("Left-Button (X: %d, Y: %d)\n", out.x.cx, out.x.dx);
		if(out.x.bx == 2) printf("Right-Button (X: %d, Y: %d)\n", out.x.cx, out.x.dx);
		delay(100);
	}
}

void Restrict()
{
	in.x.ax = 7;
	in.x.cx = 100;
	in.x.dx = 400;
	int86(0x33, &in, &out);
	in.x.ax = 8;
	in.x.cx = 100;
	in.x.dx = 400;
	int86(0x33, &in, &out);
}
	
	