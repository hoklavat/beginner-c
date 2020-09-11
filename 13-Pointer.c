//13- Pointer

#include <stdio.h>
#include <conio.h>

void main()
{
	int a = 10;
	int b = 5;
	int *p;	
	printf("a\tb\t*p\t&a\t&b\tp\n");
	printf("%d\t%d\t%d\t%u\t%u\t%u\n", a, b, *p, &a, &b, p);
	getch();	
	p = &a;
	b = *p;
	printf("a\tb\t*p\t&a\t&b\tp\n");
	printf("%d\t%d\t%d\t%u\t%u\t%u\n", a, b, *p, &a, &b, p);
	getch();	
	//*(&a) : value at address of a
}