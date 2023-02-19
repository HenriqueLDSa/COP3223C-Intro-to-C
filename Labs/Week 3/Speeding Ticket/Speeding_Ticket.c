#include <stdio.h>

int main(){
    int speedLimit;
    int drivingSpeed;
    int ticketAmount;

    printf("\nEnter the speed limit: ");
    scanf("%i", &speedLimit);

    printf("Enter your driving speed: ");
    scanf("%i", &drivingSpeed);

    if ((speedLimit - drivingSpeed) >= 10){
        ticketAmount = 50;
        printf("The ticket amount is: $%i.00.\n", ticketAmount);
    }
    else if ((drivingSpeed - speedLimit) >= 6 && (drivingSpeed - speedLimit) <= 20){
        ticketAmount = 75;
        printf("The ticket amount is: $%i.00.\n", ticketAmount);
    }
    else if ((drivingSpeed - speedLimit) >= 21 && (drivingSpeed - speedLimit) <= 40){
        ticketAmount = 140;
        printf("The ticket amount is: $%i.00.\n", ticketAmount);
    }
    else if ((drivingSpeed - speedLimit) > 40){
        ticketAmount = 300;
        printf("The ticket amount is: $%i.00.\n", ticketAmount);
    }
    else{
        ticketAmount = 0;
        printf("The ticket amount is: $%i.00; which means, no ticket for you today.\n", ticketAmount);
    }

    return 0;
}