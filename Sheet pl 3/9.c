
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct s
    {
        double x;
        int y;
    } a_struct;
    printf("Offset of x: %zu\n", offsetof(struct s, x)); // 0 start of struct offset is 0
    printf("Offset of y: %zu\n", offsetof(struct s, y)); // 8 since double is 8 bytes so offset will be 8
    printf("The size of a_struct with Padding: %d\n",
           sizeof(a_struct)); // 16
    return 0;
}