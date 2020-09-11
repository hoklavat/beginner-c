//12- Character

#include <stdio.h>
#include <conio.h>

void main()
{
	char c = 'K';
	char ca[5] = "HELLO" //{'H', 'E', 'L', 'L', 'O'};
	int i;	
	clrscr();	
	printf("Single Character: %c\n", c);	
	printf("Character Array: ");
	for(i = 0; i < 5; i++)
	{
		printf("%c", ca[i]);
	}	
	printf("\nEnter a word: ");
	scanf("%s", &ca);
	printf("Echo: %s", ca);	
	getch();
}