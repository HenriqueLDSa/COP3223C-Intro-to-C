#include <stdio.h>

int main()
{
    int userNum;
    int count = 0;
    int maxValue = 0;
    double sum = 0;
    double average = 0;

    printf("\n*** Enter a negative number to exit program ***\n");

    printf("\n");

    do{
        printf("Enter a positive number: ");
        
        scanf("%i", &userNum);

        if (userNum < 0)
        {
            break;
        }
        else if (userNum >= maxValue)
        {
            maxValue = userNum;
        }
        
        count += 1;
        sum += userNum;

    } while (userNum >= 0);

    average = sum / count;

    printf("\nThe max value is: %i.", maxValue);
    printf("\nThe average is %.2lf.\n", average);

    return 0;
}