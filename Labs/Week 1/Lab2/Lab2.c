#include <stdio.h> 
#include <math.h>

int main()
{

int userNum;
int userNum2;
int userNumSqr;

printf("Enter integer: \n");
scanf("%d", &userNum);

printf("You entered: %d\n", userNum);

userNumSqr = userNum * userNum;

printf("%d squared is %d\n", userNum, userNumSqr);

printf("Enter another integer: \n");
scanf("%d", &userNum2);

userNumSqr = userNum2 * userNum2;

printf("%d + %d is %d\n", userNum, userNum2, userNum + userNum2);

printf("%d * %d is %d\n", userNum, userNum2, userNum * userNum2);

return 0;

}