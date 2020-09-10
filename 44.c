//44 - Game

#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#define BORDER_X1 10
#define BORDER_X2 630
#define BORDER_Y1 10
#define BORDER_Y2 460
#define MOVE_LEFT 75
#define MOVE_RIGHT 77
#define ESC 27

void main()
{
	int gd = DETECT, gm;
	int cx1 = 320, cy1 = 235, cr1 = 20, sx1 = 1, sy1 = 1;
	int px = 295, py = 430, pw = 100, ph = 20;
	int img1, img2, *buf1, *buf2;
	int deg;
	double rad;
	char *str;
	int ch;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	cleardevice();
	setcolor(YELLOW);
	setlinestyle(0, 0, 3);
	rectangle(BORDER_X1, BORDER_Y1, BORDER_X2, BORDER_Y2);

	setlinestyle(0, 0, 0);
	circle(cx1, cy1, cr1);
	setfillstyle(1, YELLOW);
	floodfill(cx1, cy1, YELLOW);
	img1 = imagesize(cx1 - cr1, cy1 - cr1, cx1 + cr1, cy1 + cr1);
	buf1 = malloc(img1);
	getimage(cx1 - cr1, cy1 - cr1, cx1 + cr1, cy1 + cr1, buf1);

	setcolor(LIGHTGREEN);
	setlinestyle(0, 0, 0);
	rectangle(px, py, px + pw, py + ph);
	setfillstyle(1, LIGHTGREEN);
	floodfill(px + 1, py + 1, LIGHTGREEN);
	img2 = imagesize(px, py, px + pw, py + ph);
	buf2 = malloc(img2);
	getimage(px, py, px + pw, py + ph, buf2);

	getch();

	deg = 45;
	rad = (2 * M_PI) * deg / 360;
	cx1 = cx1 - cr1;
	cy1 = cy1 - cr1;
	while(1)
	{
		if(kbhit())
		{
			ch = getch();
			if(ch == ESC) break;
			if(ch == MOVE_LEFT)
			{
				putimage(px, py, buf2, XOR_PUT);
				if(px > BORDER_X1 + 10) px -= 10;
				putimage(px, py, buf2, XOR_PUT);
			}
			if(ch == MOVE_RIGHT)
			{
				putimage(px, py, buf2, XOR_PUT);
				if((px + pw) < BORDER_X2 - 10) px += 10;
				putimage(px, py, buf2, XOR_PUT);
			}
		}
		putimage(cx1, cy1, buf1, XOR_PUT);
		cx1 = cx1 + sx1;
		cy1 = cy1 + sy1;
		if(cx1 == BORDER_X1) sx1 = 1;
		if(cx1 == (BORDER_X2 - 2 * cr1)) sx1 = -1;
		if(cy1 == BORDER_Y1) sy1 = 1;
		if(cy1 == (BORDER_Y2 - 2 * cr1)) sy1 = -1;
		if(getpixel(cx1, cy1 + 2 * cr1) == LIGHTGREEN) sy1 = -1;
		putimage(cx1, cy1, buf1, XOR_PUT);
		delay(10);
	}

	free(buf1);
	free(buf2);
	closegraph();
}