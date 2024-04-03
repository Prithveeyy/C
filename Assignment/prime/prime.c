#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool prime = true; 

    printf("Enter number : ");
    scanf("%d", &num);


    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            prime = false; 
            break; 
        }
    }

    if (prime == true) { 
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}
