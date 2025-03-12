#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10];
    printf("Enter string : ");
    scanf("%s", s1);
    for (int i = 0; i < 10; i++)
    {
        if (s1[i] == 'z' || s1[i] == 'Z')
        {

            printf("\nIndex of 'Z' is -> %d", i + 1);
        }
    }
    return 0;
}