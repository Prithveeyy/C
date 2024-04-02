#include <stdio.h>

enum favcolor {Black, Orange, White, Turquoise, Red};

int main() {
    enum favcolor user =  0 ;

    switch (user) {
        case Black:
            printf("Your favourite color is black.\n");
            break;
        case Orange:
            printf("Your favourite color is orange.\n");
            break;
        case White:
            printf("Your favourite color is white.\n");
            break;
        case Turquoise:
            printf("Your favourite color is turquoise.\n");
            break;
        case Red:
            printf("Your favourite color is red.\n");
            break;
        default:
            printf("Invalid color selection.\n");
            break;
    }

    return 0;
}
