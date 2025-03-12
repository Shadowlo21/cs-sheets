#include <stdio.h>
#include <string.h>
int isSubstring(char str1[], char str2[])
{
    return (strstr(str2, str1) != 0) ? 1 : 0;
}
int main()
{
    char s1[30], s2[30];
    printf("Enter 2 strings : ");
    scanf("%s%s", s1, s2);
    if (isSubstring(s1, s2))
    {
        printf("%s is a substring of %s\n", s1, s2);
    }
    else
    {
        printf("%s is NOT a substring of %s\n", s1, s2);
    }
    return 0;
}