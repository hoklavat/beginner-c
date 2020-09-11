//27- Pointer to Structure

#include <stdio.h>
#include <conio.h>

struct Human
{
	char name[20];
	int age;
};

void main()
{
	struct Human *p, h;
	p = &h;
	strcpy(p->name, "Baris");
	p->age = 38;
	clrscr();
	printf("Name: %s Age: %d\n", p->name, h.age); //(*p).name
	getch();
}