#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define string(X) char X[10];
#define strings(X) char X[100];
int main()
{

    strings(s1);
    strings(s2);
    string(FilePath);
    printf("Enter File Path (e.g., C:\\\Test.txt): ");
    gets_s(FilePath, sizeof(FilePath));
    printf("Enter x1 : ");
    gets_s(s1, sizeof(s1));
    printf("Enter x2 : ");
    gets_s(s2, sizeof(s2));
    {
        FILE *Fptr = fopen(FilePath, "w");
        if (!Fptr)
        {
            printf("\nError write a file");
            return;
        }
        fwrite(s1, strlen(s1), 1, Fptr);
        fwrite(s2, strlen(s1), 1, Fptr);
        fclose(Fptr);
    }

    printf("done !");
    getchar();
    return 0;
}