#include <stdio.h>
#include <math.h>

int main()
{
    int userNum;
    int x;

    printf("\nEnter your number: ");
    scanf("%d", &userNum);

    printf("\nWhat do you want to divide it by? ");
    scanf("%d", &x);

    printf("\n");

    for(int i = 1; i <= 3; i = i + 1){
        userNum = userNum / x;
        printf("%d ", userNum);
    }
    
    printf("\n");

    return 0;

}