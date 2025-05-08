#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define	 string(X) char X[100];
#define	 strings(X) char X[10];
int main() {

	strings(s1);
	strings(s2);
	string(FilePath);
	string(sFilePath);
	printf("Enter First File Path (e.g., C:\\\Test.txt): ");
	scanf("%s", FilePath);
	printf("Enter Second File Path (e.g., C:\\\SecondTest.txt): ");
	scanf("%s", sFilePath);
	{
		FILE* Fptr = fopen(FilePath, "r");
		if (!Fptr)
		{
			printf("\nError 1st File not found");
			return;
		}
		fread(s1,sizeof(s1),1,Fptr);
		fclose(Fptr);
	}
	{
		FILE* Fptr = fopen(sFilePath, "r");
		if (!Fptr)
		{
			printf("\nError 2nd File not found");
			return;
		}
		fread(s2, sizeof(s2), 1, Fptr);
		fclose(Fptr);
	}

	if (strcmp(s1,s2))
	{
		printf("\n They are Same");
	}
	else {
		printf("\n They are not Same");
	}
	getchar();
	return 0;

}