#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PersonInfo
{
    char id[30];
    char name[30];
    char grade[30];
};
int main()
{
    struct PersonInfo *P = malloc(sizeof(struct PersonInfo));
    printf("Pls Enter Ur Id -> ");
    gets_s(P->id, sizeof(P->id));
    printf("Pls Enter Ur Name -> ");
    gets_s(P->name, sizeof(P->name));
    printf("Pls Enter Ur Grade -> ");
    gets_s(P->grade, sizeof(P->grade));
    {
        FILE *Fptr = fopen("test.txt", "w");
        if (!Fptr)
        {
            printf("Failed to Write a file");
            return;
        }
        fprintf(Fptr, "id => %s\n", P->id);
        fprintf(Fptr, "Name => %s\n", P->name);
        fprintf(Fptr, "Grade => %s\n", P->grade);
        fclose(Fptr);
    }
    printf("Done !");
    getchar();
    return 0;
}