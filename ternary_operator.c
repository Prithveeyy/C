#include <stdio.h>

int findmax(int x, int y) {
    return (x > y) ? x : y;
}

int main()
{
    int x;
    int y;
    int max;   

    printf("What is the first number ? ");
    scanf("%d", &x);

    printf("what is the second number ? ");
    scanf("%d",&y);

    max = findmax(x,y) ;

    printf("The greater number is %d",max);
    
    return 0;
}
