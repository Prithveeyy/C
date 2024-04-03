#include <stdio.h>

int main () {

for (int i = 1; i < 25; i++)
{
    if (i == 15)
    {
        continue;
    }
    if (i == 18)
    {
        continue;
    }
    if (i == 23 )
    {
        break;
    }    

    printf("%d\n",i);
}
    return 0;
 }