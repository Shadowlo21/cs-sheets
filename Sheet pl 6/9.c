#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 8
int is_Digits = 1;
int string_Check(char *str)
{
	if (*str == '\0')
		return 0;
	if (!isdigit(*str))
		is_Digits = 0;
	return string_Check(str + 1);
}

int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s", &str);
	string_Check(str);
	if (is_Digits)
		printf("String is consisting of digits");
	else
		printf("String is not consisting of digits");

	return 0;
}
