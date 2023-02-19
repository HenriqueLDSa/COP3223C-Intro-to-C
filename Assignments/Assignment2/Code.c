#include <stdio.h>

int main()
{
    int firstNum;
    int secondNum;

    printf("\nEnter the first number: ");
    scanf("%d", &firstNum);

    printf("You entered: %d\n", firstNum);

    printf("\nEnter the second number: ");
    scanf("%d", &secondNum);

    printf("You entered: %d\n", secondNum);

    printf("\nThe difference is %d.\n", (firstNum - secondNum));

    printf("The product is %d.\n", (firstNum * secondNum));

    printf("Square of %d is %d.\n", firstNum, (firstNum * firstNum));

    printf("Square of %d is %d.\n", secondNum, (secondNum * secondNum));

    printf("\nThank you.\n");

    return 0;
}