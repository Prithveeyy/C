#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(0));

int number = (rand() % 20) + 1;
int number2 = (rand() % 20) + 1;
int number3 = (rand() % 20) + 1;

printf("%d\n",number);
printf("%d\n",number2);
printf("%d\n",number3);

return 0;
}