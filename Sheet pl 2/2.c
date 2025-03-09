#include <stdio.h>
#define SIZE 10
int main()
{
    int Nums[SIZE];
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &Nums[i]);
    int start = Nums[0];

    int is_notascending = 0;
    for (int i = 0; i < SIZE; i++)
    {

        if (start > Nums[i])
        {
            is_notascending = 1;
            break;
        }
        start = Nums[i];
    }
    if (is_notascending)
        printf("its not in an ascending order.");
    else
        printf("its in an ascending order.");
}