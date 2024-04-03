#include <stdio.h>
#include <stdbool.h>

int main()
{

    for (int i = 2; i <= 100; i++)
    {
        bool prime = true;
        for (int j = 2; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
