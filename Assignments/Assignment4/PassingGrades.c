#include <stdio.h>

int main(){
    int userInput;
    int countInputs = 0;
    int countPassingGrades = 0;
    double percentagePassingGrades;

    do{
        printf("\nEnter the grade you received (enter -1 to quit): ");
        scanf("%i", &userInput);

        if (userInput >= 0 && userInput <= 100){          // Verifies if grade is valid

            if (userInput >= 70){         // Verifies if it is a passing grade
                countInputs += 1;         // Increases the amount of user inputs
                countPassingGrades += 1;         // Increases the amount of user inputs for passing grades
            }
            else {
                countInputs += 1;          // Increases the amount of user inputs
            }

        }
        else {
            if (userInput != -1){
                printf("\nThat is not a valid grade!\n");
            }
        }

    } while (userInput != -1);

    percentagePassingGrades = ((double) countPassingGrades / countInputs) * 100;      // To get the percentage of how many of the valid grades are passing grades

    printf("\nYou entered %i passing grades.", countPassingGrades);
    printf("\n%.1lf%% of the valid grades entered are passing grades.\n", percentagePassingGrades);

    return 0;
}