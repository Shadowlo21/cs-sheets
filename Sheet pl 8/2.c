#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string(X) char X[100];
#define strings(X) char X[100];
int main()
{

    strings(s1);
    string(FilePath);
    printf("Enter File Path (e.g., C:\\\Test.txt): ");
    scanf("%s", FilePath);
    {
        FILE *Fptr = fopen(FilePath, "r");
        if (!Fptr)
        {
            printf("\nError 1st File not found");
            return;
        }
        int i = 0, c = 0;
        while ((c = fgetc(Fptr)) != EOF && (c <= 127 && c >= 32))
        {
            s1[i++] = c;
        }
        fclose(Fptr);
    }
    {

        FILE *Fptr = fopen("C:\\test.bin", "w");
        if (!Fptr)
        {
            printf("\nError write file");
            return;
        }
        fwrite(s1, strlen(s1), 1, Fptr);
        fclose(Fptr);
    }

    printf("done !");
    getchar();
    return 0;
}