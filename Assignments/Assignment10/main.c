#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menuChoice();
void getString(char userString[]);
void forwardString(char userString[]);
void backwardString(char userString[]);
void verticalString(char userString[]);
void triangleString(char userString[]);
void stringClear(char userString[]);

#define MAXSTRINGSIZE 200 //defines the max size of the string as 200

int main()
{
    char userString[MAXSTRINGSIZE];
    int choice = 0;
    int stringLength = 0;

    menuChoice();

    //do-while loop to continue running program until user chooses to quit
    do{
        printf("\n\nWhich option do you choose? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n");
            stringClear(userString); //clears the userString array before getting a new input
            getString(userString); //gets the string from the user
            break;
        case 2:
            printf("\n");
            stringLength = strlen(userString);
            printf("The string is %d characters long.\n", stringLength);
            break;
        case 3:
            printf("\n");
            forwardString(userString); //prints the string forwards
            printf("\n");
            break;
        case 4:
            printf("\n");
            backwardString(userString); //prints the string backwards
            printf("\n");
            break;
        case 5:
            printf("\n");
            verticalString(userString); //prints the string vertically
            printf("\n");
            break;
        case 6:
            printf("\n");
            triangleString(userString); //prints the string in a triangle shape
            printf("\n");
            break;
        case 7:
            printf("\n");
            printf("====================================");
            printf("\nTHANK FOR USING MY PROGRAM! GOODBYE!\n");
            printf("====================================");
            printf("\n\n");
            break;
        default:
            printf("\n\n");
            printf("=========================");
            printf("\nINVALID INPUT, TRY AGAIN!\n");
            printf("=========================");
            printf("\n");
            break;
        }
    } while (choice != 7);

    return 0;
}

void menuChoice()
{
    printf("\n\n");
    printf("====================================");
    printf("\nPLEASE CHOOSE FROM THE OPTIONS BELOW\n");
    printf("====================================");
    printf("\n");
    printf("\n1. Enter a new string");
    printf("\n2. Display string size");
    printf("\n3. Display string forwards");
    printf("\n4. Display string backwards");
    printf("\n5. Display string vertically");
    printf("\n6. Display string as a triangle");
    printf("\n7. Quit");
    printf("\n\n");
}

//gets the string from the user
void getString(char userString[])
{
    printf("Please enter your string: ");
    scanf("%s", userString);
}

//prints the string
void forwardString(char userString[])
{
    printf("This is your string forwards: %s", userString);
}

//iterates through the string starting at the end, until it prints it all, printing it backwards
void backwardString(char userString[])
{
    printf("This is your string backwards: ");
    for (int i = strlen(userString); i >= 0; i--) //starts at the end and decreases 'i' accordingly 
    {
        printf("%c", userString[i]);
    }
}

//iterates through the string, with a "\n" at the end of the print statement for a new line, making the string vertical
void verticalString(char userString[])
{
    printf("This is your string vertical:\n");
    for (int i = 0; i < strlen(userString); i++)
    {
        printf("%c\n", userString[i]);
    } 
}

//nested for-loop serves to create rows and columns with the characters of the string
void triangleString(char userString[])
{
    printf("This is your string as a triangle:\n");
    for (int i = 0; i < strlen(userString); i++) //makes the rows
    {
        for (int j = 0; j <= i; j++) //makes the columns
        {
            printf("%c", userString[j]);
        }
        printf("\n");
    }
}

//iterates through the string, and makes the full array NULL
void stringClear(char userString[])
{
    for (int i = 0; i < MAXSTRINGSIZE; i++)
    {
        userString[i] = '\0';
    }
}

