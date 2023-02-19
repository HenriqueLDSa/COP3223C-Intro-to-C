#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Functions prototypes
void menuOptions();
void fahrenheitToCelsius(int input);
void celsiusToFahrenheit(int input);

int main(){
    int choice;
    int input;
    double celsius;
    double fahrenheit;

    // Loops the menu options and user choice until user choses 3, which is to quit
    while (choice != 3){
        menuOptions();
        scanf("%i", &choice);

        // Determines what the program will do depending on the user choice
        switch (choice){
            case 1:
                fahrenheitToCelsius(input);
                break;
            case 2:
                celsiusToFahrenheit(input);
                break;
            case 3:
                printf("\nThank you for playing!\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}

// Function that outputs the menu options
void menuOptions(){
    printf("\n***** CHOOSE FROM THE FOLLOWING OPTIONS *****\n");
    printf("1. Convert from Fahrenheit to Celsius.\n");
    printf("2. Convert from Celsius to Fahrenheit.\n");
    printf("3. Quit.\n");
    printf("\nEnter your choice: ");
}

// Function to convert from Fahrenheit to Celsius
void fahrenheitToCelsius(int input){
    int result;

    printf("\nWhat is the temperature in Fahrenheit? ");
    scanf("%i", &input);

    result = (input - 32) * 5 / 9;

    printf("%i°F equals %i°C.\n", input, result);
}

// Function to convert from Celsius to Fahrenheit
void celsiusToFahrenheit(int input){
    int result;

    printf("\nWhat is the temperature in Celsius? ");
    scanf("%i", &input);

    result = (input * 9/5) + 32;

    printf("%i°C equals %i°F.\n", input, result);
}