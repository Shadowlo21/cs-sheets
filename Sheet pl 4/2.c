#include <stdio.h>
#define SIZE 10
int main()
{
    char chars[SIZE];
    char *ptr = chars;
    printf("Enter %d chars: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf(" %c", (ptr + i));
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (*(ptr + i) == 'z' || *(ptr + i) == 'Z')
        {
            printf("index is -> %d\n", i + 1);
        }
    }
    return 0;
}