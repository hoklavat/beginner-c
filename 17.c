//17- Function

#include <stdio.h>
#include <conio.h>

void Hello1();
void Hello2(char *); //Parameter Input
char* Hello3(); //Return Output

void main()
{
	clrscr();
	Hello1();
	Hello2("Baris");
	Hello2(Hello3());
	getch();
}

void Hello1()
{
	printf("Hello World!\n");
}

void Hello2(char *name)
{	
	printf("Hello %s!\n", name);	
}

char* Hello3()
{
	return "Bob";
}