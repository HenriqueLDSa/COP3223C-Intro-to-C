// Code by Henrique Lacerda Delgado De Sa.
// Date: 09/12/2022.
// This is a shipping calculator that will measure how much the charge will be depending on the distance of the shipment and the weight of the package.

#include <stdio.h>
#include <math.h>

int main(){

    double packageWeight;
    double milesShipped;
    int rateMultiplier;
    double totalAmount;

    printf("\nPlease enter package weight: ");
    scanf("%lf", &packageWeight);

    printf("\nPlease enter shipping distance in miles: ");
    scanf("%lf", &milesShipped);

    if (packageWeight > 0 && packageWeight <= 10)
    {
        rateMultiplier = ceil(milesShipped / 500); //ceil() function used to round up 
        totalAmount = rateMultiplier * 3; //$3 rate for package's weight > 0 and <= 10

        if (milesShipped > 1000){
        totalAmount = totalAmount + 10; //Extra rate if more than 1000 miles
        }

        printf("\nYour shipping charge is: $%.2lf.\n", totalAmount);
    } 
    
    else if (packageWeight > 10 && packageWeight <= 50)
    {
        rateMultiplier = ceil(milesShipped / 500); //ceil() function used to round  up
        totalAmount = rateMultiplier * 5; //$5 rate for package's weight > 10 and <= 50

        if (milesShipped > 1000){
        totalAmount = totalAmount + 10; //Extra rate if more than 1000 miles
        }

        printf("\nYour shipping charge is: $%.2lf.\n", totalAmount);
    }

    else if (packageWeight > 50){
        printf("\nSorry, we only ship packages of 50 pounds or less.\n");
    }
    
    else{
        printf("\nPlease enter a valid amount!\n");
    }

    return 0;

}