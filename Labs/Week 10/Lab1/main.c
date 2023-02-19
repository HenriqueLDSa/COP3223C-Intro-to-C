#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){
    const int MAX_TITLE_CHARS = 44;
    const int LINE_LIMIT=100;
    char line[LINE_LIMIT];
    char inputfileName[25];


    //title
    char time[30];
    char title[MAX_TITLE_CHARS];
    char rating[6];

    printf("Enter the name of the file: ");
    scanf("%s", inputfileName);

    FILE* fp;
    fp = fopen(inputfileName, "r");

    if(fp == NULL){
        printf("Error opening file\n");
        exit(1);
    }

    char prevTitle[MAX_TITLE_CHARS];
    //read file line by line
    while (fgets(line, LINE_LIMIT, fp)!=NULL) {
        int index = 0;
        //read time string before first ,
        while(line[index] != ','){
            time[index] = line[index];
            index++;
        }
        time[index] = '\0';
        index++;
        int titleIndex = 0;
        //read title string second first ,
        while(line[index] != ','){
            title[titleIndex] = line[index];
            index++;
            titleIndex++;
        }
        title[titleIndex] = '\0';
        //if current title is same as previous title, skip
        if(strcmp(prevTitle, title)==0){
            printf(" %s", time);
            continue;
        }
        index++;
        int ratingIndex = 0;
        //read rating string which is the last
        while(line[index] != '\n'){
            rating[ratingIndex] = line[index];
            index++;
            ratingIndex++;
        }
        //copy title to prevTitle for next iteration comparison
        strcpy(prevTitle, title);
        rating[ratingIndex] = '\0';
        //print title, time, rating as per required format
        printf("\n%-44s | %6s | %s", title, rating, time);
    }
    return 0;
}