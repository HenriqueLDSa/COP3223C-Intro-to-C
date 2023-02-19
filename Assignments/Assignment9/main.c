#include <stdio.h>

#define STUDENTS 4
#define QUIZZES 5

void populateArray(int studentGrades[STUDENTS][QUIZZES]);
void averageScoreStudents(int studentGrades[STUDENTS][QUIZZES]);
void averageScoreQuizzes(int studentGrades[STUDENTS][QUIZZES]);
void averageScoreAll(int studentGrades[STUDENTS][QUIZZES]);
void inputHeader();
void studentsHeader();
void quizzesHeader();
void totalsHeader();

int main()
{
    int studentGrades[STUDENTS][QUIZZES];

    inputHeader();
    populateArray(studentGrades);

    studentsHeader();
    averageScoreStudents(studentGrades);
    
    quizzesHeader();
    averageScoreQuizzes(studentGrades);

    totalsHeader();
    averageScoreAll(studentGrades);

    printf("\n\n\n\n");
    return 0;
}

// This will populate the array with user's inputs
void populateArray(int studentGrades[STUDENTS][QUIZZES]){
    int row = 0;
    int col = 0;

    // This loops through the 2D array
    /* The reason it was done with nested while loops is to be able to implement the if-statement.
    That way it only populates the array with valid inputs */
    while (row < STUDENTS)
    {
        printf("\n");
        while (col < QUIZZES)
        {
            printf("Enter the score for quiz %d for student %d: ", col+1, row+1);
            scanf("%d", &studentGrades[row][col]);

            if (studentGrades[row][col] <= 100 && studentGrades[row][col] >= 0) // Verifies if the input is a valid grade
            {
                col++;
            }
            else
                printf("Not a valid grade.\n\n");
        }
        row++; // Increments the row after it's done with the collums
        col = 0; // Resets the number of collums for the next iteration
    }
}

// This will calculate and print the average scores sorting by student
void averageScoreStudents(int studentGrades[STUDENTS][QUIZZES]){
    double averageScoreStudents;
    int total;
    int count;
    
    // Iterates through the 2D array
    for (int row = 0; row < STUDENTS; row++)
    {
        total = 0; // Placed here to reset the value in order to calculate for the next set of students
        count = 0; // Placed here to reset the value in order to calculate for the next set of students

        printf("\n");
        for (int col = 0; col < QUIZZES; col++)
        {
            total += studentGrades[row][col]; // Adds each value into the total
            count++;
        }

        averageScoreStudents = (double) total / count; // Calculates the average

        printf("The average scores for student %d is %.1lf", row+1, averageScoreStudents);
    }
}

// This will calculate and print the average scores sorting by quiz
void averageScoreQuizzes(int studentGrades[STUDENTS][QUIZZES]){
    double averageScoreQuizzes;
    int total;
    int count;
    
    // Iterates through the 2D array
    for (int col = 0; col < QUIZZES; col++)
    {
        total = 0; // Placed here to reset the value in order to calculate for the next set of quizzes
        count = 0; // Placed here to reset the value in order to calculate for the next set of quizzes

        printf("\n");
        for (int row = 0; row < STUDENTS; row++)
        {
            total += studentGrades[row][col]; // Adds each value into the total
            count++;
        }

        averageScoreQuizzes = (double) total / count; // Calculates the average

        printf("The average scores for quiz %d is %.1lf", col+1, averageScoreQuizzes);
    }
}

// This will calculate and print the average of all scores of all students together
void averageScoreAll(int studentGrades[STUDENTS][QUIZZES]){
    double averageScoreAll;
    int total = 0; 
    int count = 0;
    
    printf("\n");
    for (int row = 0; row < STUDENTS; row++)     // Iterates through the 2D array
    {
        for (int col = 0; col < QUIZZES; col++)
        {
            total += studentGrades[row][col]; // Adds each value into the total
            count++;
        }
    }

    averageScoreAll = (double) total / count; // Calculates the average

    printf("The total average score of all quizzes from all students is: %.1lf", averageScoreAll);
}

// Header before the user populates the array
void inputHeader(){
    printf("\n\n\n");
    printf("***************************************************");
    printf("\nHERE YOU WILL ENTER ALL THE GRADES FOR ALL STUDENTS\n");
    printf("***************************************************");
    printf("\n");
}

// Header for the average of each student
void studentsHeader(){
    printf("\n\n\n");
    printf("***************************************");
    printf("\nTHESE ARE THE AVERAGES FOR EACH STUDENT\n");
    printf("***************************************");
    printf("\n");
}

// Header for the average of each quiz
void quizzesHeader(){
    printf("\n\n\n\n");
    printf("************************************");
    printf("\nTHESE ARE THE AVERAGES FOR EACH QUIZ\n");
    printf("************************************");
    printf("\n");
}

// Header for the average of everything
void totalsHeader(){
    printf("\n\n\n\n");
    printf("***********************************************");
    printf("\nTHIS IS THE AVERAGE OF ALL QUIZZES AND STUDENTS\n");
    printf("***********************************************");
    printf("\n");
}