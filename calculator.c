#include <stdio.h>
#include <math.h>

int main () {

    double num1 ;
    double num2 ;
    char operator;
    double result ;

    
    printf ("\nEnter an operator (+,-,/,*)  ");
    scanf("%c", &operator);

    printf("\nEnter The first number  ");
    scanf("%lf", &num1);

    printf("\nEnter the second number  ");
    scanf("%lf", &num2);
 
   
   switch (operator)
   {
   case '+':
      result = num1 + num2 ;
      printf("\nanswer =\t%lf",result);
    break;
   case '-':
      result = num1 - num2 ;
      printf("\nanswer =\t%lf",result);
    break;
    case '*':
      result = num1 * num2 ;
      printf("\nanswer =\t%lf",result);
    break;
    case '/':
      result = num1 / num2 ;
      printf("\nanswer =\t%lf",result);
    break;

   default:
   printf("\n%c is not a valid mathematical operator",operator);
    break;
   }
    
    return 0;
}