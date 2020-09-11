//20- String Handling

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char *s1 = "Hello";
	char s2[10];
	int l;	
	clrscr();
	printf("s1: %s\n", s1);
	printf("Length of s1: %d\n", strlen(s1));	
	puts("Enter s2: ");
	gets(s2);
	printf("Length of s2: %d\n", strlen(s2));	
	strcpy(s2, s1);
	printf("s2: %s\n", s2);	
	strcat(s2, " World!");
	printf("s2: %s\n", s2);	
	printf("Reverse s2: %s\n", strrev(s2));	
	printf("s1 and s2 Comparision: %d\n", strcmp(s1, s2)); //Equals = 0	
	printf("Upper s2: %s\n", strupr(s2));
	printf("Lower s2: %s\n", strlwr(s2));	
	getch();
}
