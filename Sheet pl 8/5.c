#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	{
		FILE* Fptr = fopen("C:\\test.txt", "r");
		FILE* sFptr = fopen("C:\\stest.txt", "w");
		char s[100];
		while (fgets(s, sizeof(s), Fptr) && s != "\n") {
			fprintf(sFptr,"%s",s);
		}
		fclose(Fptr);
		fclose(sFptr);
	}
	printf("Done !");
	getchar();
	return 0;

}