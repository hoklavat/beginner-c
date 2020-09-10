//22- File Handling 2

#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;
	char *name;
	int age;
	int height;
	char key;
	int i;
	
	clrscr();
	strcpy(name, "Baris");
	age = 38;
	height = 215;	
	fp = fopen("test2.txt", "w");
	while(1)
	{
		printf("Add Line? (Y/N)");
		fflush(stdin); //clear console input buffer
		scanf("%c", &key);
		if(key == 'n' || key == 'N') break;
		fprintf(fp, "%s %d %d\n", name, age, height);
	}	
	fclose(fp);
	
	fp = fopen("test2.txt", "r");
	i = 0;
	while(1)
	{
		i = fscanf(fp, "%s %d %d", name, &age, &height);
		if(i == EOF) break;
		printf("%s %d %d\n", name, age, height);
	}
	fclose(fp);	
	getch();
}