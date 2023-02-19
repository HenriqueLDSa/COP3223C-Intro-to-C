// Code by Henrique Lacerda Delgado De Sa.
// Date: 09/15/2022.
// This will let the user enter as many numbers as they want as long as the values are positive.
// It will check for the highest and lowest values, add to the count of inputs, and calculate the average.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
  int input;
  int lowestValue;
  int highestValue = 0;
  int totalAmount = 0;
  int numValues = 0;
  double avgValues = 0;

  printf("\n*** ENTER A NEGATIVE NUMBER TO QUIT ***\n");

  // Gets user input
  printf("\nEnter a value: ");
  scanf("%i", &input);

  // Assigns the first value to lowest if it's positive
  if (input >= 0){
    lowestValue = input;
  }

  // Continues to get input
  while (input >= 0){
    if (input <= lowestValue){
      lowestValue = input;
    } else if (input >= highestValue){
      highestValue = input;
    }

    // Adds to the total count and total amount
    numValues += 1.0;
    totalAmount += input;

    printf("Enter a value: ");
    scanf("%i", &input);
  }

  // Calculates the average
  avgValues = (double) (totalAmount / numValues);

  //Only prints the values if there were inputs by the user
  if (numValues > 0){
    printf("\nThe lowest number is: %i", lowestValue);
    printf("\nThe highest number is: %i", highestValue);
    printf("\nThe number of values entered is: %i", numValues);
    printf("\nThe average of the numbers is: %.2lf", avgValues);
  }
  else{
    printf("\nYou haven't entered any numbers. Please try again if you would like!");
  }

  printf("\n");

  return 0;
}