//45- Database Management System
/********************************************************************
registerfarbgidriver(EGAVGA_driver_far)
registerfarbgidriver(sansserif_font_far)
registerfarbgidriver(small_font_far)
registerfarbgidriver(gothic_font_far)
registerfarbgidriver(triplex_font_far)

/BGI/
bgiobj /f egavga
bgiobj /f sans
bgiobj /f litt
bgiobj /f goth
bgiobj /f trip

Project: Open Project: Save Project
Project: Add Item: Source/Object Files

*********************************************************************/
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define ESCAPE 27
#define BACKSPACE 8
#define ENTER 13

int Login = FALSE;
char Menu[7][30] = {"ADD RECORD", "SEARCH RECORD", "DELETE RECORD", "MODIFY RECORD", "LIST RECORDS", "BACKUP DATABASE", "EXIT"};

struct Record
{
	char S1[10];	
	char C1;
	int I1;
	long L1;
	float F1;
};	

void PasswordCheck();
int ValidCharacter();
void Alert();
void DisplayMenu();
void AddRecord();
void PrintRecord();
void SearchRecord();
void DeleteRecord();
void ModifyRecord();
void ListRecords();
void BackupDatabase();

void main()
{
	char c;
	clrscr();
	textcolor(LIGHTGREEN);
	cprintf("DATABASE MANAGEMENT SYSTEM");	
	while(Login == FALSE)
	{
		cprintf("\n\rLogin: ");
		PasswordCheck();
	}	
	
	while(1)
	{		
		DisplayMenu();
		c = getch();
		switch(c)
		{
			case '1': AddRecord(); break;
			case '2': SearchRecord(); break;
			case '3': DeleteRecord(); break;
			case '4': ModifyRecord(); break;
			case '5': ListRecords(); break;
			case '6': BackupDatabase(); break;
			case '7': exit(0);
			default: break;
		}
	}
}

void PasswordCheck()
{
	char input[15] = "";
	char password[10] = "123456\0";
	int i;
	char c;

	for(i = 0; i < 15; i++)
	{		 
		c = getch();
		
		if(ValidCharacter(c) == FALSE)
		{
			Alert();
			i--;
			continue;
		}
		if(c == ESCAPE)
		{
			exit(0);
		}
		if(c == BACKSPACE)
		{
			if(i == 0)
			{
				Alert();
				i--;
				continue;
			}
			else
			{
				i -= 2;
				printf("\b \b");
				continue;
			}
		}
		if(i == 14 && c != ENTER)
		{
			Alert();
			i--;
			continue;
		}
		input[i] = c;
		if(i <= 14 && c == ENTER)
		{
			input[i] = '\0';
			if(strcmp(input, password) == 0)
			{
				cprintf("\n\rAccess Granted.");
				Login = TRUE;
			}
			else
			{
				cprintf("\n\rAccess Denied.");
				Login = FALSE;
			}
			break;
		}
		
		cprintf("%c", c);
	}
}

int ValidCharacter(int c)
{
	//13 - ENTER, 8 - BACKSPACE, 27 - ESCAPE
	//65-90 A-Z, 97-122 a-z, 48-57 0-9
	if(c == 13 || c == 8 || c == 27 || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
	{		
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void Alert()
{
	sound(300);			
	delay(50);
	nosound();
}

void DisplayMenu()
{
	int i;
	clrscr();
	for(i = 0; i < 7; i++)
	{
		cprintf("\n\r%d) %s", i + 1, Menu[i]);
	}
}

void AddRecord()
{
	struct Record r;
	FILE *fp;
	clrscr();
	fp = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "a");
	fseek(fp, 0, SEEK_END);
	fflush(stdin);
	cprintf("S1: ");
	scanf("%s", &r.S1);
	fflush(stdin);
	cprintf("C1: ");
	scanf("%c", &r.C1);
	fflush(stdin);
	cprintf("I1: ");
	scanf("%d", &r.I1);
	fflush(stdin);
	cprintf("L1: ");
	scanf("%d", &r.L1);
	fflush(stdin);
	cprintf("F1: ");
	scanf("%f", &r.F1);
	fflush(stdin);
	fwrite(&r, sizeof(r), 1, fp);
	cprintf("Record added.");
	delay(1000);
	fclose(fp);
}

void PrintRecord(struct Record r)
{
	cprintf("\n\rS1: %s", r.S1);
	cprintf("\n\rC1: %c", r.C1);
	cprintf("\n\rI1: %d", r.I1);
	cprintf("\n\rL1: %d", r.L1);
	cprintf("\n\rF1: %f", r.F1);
}
	
void SearchRecord()
{
	struct Record r;
	FILE *fp;
	int I;
	clrscr();
	cprintf("Enter I1: ");
	scanf("%d", &I);
	fp = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "rb+");
	while(fread(&r, sizeof(r), 1, fp) == 1)
	{
		if(strcmp(&r.I1, &I) == 0)
		{
			PrintRecord(r);
			getch();
		}		
	}		
	fclose(fp);
}

void DeleteRecord()
{
	struct Record r;
	FILE *fp1, *fp2;
	int I;
	clrscr();
	cprintf("Enter I1: ");
	scanf("%d", &I);
	fp1 = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "rb+");
	fp2 = fopen("c:\\turboc3\\bin\\TEMP.DAT", "wb+");
	rewind(fp1);
	while(fread(&r, sizeof(r), 1, fp1) == 1)
	{
		if(strcmp(&r.I1, &I) != 0)
		{
			fwrite(&r, sizeof(r), 1, fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	remove("c:\\turboc3\\bin\\DATABASE.DAT");
	rename("c:\\turboc3\\bin\\TEMP.DAT", "c:\\turboc3\\bin\\DATABASE.DAT");
}

void ModifyRecord()
{
	struct Record r;
	FILE *fp;
	int I;
	long int size = sizeof(r);
	clrscr();
	cprintf("Enter I1: ");
	scanf("%d", &I);
	fp = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "rb+");
	rewind(fp);
	while(fread(&r, sizeof(r), 1, fp) == 1)
	{
		if(strcmp(&r.I1, &I) == 0)
		{
			cprintf("S1: ");
			scanf("%s", &r.S1);
			fflush(stdin);
			cprintf("C1: ");
			scanf("%c", &r.C1);
			fflush(stdin);
			cprintf("I1: ");
			scanf("%d", &r.I1);
			fflush(stdin);
			cprintf("L1: ");
			scanf("%d", &r.L1);
			fflush(stdin);
			cprintf("F1: ");
			scanf("%f", &r.F1);
			fflush(stdin);
			fseek(fp, -size, SEEK_CUR);
			fwrite(&r, size, 1, fp);
		}
	}
	fclose(fp);
}

void ListRecords()
{
	struct Record r;
	FILE *fp;	
	clrscr();
	fp = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "rb+");	
	printf("S1\tC1\tI1\tL1\tF1");
	while(fread(&r, sizeof(r), 1, fp) == 1)
	{
		printf("\n\r%s\t%c\t%d\t%d\t%f", r.S1, r.C1, r.I1, r.L1, r.F1);		
	}
	getch();	
	fclose(fp);
}

void BackupDatabase()
{
	struct Record r;
	FILE *fp, *b;
	clrscr();
	fp = fopen("c:\\turboc3\\bin\\DATABASE.DAT", "rb+");
	b = fopen("c:\\turboc3\\bin\\BACKUP.DAT", "wb+");	
	rewind(fp);
	while(fread(&r, sizeof(r), 1, fp) == 1) fwrite(&r, sizeof(r), 1, b);
	cprintf("\n\rDatabase backup success.");
	getch();
	fclose(fp);
	fclose(b);
}
	
	