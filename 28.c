//28- Structure Argument

#include <stdio.h>
#include <conio.h>

struct Human
{
	char name[20];
	int age;
};

void printHuman(struct Human);

void main()
{
	struct Human h = {"Baris", 38};	
	clrscr();
	printHuman(h);
	getch();
}

void printHuman(struct Human h)
{
	printf("Name: %s\n", h.name);
	printf("Age: %d\n", h.age);
}


