#include<stdio.h>
int main() {
	int arr[10], i, max, min;
	printf("Enter 10 elements: \n");
	for (i = 0; i < 10; i++) {
		printf("Elements %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];

	for (i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	printf("The greatest number is: %d\n", max);
	printf("The smallest number is: %d\n", min);
	
	return 0;
}
