#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)? ");
    scanf("%c", &unit);
    unit = toupper(unit); // Convert input to uppercase

    if (unit == 'F') {
        printf("The temperature is already in Fahrenheit.\n");
    } 
    else if (unit == 'C') {
        printf("What is the temperature? ");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 32;
        printf("The temperature in Fahrenheit is %.2f\n", temp);
    } 
    else {
        printf("The unit is not a valid unit of measurement.\n");
    }

    return 0;
}