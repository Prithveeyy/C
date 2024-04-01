 #include <stdio.h>
#include  <math.h>
 int main(){
    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("\n Enter the radius =\t");
    scanf("%lf", &radius);

    circumference = 2 * radius * PI ;

    printf("the circumference of the cirle = %lf" , circumference);

    return 0 ;


 }