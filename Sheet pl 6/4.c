#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 5
int main()
{
	int arr[Array_Size];
	int *ptr = arr;
	for (int i = 0; i < Array_Size; i++)
		scanf("%d", &*(ptr + i));
	for (int i = 0; i < Array_Size; i++)
		printf("%d\n", *(ptr + i));
}