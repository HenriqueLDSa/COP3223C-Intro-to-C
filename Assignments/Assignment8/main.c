#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define ARRAYMAXLENGTH 19

void menuOptions();
void menuChoice(int numbers[ARRAYMAXLENGTH], int arraySize, char userInput);
void populateArray(int numbers[ARRAYMAXLENGTH], int arraySize);
void displayArrayReverse(int numbers[ARRAYMAXLENGTH], int arraySize);

int main(){
    int numbers[ARRAYMAXLENGTH];
    char userInput;
    int arraySize;

    menuOptions();

    do{
        printf("\nEnter your choice (A, B or C): ");
        scanf(" %c", &userInput);

        userInput = toupper(userInput);

        menuChoice(numbers, arraySize, userInput);
    } while (userInput != 'C');
    
    return 0;
}

void menuOptions(){
    printf("\nENTER FROM THE OPTIONS BELOW:");
    printf("\nA. Enter your numbers to the list");
    printf("\nB. Display the list in reverse");
    printf("\nC. Quit program\n");
}

void menuChoice(int numbers[ARRAYMAXLENGTH], int arraySize, char userInput){

    switch (userInput){
        case 'A':   
            printf("\nHow many numbers would you like to add to your list? It must be less than 20.\n");
            printf("Enter: ");
            scanf("%d", &arraySize);

            printf("\nEnter your numbers: ");
            populateArray(numbers, arraySize);
            break;

        case 'B':
            printf("Here is your list in reverse: ");
            displayArrayReverse(numbers, arraySize);
            break;

        case 'C': 
            printf("\nThanks for playing!\n");
            break;

        default:
            printf("\nNot an option from the menu! Try again.\n");
            break;
    }
}

void populateArray(int numbers[ARRAYMAXLENGTH], int arraySize){
    for (int i = 0; i < arraySize; i++){
        scanf("%d", &numbers[i]);
    }
}

void displayArrayReverse(int numbers[ARRAYMAXLENGTH], int arraySize){
    for (int i = arraySize - 1; i >= 0; i--){
        if(i == 0)
            printf("%d.", numbers[i]);
        else
            printf("%d, ", numbers[i]);
    }

    printf("\n");
}
