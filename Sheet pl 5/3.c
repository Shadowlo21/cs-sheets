#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 10
int main()
{
    int array[10] = {2, 5, 9, 0, 3, 7, 2};
    int *data_ptr;
    int value;
    data_ptr = &array[0];
    value = *data_ptr++;   // data_ptr ++ so -> Now is array[1] not array[0] so its 5
    printf("%d\n", value); // 2
    value = *++data_ptr;   // data_ptr ++ so -> Now is array[2] not array[1] so its 9
    printf("%d\n", value); // 9
    value = ++*data_ptr;   // data_ptr is 9 and there is ++ before it so  9 + 1 = 10
    printf("%d\n", value); // 10
    value = *data_ptr;
    printf("%d\n", value); // 10
}