#include <stdio.h>


char calculateGrade(int marks) {
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else if (marks >= 50)
        return 'E';
    else
        return 'F';
}

int main() {
    int science, maths, english, socialScience, secondLanguage, elective;
    
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    if (science < 0 || science > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    if (maths < 0 || maths > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    printf("Enter marks for English: ");
    scanf("%d", &english);
    if (english < 0 || english > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    printf("Enter marks for Social Science: ");
    scanf("%d", &socialScience);
    if (socialScience < 0 || socialScience > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    printf("Enter marks for 2nd Language: ");
    scanf("%d", &secondLanguage);
    if (secondLanguage < 0 || secondLanguage > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    printf("Enter marks for Elective: ");
    scanf("%d", &elective);
    if (elective < 0 || elective > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
        return 1; 
    }

    int totalMarks = science + maths + english + socialScience + secondLanguage + elective;
    float totalpercentage = ((float)totalMarks / 600) * 100;
    char totalgrade = calculateGrade(totalpercentage); 
    int marksne = science + maths + english + socialScience + secondLanguage;
    float nepercentage = ((float)marksne / 500) * 100;
    char negrade = calculateGrade(marksne);

    printf("\n\nSubject\t\tMarks\t\tPercentage\tGrade\n");
    printf("---------------------------------------------------\n");
    printf("Science\t\t%d\t\t%.2f\t\t%c\n", science, ((float)science / 100) * 100, calculateGrade(science));
    printf("Maths\t\t%d\t\t%.2f\t\t%c\n", maths, ((float)maths / 100) * 100, calculateGrade(maths));
    printf("English\t\t%d\t\t%.2f\t\t%c\n", english, ((float)english / 100) * 100, calculateGrade(english));
    printf("Social Science\t%d\t\t%.2f\t\t%c\n", socialScience, ((float)socialScience / 100) * 100, calculateGrade(socialScience));
    printf("2nd Language\t%d\t\t%.2f\t\t%c\n", secondLanguage, ((float)secondLanguage / 100) * 100, calculateGrade(secondLanguage));
    printf("Elective\t%d\t\t%.2f\t\t%c\n", elective, ((float)elective / 100) * 100, calculateGrade(elective));
      printf("---------------------------------------------------\n");
    printf("Total\t\t%d\t\t%.2f\t\t%c\n", totalMarks,totalpercentage, totalgrade);
    printf("Total\t\t%d\t\t%.2f\t\t%c\n", marksne,nepercentage,negrade);
      printf("---------------------------------------------------\n");

    return 0;
}
