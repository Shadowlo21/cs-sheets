#include <stdio.h>
int LinerSearch(int *arr, int n, int TargetNun, int counter)
{
	if (counter == n)
		return -1;
	if (arr[counter] == TargetNun)
		return counter;
	return LinerSearch(arr, n, TargetNun, ++counter);
}
int main()
{
	int arr[5] = {5, 2, 1, 3, 4};
	int index = LinerSearch(arr, 5, 2, 0);
	if (index != -1)
		printf("Index is -> %d\n", index);
	else
		printf("Value not found.\n");
	return 0;
}