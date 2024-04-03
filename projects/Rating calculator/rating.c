#include <stdio.h>

float calculateFIFARating(int goals, int assists, float passaccuracy, float tackleaccuracy, float dribblerate) {

    float w1 = 25.0 / 100;   
    float w2 = 20.0 / 100;   
    float w3 = 30.0 / 100;   
    float w4 = 10.0 / 100;   
    float w5 = 15.0 / 100;    
    
    
    float FIFARating = goals * w1 + assists * w2 + passaccuracy * w3 + tackleaccuracy * w4 + dribblerate * w5;

    
    if (FIFARating > 100.0)
        FIFARating = 100.0;
    
    return FIFARating;
}

int main() {
    int goals;
    int assists;
    int pass;
    int passsuc;
    int tackle;
    int tacklesuc;
    int drrible;
    int dribblesuc;

    printf("\nONLY LAST SEASON DATA TO BE ENTERED \n");

    printf("\nWhat is the number of goals scored? ");
    scanf("%d", &goals);

    printf("What is the number of assists provided? ");
    scanf("%d", &assists);

    printf("Enter total passes: ");
    scanf("%d", &pass);

    printf("Enter successful passes: ");
    scanf("%d", &passsuc);
    if (passsuc > pass) {
        printf("Error: Successful passes cannot be more than total passes.\n");
        return 1; // Exiting program with an error code
    }
    float passaccuracy = (float)passsuc / pass * 100;
    printf("Pass accuracy: %.2f%%\n", passaccuracy);

    printf("Enter total tackle attempts: ");
    scanf("%d", &tackle);

    printf("Enter successful tackle attempts: ");
    scanf("%d", &tacklesuc);
    if (tacklesuc > tackle) {
        printf("Error: Successful tackles cannot be more than total tackles.\n");
        return 1; // Exiting program with an error code
    }
    float tackleaccuracy = (float)tacklesuc / tackle * 100;
    printf("Tackle accuracy: %.2f%%\n", tackleaccuracy);
    
    printf("Enter total dribble attempts: ");
    scanf("%d", &drrible);
    printf("Enter successful dribble attempts: ");
    scanf("%d", &dribblesuc);
    if (dribblesuc > drrible) {
        printf("Error: Successful dribbles cannot be more than total dribbles.\n");
        return 1; // Exiting program with an error code
    }
    float dribblerate = (float)dribblesuc / drrible * 100;
    printf("Dribble success rate: %.2f%%\n", dribblerate);

    float rating = calculateFIFARating(goals, assists, passaccuracy, tackleaccuracy, dribblerate);
    printf("\nFIFA Rating: %.2f\n\n", rating);

    return 0;
}
