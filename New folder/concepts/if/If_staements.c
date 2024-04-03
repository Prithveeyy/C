#include <stdio.h>

int main() 
{

int age ;

printf("Enter your age \t");
scanf("%d", &age);

if (age >= 18)
{
    printf("you are eligible !");
}
else if (age < 0 )
{
    printf("You are not born yet :)");
}
else if (age == 0)
{
    printf("you have just been born today\n Happy birthday !");
}
else {
 printf("you are not old enough fot this");
}

return 0;
}