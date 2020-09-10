//32- Preprocessor Directives

#include <stdio.h>
#include <conio.h>

#define PLUS +
#define AGE 40
#define PI 3.14
#define ZI 5.45
#undef ZI

void Hello()
{
	clrscr();
	printf("Hello\n");
}

void Bye()
{
	printf("Bye\n");
	getch();
}

#pragma startup Hello
#pragma exit Bye

void main()
{	
	printf("10 + 20 = %d\n", 10 PLUS 20);
	getch();
	
	#if AGE < 5
		printf("Baby.\n");
	#elif AGE > 5 && AGE < 20
		printf("Child.\n");
	#elif AGE > 20 && AGE < 50
		printf("Mature.\n");
	#else
		printf("Oldie.\n");
	#endif
	getch();
	
	#ifdef PI
		printf("PI is defined.\n");
	#endif
	
	#ifndef ZI
		printf("ZI is not defined.\n");
	#endif
}

