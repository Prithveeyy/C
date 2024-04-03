#include <stdio.h>

struct FootballPlayer {
    char name[50];
    char position[20];
    int age;
    char nationality[50];
};
void introduce(struct FootballPlayer player) {
    printf("Hi, I'm %s. I'm %d years old and I play as a %s. I'm from %s.\n", player.name, player.age, player.position, player.nationality);
}

int main() {    
    struct FootballPlayer son_heung_min = {"Son Heung-min", "Forward", 29, "South Korea"};
    introduce(son_heung_min);
    return 0;
}
