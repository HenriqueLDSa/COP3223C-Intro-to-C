#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABETSIZE 26
#define DECODERSIZE 26
#define MAXSTRINGSIZE 50 // Doing 50 since the longest word in the English language is 45 letters long

void menuChoice();
void stringDecoder(char alphabet[], char decoderChart[], char userString[], char decodedString[]);
void stringClear(char userString[], char decodedString[]);

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Standar English alphabet
    char decoderChart[] = "HIVJKWLAMYNBXOZCTPUDQSREGF"; // Decoded chart for each letter of the alphabet
    char userString[MAXSTRINGSIZE]; 
    char decodedString[MAXSTRINGSIZE];
    int choice = 0;

    menuChoice(); // Calls the menuOption function

    // Loop iterates until the user chooses to quit
    do 
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter a single-worded string: ");
            scanf("%s", userString); 

            stringDecoder(alphabet, decoderChart, userString, decodedString); // Calls the stringDecoder function

            printf("\nThe word you entered: %s.", userString);
            printf("\nThe decoded word: %s.\n", decodedString); 

            stringClear(userString, decodedString); // Calls the stringClear function
            break;
        case 2:
            printf("\nThank you for using our program!\n\n");
            break;
        default:
            printf("\nInvalid choice! Try again.\n\n");
            break;
        }
    } while (choice != 2);

    return 0;
}

void menuChoice()
{
    printf("\n\n");
    printf("=========================================");
    printf("\nPLEASE CHOOSE FROM THE OPTIONS BELOW");
    printf("\nTHE WORDS YOU ENTER WILL BECOME UPPERCASE\n");
    printf("=========================================");
    printf("\n");
    printf("\n1. Enter a new word");
    printf("\n2. Quit");
    printf("\n");
}

// Function to decode the userString based on the decoder chart and assign it to decodedString
void stringDecoder(char alphabet[], char decoderChart[], char userString[], char decodedString[])
{
    for (int upper = 0; upper < strlen(userString); upper++) // for-loop makes all the characters uppercase
        userString[upper] = toupper(userString[upper]);

    // Nested for-loop to iterate the userString and match each letter with the corresponding decoded letter
    for (int i = 0; i < strlen(userString); i++) 
    {
        for (int j = 0; j < ALPHABETSIZE; j++) 
        {
            if (userString[i] == alphabet[j])
            {
                decodedString[i] = decoderChart[j];
            }
        }
    }
}

// Function to clear the userString and the decodedString for future use
void stringClear(char userString[], char decodedString[])
{
    for (int i = 0; i < MAXSTRINGSIZE; i++)
    {
        userString[i] = '\0';
        decodedString[i] = '\0';
    }
}
