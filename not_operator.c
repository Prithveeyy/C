#include <stdio.h>
#include <stdbool.h>

int main() {
    char a1;
    bool sunny;

    printf("\nIs it sunny outside (Y/N)? ");
    scanf(" %c", &a1); 

    if (a1 == 'Y' || a1 == 'y')
    {
        sunny = true;
    }
    else if (a1 == 'N' || a1 == 'n')
    {
        sunny = false;
    }
    else
    {
        printf("Invalid input.\n");
        return 1; 
    }

    if (!sunny)
    {
        printf("It's not sunny outside.\n");
    }
    else
    {
        printf("It's sunny outside.\n");
    }

    return 0;
}
