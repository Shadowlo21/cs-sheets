#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 5
int main()
{
	int arr[Array_Size];
	int *ptr = arr;
	int s = 0;
	int *sum = &s;
	for (int i = 0; i < Array_Size; i++)
	{
		scanf("%d", &*(ptr + i));
		*sum += (*(ptr + i));
	}
	printf("%d\n", *sum);
}
