#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NumbOfChar(FILE *Fptr)
{
    int counter = 0, c = 0;
    while ((c = fgetc(Fptr)) != EOF)
    {
        counter++;
    }
    return counter;
}

int main()
{
    {
        FILE *Fptr = fopen("C:\\test.txt", "r");
        printf("Num of Chars is => %d\n", NumbOfChar(Fptr));
        fclose(Fptr);
    }
    printf("Done !");
    getchar();
    return 0;
}