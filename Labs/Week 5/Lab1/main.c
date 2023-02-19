#include <stdio.h>

int populateList(int integerList[], int arraySize);
int sortList(int integerList[], int arraySize);
int middleInteger();
void inputHeader();

int main()
{
    int arraySize;
    int integerList[arraySize];
    int inputCount = 0;
 
    inputHeader();

    do
    {
        printf("\nEnter the amount of numbers you would like to add: ");
        scanf("%d", &arraySize);

        if (arraySize > 9 || arraySize <=0)
            printf("\nTRY AGAIN!\n");
    } while (arraySize <= 9 && arraySize > 0);


    populateList(integerList, arraySize);
    sortList(integerList, arraySize);


}

int populateList(int integerList[], int arraySize)
{
    printf("\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter: ");
        scanf("%d", &integerList[i]);        
    }

    return integerList[arraySize];
}

int sortList(int integerList[], int arraySize)
{
    int temp;

    for (int i = 0; i < arraySize; i++)
    {
      for (int j = i + 1; j < arraySize; j++)
      {
         if (integerList[i] > integerList[j])
         {
            temp = integerList[i];
            integerList[i] = integerList[j];
            integerList[j] = temp;
         }
      }
   }

   return integerList[arraySize];
}

int middleInteger()
{
    int middleInteger;

    return middleInteger;
}

void inputHeader()
{
    printf("\n****************************************\n");
    printf("HERE IS THE PLACE TO POPULATE YOUR LIST");
    printf("\n****************************************\n");
}