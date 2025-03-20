#include <stdio.h>
#include <stdlib.h>
#define SUBS 3
#define TESTS 4

int main()
{
    char subjects[3][50]; // outer loop
    char test[4][50];     // inner loop
    float averagemarks[3];
    int marks[3][4];
    int totalmarks;

    int i;
    for (i = 0; i < SUBS; i++)
    {
        // input name of the subject
        printf("Input the subject name\n");
        scanf("%s", subjects[i]);
        getchar();
        printf("%s \n", subjects[i]);

        totalmarks = 0;

        int j;
        for (j = 0; j < TESTS; j++)
        {
            // all assignments that were given under the subject and the marks obtained in a specified subject
            printf("Input the name of the TEST\n");
            scanf("%s", test[j]);
            getchar();

            printf("Input marks for the %s assignment you`ve given\n", test[j]);
            scanf("%d", &marks[i][j]);
            getchar();

            // calculates the marks of every assignment and stores it
            totalmarks += marks[i][j];
        }
        // calculates the average marks for the running subject
        averagemarks[i] = totalmarks / 4.0;
        printf("Total marks obtained for %s are %d\n", subjects[i], totalmarks);
        printf("The average mark is %.2f\n", averagemarks[i]);
    }

    // the loop calculates overall average for all the student`s subjects
    float subAverage = 0;
    for (int i = 0; i < SUBS; i++)
    {
        printf("%s average mark is: %.2f\n", subjects[i], averagemarks[i]);
        subAverage += averagemarks[i];
    }
    float overallAverage = subAverage / SUBS; // divides the sum of all the average subjects and stores in overallaverage variable
    printf("\nOverall average mark across all subjects: %.2f\n", overallAverage);

    return 0;
}