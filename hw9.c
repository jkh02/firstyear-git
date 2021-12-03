#include <stdio.h>
#include <string.h>

struct country
{
	char name[10];
	char country[10];
	char population[10];
};

int main(void)
{
	struct country p1, p2, p3;
	printf("Input three cities: \n");
	printf("Name> ");
	scanf(" %[^\n]s", p1.name);
	printf("Country> ");
	scanf(" %[^\n]s", p1.country);
	printf("Population> ");
	scanf(" %s", p1.population);

	printf("Name> ");
	scanf(" %[^\n]s", p2.name);
	printf("Country> ");
	scanf(" %[^\n]s", p2.country);
	printf("Population> ");
	scanf(" %s", p2.population);

	printf("Name> ");
	scanf(" %[^\n]s", p3.name);
	printf("Country> ");
	scanf(" %[^\n]s", p3.country);
	printf("Population> ");
	scanf(" %s", p3.population);

	printf("Printing the three cities:\n");
	printf("1. %s in %s with a population of %s people\n", p1.name, p1.country, p1.population);
	printf("2. %s in %s with a population of %s people\n", p2.name, p2.country, p2.population);
	printf("3. %s in %s with a population of %s people\n", p3.name, p3.country, p3.population);
}