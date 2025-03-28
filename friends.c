#include <stdio.h>
#include <string.h>

int main()
{
    char friends[4][50]; 
    int i;               // counter variable
    int trash;           // variable to store index of friend to be trashed
    int j;

    printf("enter the names of four friends:\n"); 
    for (i = 0; i < 4; i++)
    {
        printf("enter name of friend %d:  ", i + 1);
        scanf("%s", friends[i]);
    }

    printf("\n Your friends are: \n"); // display the names of the four friends
    for (i = 0; i < 4; i++)
    {
        printf("friend %d: %s\n", i + 1, friends[i]);
    }

    printf("\nwhich friend is least important? (1-4):  \n"); 
    scanf("%d", &i);

    printf("%s is least important\n", friends[i - 1]); 

    printf("\nwhich friend should be trashed?(1-4): \n"); 
    scanf("%d", &trash);
    trash--; // decrement the trash variable by 1 to match the index of the array

    printf("%s is trashed\n", friends[trash]); 

    for (j = i; j < 4 - 1; j++)
    { 
        if (friends[i] == friends[trash])
        {

            strcpy(friends[j], friends[j + 1]); // copy the next friend to the current friend
        }
        else
        {
            printf("Invalid input");
        }
    }
    printf("\n Your friends are: \n");
    for (i = 0; i < 4 - 1; i++)
    {
        printf("friend %d: %s\n", i + 1, friends[i]);
    }

    return 0;
}