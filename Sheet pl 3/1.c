#include <stdio.h>
#include <string.h>
int main()
{
    char s1[33], s2[33];
    printf("Enter s1 and s2: ");
    scanf("%s%s", s1, s2);
    strncat(s1, s2, sizeof(s1));
    printf("Last string is -> %s\n", s1);
    return 0;
}
