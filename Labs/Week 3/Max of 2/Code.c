#include <stdio.h> 

int main(){

    int userInput1;
    int userInput2;
    int largerValue;

    printf("\nEnter your first number: ");
    scanf("%i", &userInput1);

    printf("Enter your second number: ");
    scanf("%i", &userInput2);

    if (userInput1 >= userInput2)
    {
        largerValue = userInput1;
    } 
    else
    {
        largerValue = userInput2;
    }
    
    printf("The larger value is: %i\n", largerValue);

    return 0;
}