#include <stdio.h>

int main() {
    char grade; 
    
    printf("Enter your grade in a letter (ex: A): ");
    scanf(" %c", &grade); 
    
    switch(grade) {
        case 'A':
            printf("Very good !");
            break;
        case 'B':
            printf("Close to A");
            break;
        case 'C':
            printf("Not bad");
            break;
        case 'D':
            printf("Should improve");
            break;
        case 'E':
            printf("At least not an F");
            break;
        case 'F':
            printf("Better to Quit");
            break;
        default:
            printf("Enter only valid grades please");
            break;
    }

    return 0;
}
