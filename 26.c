//26- Pointer to Function

#include <stdio.h>
#include <conio.h>

void Func_Hello();

void main()
{
	void (*Ptr_Hello)();
	Ptr_Hello = &Func_Hello;	
	clrscr();
	(*Ptr_Hello)(); //Invoke Function
	getch();
}

void Func_Hello()
{
	printf("Hello World!");
}