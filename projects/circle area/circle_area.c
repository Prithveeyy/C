#include <stdio.h>
#include  <math.h>
 int main(){
    const double PI = 3.14159;
    double radius;
    double area;

    printf("\n Enter the radius =\t");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("the circumference of the cirle = %lf" , area);

    return 0 ;


 }