#include<stdio.h>

int main() {
	int num1, num2;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	
	printf("enter the second number: ");
	scanf("%d", &num2);
	
	if (num2 == 0) {
		printf("Division by zero is not allowed.\n");
	} else {
		if (num1 % num2 == 0) {
			printf("Divisible\n");
		} else {
			printf("Not Divisible\n");
		}
	}
	return 0;
}
