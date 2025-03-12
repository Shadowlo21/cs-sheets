
#include <stdio.h>
#include <string.h>

int CounterOfChar(char s1[], char chr)
{
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s1[i] == chr)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char s1[10];
    printf("Enter string : ");
    scanf("%s", s1);
    char cha = 0;
    printf("Enter char : ");
    scanf(" %c", &cha);
    printf("numb of char is -> %d", CounterOfChar(s1, cha));
    return 0;
}