#include <stdio.h>
int ReplaceString(char* str) {
	int counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			str[i] = '-';
			counter++;
		}
	}
	return counter;
}	
int main() {
	char str[100];
	gets_s(str, sizeof(str));
	int index = ReplaceString(&str);
	if (index != 0) {
		printf("The numb of Spaces is -> %d , And New string is -> %s\n", index,str);
	}
	else {
		printf("no spaces found.\n");
	}
	return 0;
}