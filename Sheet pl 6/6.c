#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define Array_Size 8
int find_Gra(int *arr, int size)
{
	int max = -1;
	for (int i = 0; i < size; i++)
	{
		if (max < *(arr + i))
		{
			max = *(arr + i);
		}
	}
	return max;
}
int main()
{
	int arr[Array_Size];
	int *ptr = arr;
	for (int i = 0; i < Array_Size; i++)
		scanf("%d", &arr[i]);
	printf("%d", find_Gra(ptr, Array_Size));
}
