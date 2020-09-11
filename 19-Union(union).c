//19- Union (union)

#include <stdio.h>
#include <conio.h>

union Human
{
	char name[20]; //union size, largest element
	int age;
	float height;
	float weight;
};

void main()
{
	union Human h1;	
	clrscr();
	printf("Size of Union: %u\n", sizeof(h1));	
	h1.age = 10;	
	h1.height = 20;
	h1.weight = 30;
	strcpy(h1.name, "Baris");
	printf("%s\n", h1.name);
	printf("%d\n", h1.age);
	printf("%f\n", h1.height);
	printf("%f\n", h1.weight);	
	getch();
}