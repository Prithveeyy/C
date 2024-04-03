#include <stdio.h>

float calculateBMI(float weight, float height) {
    return weight / ((height/100) * (height/100));
}

int main() {
    float weight, height, bmi;
    int age;

    printf("Welcome to the BMI Calculator!\n");
    printf("Please enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Please enter your height in centimeters: "); 
    scanf("%f", &height);

    printf("Please enter your age in years: ");
    scanf("%d", &age);

    bmi = calculateBMI(weight, height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if (age < 18) {
        printf("Note: BMI may not be accurate for individuals under 18 years old.\n");
    }

    if (bmi < 16.0) {
        printf("\nYou are severely Underweight");
    } else if (bmi > 16.0 && bmi < 18.4) {
        printf("\nYou are underweight");
    } else if (bmi > 18.5 && bmi < 24.9) {
        printf("\nYou are normal");
    } else if (bmi > 25.0 && bmi < 29.9) {
        printf("\nYou are overweight");
    } else if (bmi > 30.0 && bmi < 34.9) {
        printf("\nYou are slightly obese");
    } else if (bmi > 35.0 && bmi < 39.9) {
        printf("\nYou are severely obese");
    } else if (bmi >= 40) {
        printf("\nYou are morbidly obese");
    }

    return 0;
}
