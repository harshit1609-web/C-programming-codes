#include<stdio.h>
int main() {
	float celcius, fahrenheit;
	printf("Enter temprature in celcius:");
	scanf("%f", &celcius);
	fahrenheit = (celcius * 9/5) + 32;
	printf("%2f celcius = %2f fahrenheit", celcius, fahrenheit);
	return 0;
	
}
