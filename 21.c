//21- File Handling 1

#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp; //pointer to file stream
	int i;
	char c;
	fp = fopen("test1.txt", "w"); //write mode
	for(i = 0; i < 10; i++) fputc('a' + i, fp);
	fclose(fp);

	fp = fopen("test1.txt", "r"); //read mode
	if(fp == NULL) printf("File doesn't exist.\n");
	c = fgetc(fp);
	printf("First Character in File: %c\n", c);
	fclose(fp);
	getch();

	fp = fopen("test1.txt", "r");
	printf("All Characters in File: ");
	while(c != EOF) //end of file
	{
		c = fgetc(fp);
		printf("%c", c);
	}
	fclose(fp);
	getch();
}