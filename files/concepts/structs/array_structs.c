#include <stdio.h>
#include <string.h> // Include string.h for string functions

// Define a struct for a character
struct Character {
    char name[50]; // Using char array for name
    int age;
    char occupation[50]; // Using char array for occupation
};

int main() {
    // Declare an array of structs for characters
    const int numCharacters = 4;
    struct Character characters[numCharacters];

    // Initialize the array elements with data for each character
    strcpy(characters[0].name, "John Wick");
    characters[0].age = 40;
    strcpy(characters[0].occupation, "Assassin");

    strcpy(characters[1].name, "Brian O'Conner");
    characters[1].age = 35;
    strcpy(characters[1].occupation, "Undercover Cop");

    strcpy(characters[2].name, "Dom");
    characters[2].age = 45;
    strcpy(characters[2].occupation, "Street Racer");

    strcpy(characters[3].name, "Ethan Hunt");
    characters[3].age = 50;
    strcpy(characters[3].occupation, "Secret Agent");

    // Print out the details of each character
    for (int i = 0; i < numCharacters; ++i) {
        printf("Character %d:\n", i + 1);
        printf("Name: %s\n", characters[i].name);
        printf("Age: %d\n", characters[i].age);
        printf("Occupation: %s\n\n", characters[i].occupation);
    }

    return 0;
}
