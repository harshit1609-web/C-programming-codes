#include<stdio.h>
int main() {
	int a, b, temp;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	printf("\n Before swapping:\n");
	printf("a = %d, b = %d\n", a, b);
	
	temp = a;
	a = b;
	b = temp;
	printf("\n After swapping:\n");
	printf("a = %d, b = %d\n", a, b);
	
	return 0;
}
