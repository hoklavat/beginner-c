//14- Pointer to Pointer

#include <stdio.h>
#include <conio.h>

void main()
{
	int a = 10;
	int *p;
	int **pp;	
	p = &a;
	pp = &p; //address of pointer	
	clrscr();
	printf("a\t&a\t*p\tp\t&p\t**pp\tpp\n");
	printf("%d\t%u\t%d\t%u\t%u\t%d\t%u\n", a, &a, *p, p, &p, **pp, pp);
	getch();
}
	