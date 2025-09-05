#include<stdio.h>
int main() {
	int n, i = 1;
	printf("Enter the number to generate the multiplication table: ");
	scanf("%d", &n);
	printf("Multiplication Table for %d:\n", n);
	
	while (i<=10) {
		printf("%d x %d = %d\n", n, i, n*i);
		i++;
	}
	return 0;
}
