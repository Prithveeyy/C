#include <stdio.h>

int main()
{
    int rows;
    int coulmns;
    char symbol;

    printf("Enter a symbol to use  ");
    scanf("%c", &symbol);
    
     printf("Enter required number of columns  ");
    scanf("%d", &coulmns);

     printf("Enter required number of rows  ");
    scanf("%d", &rows);


    for (int i = 0 ; i < rows; i++)
    {
        for (int j = 0; j < coulmns; j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
        
    }  

    return 0;
}
