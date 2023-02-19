#include <stdio.h>

int main(){

printf("\n");

// PART 1
    printf("Part 1: \n");

    int i;

    for (i = 5; i < 60; i += 5){
        printf("%i ", i);
    }

    printf("\n");
    printf("\n");
//



// PART 2
    printf("Part 2: \n");

    int j;

    for (j = 0; j < 200; j++){
        if (j != 0 && (j % 7) == 0 && (j % 2) == 0)
            printf("%i ", j);
    }

    printf("\n");
    printf("\n");
//



// PART 3
    printf("Part 3: \n");

    int x;
    int sumX = 0;

    for (x = 104; x < 500; x += 8){
        sumX += x;
    }

    printf("Sum = %i", sumX);

    printf("\n");
    printf("\n");
//



// PART 4
    printf("Part 4: \n");

    int y;
    int sumY = 0;

    for (y = 21; y < 100; y += 2){
        sumY += y;
    }

    printf("Sum = %i", sumY);

    printf("\n");
//

    return 0;
}