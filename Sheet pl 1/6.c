#include <stdio.h>

void reverse_string(char str[], int start, int end)
{
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse_string(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    reverse_string(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}