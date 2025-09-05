#include<stdio.h>
int main() {
	float weight, height, bmi;
	
	printf("Enter your weight in kilograns: ");
	scanf("%f", &weight);
	
	printf("Enter your height in meters: ");
	scanf("%f", &height);
	
	bmi = weight/(height*height);
	
	printf("Your bmi is: %.2f\n", bmi);
	
	if (bmi < 18.5) {
		printf("You are underweight.\n");
	} 
	else if (bmi >= 18.5 && bmi < 24.9) {
		printf("You have a Normal weight.\n");
	} 
	else if (bmi >= 25 && bmi < 29.9) {
		printf ("You are overweight.\n");
	}	
	else {
		printf("you are obese.\n");
	}
	return 0;
}
