//30- Date and Time

#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
	struct dosdate_t d;
	struct dostime_t t;

	clrscr();
	_dos_getdate(&d);
	printf("Date: %d/%d/%d\n", d.year, d.month, d.day);
	d.year = 2021;
	d.month = 1;
	d.day = 5;
	_dos_setdate(&d);
	_dos_getdate(&d);
	printf("Date: %d/%d/%d\n", d.year, d.month, d.day); //system("date")
	getch();
	
	_dos_gettime(&t);
	printf("Time: %2d:%02d:%02d.%02d\n", t.hour, t.minute, t.second, t.hsecond);
	t.hour = 0;
	t.minute = 0;
	t.second = 0;
	t.hsecond = 0;
	_dos_settime(&t);
	printf("Time: %2d:%02d:%02d.%02d\n", t.hour, t.minute, t.second, t.hsecond); //system("time")
	getch();	
}