#include<stdio.h>
int main() {
	int y;
	printf("Enter any year:");
	scanf("%d", &y);
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		printf("Given year is leap year/n");
		} else {
			printf("Given year is not leap year/n");
		}
		return 0;
	}
