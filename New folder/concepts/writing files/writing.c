#include <stdio.h>

int main(){
 FILE *pF = fopen("test.txt", "w");

    fprintf (pF , "max verstappen is the best f1 driver\n");
    fprintf (pF , "nobody can stop super max !\n");
    fclose(pF);
}

   /* if(remove("test.txt") == 0) {
        printf("The file is deleted!");
    } else {
        printf("The file is not deleted!");
    }
    return 0;
}*/
