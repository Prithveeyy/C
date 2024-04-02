#include <stdio.h>
#include <ctype.h>

int main () {

    char questions [3][400] = {"1.Which car model is famously associated with the character Brian O'Conner, played by Paul Walker, in the Fast and Furious series?  ",
                  "2.Which Formula 1 driver became the youngest-ever World Champion in 2021?  ",
                   "3.What notable trait does Thomas Shelby possess, contributing to his cunning and strategic prowess in the TV series Peaky Blinders?  "};

    char options [3][4][100] = {{"a) Nissan Skyline GT-R", "b) Dodge Charger", "c) Toyota Supra", "d) Mitsubishi Eclipse"},
                          {"a) Lewis Hamilton", "b) Sebastian Vettel", "c) Max Verstappen","d) Fernando Alonso"},
                          {"a) Exceptional marksmanship","b) Eidetic memory","c) Ability to manipulate and outwit opponents","d) Proficiency in hand-to-hand combat"}};
        
    char answers [3] = {'A', 'C', 'C'};
    int numberofquestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    printf("QUIZ\n");

    for (int i = 0; i < numberofquestions ; i++)
    {
        printf("*********\n");
        printf("%s\n", questions[i]);
        printf("*********\n");

        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", options[i][j]);
        }
        
        printf("Guess: ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong!\n");
        }
    }

    printf("****************\n");
    printf("Final score = %d/%d\n", score , numberofquestions);
    printf("****************\n");
    return 0 ;
}
