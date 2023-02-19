#include <stdio.h>
#include <math.h>

int main()
{
    float quarters, dimes, nickels, pennies;
    float amount;
    int validInput; // 0 = false

    do{
        printf("\nPlease enter the amount of quarters: ");
        scanf("%f", &quarters);

        printf("Please enter the amount of dimes: ");
        scanf("%f", &dimes);

        printf("Please enter the amount of nickels: ");
        scanf("%f", &nickels);

        printf("Please enter the amount of pennies: ");
        scanf("%f", &pennies);
        
        quarters = quarters * 0.25;
        dimes = dimes * 0.10;
        nickels = nickels * 0.05;
        pennies = pennies * 0.01;
    
        if (quarters >= 0 && dimes >= 0 && nickels >= 0 && pennies >= 0){
            validInput = 1;
            amount = quarters + dimes + nickels + pennies;
            printf("Amount: $%.2lf.", amount);
        } else{
            validInput = 0;
            printf("\nPlease enter amounts greater than 0!\n");
        }

    } while (validInput == 0);

    return 0;
}