//31- Sound

#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
	int i, j, k;
	
	while(!kbhit())
	{
		sound(1000); //15-3000
		delay(100);
		nosound();
	}
	
	//Siren
	for(k = 0; k < 3; k++)
	{
		for(i = 500; i < 1500; i++)
		{
			sound(i);
			delay(2);
			nosound();
		}
		for(j = 1500; j > 500; j--)
		{
			sound(j);
			delay(2);
			nosound();
		}
	}
	
	getch();
}