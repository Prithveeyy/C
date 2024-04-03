#include <stdio.h>
void birthday (char name[] , int age){
    printf("Happy birthday %s , you are %d years old",name,age);
   }


int main (){
     
     char name [25];
     int age;
     
     printf("what is your name ? ");
     scanf("%s", &name);

     printf("what is your age ? ");
     scanf("%d", &age);

     birthday(name,age);


    return 0;
    
}