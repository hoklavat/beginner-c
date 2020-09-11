//41- Graphics

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int GD = DETECT, GM;
	int midx, midy;
	int s, e, r; //arc parameters, start angle, end angle, radius
	int i;
	void *img;
	unsigned img_size;
	initgraph(&GD, &GM, "c:\\turboc3\\bgi");
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	setfillstyle(3, 1); //Style 1-10, Color 1-15
	bar(midx - 200, midy - 200, midx + 200, midy + 200);
	getch();
	setcolor(3);
	circle(midx, midy, 100);
	getch();
	setcolor(6);
	setlinestyle(1, 0, 2);
	line(midx, midy - 100, midx - 100, midy);
	line(midx, midy - 100, midx + 100, midy);
	line(midx, midy + 100, midx - 100, midy);
	line(midx, midy + 100, midx + 100, midy);
	getch();
	setcolor(9);
	setlinestyle(2, 0, 3);
	rectangle(midx - 100, midy - 100, midx + 100, midy + 100);
	getch();
	s = 0;
	e = 180;
	r = 141;
	setcolor(12);
	arc(midx, midy, s, e, r);
	getch();
	setcolor(14);
	settextstyle(3, 0, 4); //font, hor/ver, size
	outtextxy(midx - 100, midy + 110, "Hello World!");
	getch();
	setcolor(11);
	circle(50, 50, 40);
	setfillstyle(2, 4);
	floodfill(50, 50, 11);
	img_size = imagesize(midx - 100, midy - 100, midx + 100, midy + 100);
	img = malloc(img_size);
	getimage(midx - 100, midy - 100, midx + 100, midy + 100, img);
	getch();
	cleardevice();
	putimage(150, 150, img, COPY_PUT); //COPY_PUT, XOR_PUT, OR_PUT, AND_PUT, NOT_PUT
	setlinestyle(0, 0, 0);
	setbkcolor(1);
	setcolor(7);
	rectangle(99, 99, 501, 121);
	rectangle(98, 98, 502, 122);
	for(i = 0; i <= 200; i++)
	{
		setfillstyle(1, 2);
		bar(100, 100, 300 + i, 120);
		delay(15);
	}
	getch();
	free(img);
	closegraph();
}