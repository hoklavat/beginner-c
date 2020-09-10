//23- Binary File

#include <stdio.h>
#include <conio.h>

struct Human
{
	char name[20];
	int age;
};

void main()
{
	struct Human h = {"Baris", 38};
	FILE *fp;
	
	clrscr();
	fp = fopen("test3.dat", "wb+");
	fwrite(&h, sizeof(h), 1, fp);
	fwrite(&h, sizeof(h), 1, fp);
	fclose(fp);
	
	fp = fopen("test3.dat", "rb");
	while(fread(&h, sizeof(h), 1, fp) == 1)
		printf("%s %d\n", h.name, h.age);
	fclose(fp);
	getch();
}
	
	
	