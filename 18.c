//18- Structure (struct)

#include <stdio.h>
#include <conio.h>

struct Human
{
	char name[20];
	int age;
	float height;
	float weight;
}h1 = {"Johnson", 10, 10, 10};

struct Citizen
{
	char surname[20];
	unsigned int id;
	struct Human human;
}c1 = {"Ripper", 12345, {"Jack", 56, 1.56, 74}};

void HumanInfo(struct Human);
void CitizenInfo(struct Citizen);

void main()
{
	struct Human h2 = {"Boris", 20, 20, 20};
	struct Human h3[3] = {{"Noris", 1, 1, 1}, {"Koris", 1, 1, 1}, {"Zoris", 1, 1, 1}};			
	clrscr();	
	HumanInfo(h1);
	printf("(%u)\t(%u)\t(%u)\t(%u)\n\n", &h1.name, &h1.age, &h1.height, &h1.weight);	
	h2.age = 40;
	HumanInfo(h2);
	printf("(%u)\t(%u)\t(%u)\t(%u)\n\n", &h2.name, &h2.age, &h2.height, &h2.weight);	
	HumanInfo(h3[0]);
	printf("(%u)\t(%u)\t(%u)\t(%u)\n\n", &h3[0].name, &h3[0].age, &h3[0].height, &h3[0].weight);	
	c1.human.age = 100;
	CitizenInfo(c1);	
	getch();	
}

void HumanInfo(struct Human h)
{
	printf("%s ", h.name);
	printf("%d ", h.age);
	printf("%f m ", h.height);
	printf("%f kg\n", h.weight);
}

void CitizenInfo(struct Citizen c)
{
	printf("%s ", c.surname);
	printf("%u ", c.id);
	HumanInfo(c.human);
	
}

