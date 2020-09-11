//16- String Pointer

#include <stdio.h>
#include <conio.h>

void main()
{
	char *names[5] = {"Baris", "Bruce", "Boris", "Bob", "Bill"}; //22 + 5 * NULL = 27-bytes
	char kames[5][10] = {"Karis", "Kruce", "Koris", "Kob", "Kill"}; //50-bytes, more memory required
	char *p;
	int i;
	clrscr();
	p = names[0];
	for(i = 0; i < 27; i++)
	{
		printf("%c", *p);
		p++;
	}
	getch();
	printf("\n");
	p = kames[0];
	for(i = 0; i < 50; i++)
	{
		printf("%c", *p);
		p++;
	}
	getch();	
	for(i = 0; i < 5; i++)
	{
		printf("\nName %d : %s", i, names[i]);
	}
	getch();	
	printf("\nSize of Names: %d bytes.", sizeof(names));
	printf("\nSize of Kames: %d bytes.", sizeof(kames));
	getch();
}