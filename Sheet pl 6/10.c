#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct User
{
	char Ci_name[100];
	int age;
	int IsUsa;
	char State_name[100];
};

union Country
{
	char Name[20];
};
int main()
{
	union Country a;
	struct User *user = malloc(sizeof(struct User));
	printf("Enter Your Name: ");
	scanf("%99s", user->Ci_name);
	printf("Enter Your Age: ");
	scanf("%d", &user->age);
	printf("Are you a U.S. citizen? (yes/no): ");
	char t[30];
	scanf("%s", t);
	if (strstr(t, "yes"))
	{
		user->IsUsa = 1;
		printf("Enter the name of the state where you come from: ");
		scanf("%s", user->State_name);
	}
	else
	{
		user->IsUsa = 0;
		printf("Enter the name of the country where you come from: ");
		scanf("%s", a.Name);
	}
	printf("\n--- User Info ---\n");
	printf("Name: %s\n", user->Ci_name);
	printf("Age: %d\n", user->age);
	if (user->IsUsa)
	{
		printf("Citizen: USA\n");
		printf("State: %s\n", user->State_name);
	}
	else
	{
		printf("Citizen: Other\n");
		printf("Country: %s\n", a.Name);
	}

	return 0;
}
