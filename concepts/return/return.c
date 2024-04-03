#include <stdio.h>

int addNumbers(int a, int b) {
    int sum = a + b; // Add the numbers
    return sum; // Return the result
}
int main() {
    int num1;
    int num2;

    printf("what is the number of goals scored in first season ? ");
    scanf("%d", &num1);    
    
    printf("what is the number of goals scored in second season ? ");
    scanf("%d", &num2);

    int result = addNumbers(num1, num2);
    
    printf("Total goals scored is: %d\n", result);
    
    return 0;
}