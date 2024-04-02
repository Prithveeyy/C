#include <stdio.h>
#include <stdbool.h>

int main (){

 float temparature ;
 
 printf("what is the temperature in C  ");
 scanf("%f", &temparature);

 if (temparature <0 || temparature > 45)
 {
    printf("\nThe weather is bad :(");
 }else {

    printf("\nThe weather is good :)");
 }
 
return 0;
}