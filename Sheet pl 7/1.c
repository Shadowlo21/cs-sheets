#include <stdio.h>
inline int is_Sorted(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return 0; 
		}
	}
	return 1;
}
int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	if (is_Sorted(arr, 5)) {
		printf("Array is sorted\n");
	}
	else {
		printf("Array is not sorted\n");
	}
	return 0;
}