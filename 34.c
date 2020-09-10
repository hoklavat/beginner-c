//34- Dynamic Memory Allocation

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	int *p, s, i;
	
	clrscr();
	s = 10; //10 Integers = 20 Bytes
	p = (int *) malloc(s * sizeof(int)); //Garbage Initialization
    	//p = (int *) calloc(s, sizeof(int)); //0 Initialization
	if(p == NULL)
	{
		printf("Memory allocation is failed.\n");
	}
	for(i = 0; i < s; i++)
	{
		p[i] = i * 10;
		printf("p[%d] = %d (%u)\n", i, p[i], &p[i]);
	}
	getch();
	
	s = 20;
	p = (int *) realloc(p, s * sizeof(int));
	if(p == NULL)
	{
		printf("Memory reallocation is failed.\n");
	}
	for(i = 0; i < s; i++)
	{
		if(i >= 10) p[i] = i * 10;
		printf("p[%d] = %d (%u)\n", i, p[i], &p[i]);
	}
	free(p);
	getch();
}
	