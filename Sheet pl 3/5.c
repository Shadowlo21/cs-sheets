#include <stdio.h>
#include <string.h>
void ReverseString(int start, int end, char string[])
{
    if (start >= end)
        return;
    char tempstring = string[start];
    string[start] = string[end];
    string[end] = tempstring;
    return ReverseString(start + 1, end - 1, string);
}
int main()
{
    char s1[30];
    printf("Enter 2 strings : ");
    scanf("%s", s1);
    int length = strlen(s1);
    ReverseString(0, length - 1, s1);
    printf("Reverse string is -> %s", s1);
    return 0;
}
