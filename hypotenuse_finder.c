#include <stdio.h>
#include <math.h>

int main() {

double A;
double B;
double C;

printf ("\nEnter the lenght of side A\t");
scanf("%lf", &A);

printf ("\nEnter the lenght of side B\t");
scanf("%lf", &B);

C = sqrt(A*A + B*B);

printf ( "The value of hypotenuse = \t %.2lf", C);

return 0;
}