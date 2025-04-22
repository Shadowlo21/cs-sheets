#include <stdio.h>
int changesCounter = 0;
int is_sorted(int *arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			return 0;
		}
	}
	return 1;
}
inline int bubble_sort(int *arr, int n)
{
	int counter = 0;
	do
	{
		counter = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				counter++;
				changesCounter++;
			}
		}
	} while (counter > 0);

	return 1;
}
int main()
{
	int arr[5] = {5, 2, 1, 3, 4};
	if (is_sorted(arr, 5))
	{
		printf("Array is sorted\n");
	}
	else
	{
		bubble_sort(arr, 5);
		printf("Array is not sorted and now Sorted\n");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%1d", arr[i]);
	}

	return 0;
}