#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 8
int countSpaces(char *str, int *spaceCount)
{
	if (*str == '\0')
		return 0;
	if (*str == ' ')
		(*spaceCount)++;
	return countSpaces(str + 1, spaceCount);
}

int main()
{
	char str[100];
	int spaceCount = 0;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	countSpaces(str, &spaceCount);
	printf("Number of spaces in the string: %d\n", spaceCount);

	return 0;
}
