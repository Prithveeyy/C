#include <stdio.h>

int main()
{

    float height;
    float weight;
    float bmi;

    printf("Body Mass Index (BMI) CALCULATOR (METRIC UNITS)");

    printf("\nEnter your height  ");
    scanf ("%f", &height);

    printf("\nEnter your weight  ");
    scanf("%f", &weight);

    bmi = weight / height * height ;

    printf("************************\n");
    printf("Your Body Mass Index (BMI) is  %.1f " ,bmi);
    if (bmi < 16.0)
    {
        printf("\nyou are severely Underweight");
    }
    else if ( bmi > 16.0 && bmi < 18.4)
    {
        printf("\nYou are underweight");
    }
        else if ( bmi > 18.5 && bmi < 24.9)
    {
        printf("\nYou are normal");
    }
        else if ( bmi > 25.0 && bmi < 29.9)
    {
        printf("\nYou are overweight");
    }
        else if ( bmi > 30.0 && bmi < 34.9)
    {
        printf("\nYou are slightly obese");
    }
        else if ( bmi > 35.0  && bmi < 39.9)
    {
        printf("\nYou are severly obese");
    }
        else if ( bmi >=40)
    {
        printf("\nYou are morbidly obese");
    }
    
    return 0;
}
