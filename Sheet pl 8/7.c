#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	{
		FILE* Fptr = fopen("C:\\test.txt", "r");
		FILE* sFptr = fopen("C:\\stest.txt", "w");
		char s[100];
		int counter = 0;
		while (fgets(s, sizeof(s), Fptr)) {
			printf("%s\n",s);
			counter++;
			if (counter == 20)
			{
				char temp = getchar();
				if (temp == 'Q' || temp == 'q')
					exit(-1);
				else
				{
					counter = 0;
					continue;
				}
			}
		}
		fclose(Fptr);
		fclose(sFptr);
	}
	printf("Done !");
	getchar();
	return 0;

}