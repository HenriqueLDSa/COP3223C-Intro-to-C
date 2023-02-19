#include <stdio.h>
#include <stdbool.h>

int main() {
    int red;
    int green;
    int blue;
    bool validInput;
    int lowestValue;

    do{
        printf("\nEnter the amount of red: ");
        scanf("%i", &red);

        printf("Enter the amount of green: ");
        scanf("%i", &green);
    
        printf("Enter the amount of blue: ");
        scanf("%i", &blue);

        if ((red >= 0 && red <= 255) && (green >= 0 && green <= 255) && (blue >= 0 && blue <= 255)){
            validInput = true;
        } else{
            validInput = false;
            printf("\nPlease enter values between 0 and 255!\n");
        }
    } while (validInput == false);

    if (red <= green && red <= blue) {
        lowestValue = red;
    }
    else if (green <= red && green <= blue) {
        lowestValue = green;
    }
    else if (blue <= red && blue <= green) {
        lowestValue = blue;
    }

    red = red - lowestValue;
    green = green - lowestValue;
    blue = blue - lowestValue;

    printf("\nYour color without the gray part is: %i:%i:%i.\n", red, green, blue);

    return 0;
}