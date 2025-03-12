#include <stdio.h>
#include <string.h>
void Replace_Space(char string[], int *SpaceCounter)
{
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == ' ')
        {
            (*SpaceCounter)++;
            string[i] = '-';
        }
    }
}
int main()
{
    char s1[30];
    int SpaceCount = 0;
    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);
    Replace_Space(s1, &SpaceCount);
    printf("Last string is -> %sand Space count -> %d\n", s1, SpaceCount);
    return 0;
}