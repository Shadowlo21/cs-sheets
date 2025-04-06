#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 10
int main()
{
    char ch = 'c';
    char *chptr = &ch;
    int i = 20;
    int *intptr = &i;
    float f = 1.20000;
    float *fptr = &f;
    char *ptr = "I am a string";
    printf("\n [%c], [%d], [%f], [%c], [%s]\n", *chptr, *intptr, *fptr, *ptr, ptr);

    //  C ,     20   , 1.200000 , I , string
    //*chptr, *intptr, *fptr, *ptr, ptr);

    return 0;
}