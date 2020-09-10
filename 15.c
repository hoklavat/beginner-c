//15- Array Pointer

#include <stdio.h>
#include <conio.h>

void main()
{
	int x[] = {10, 20, 30, 40, 50 ,60 ,70 ,80 , 90, 100};
	int *p;
	int i;	
	clrscr();
	p = x; //address of first element in the array
	for(i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++; //Increment Address
	}
	getch();
}