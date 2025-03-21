#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50

int main() {
    int N, X, i;

    // Get number of animals for both domestic and wild
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    // Allocates memory for the merged array with all the animals
    char allAnimals[N + X][MAX_NAME_LENGTH];

    // Input domestic animals directly into the merged array
    // n and m are used to iterate through the array of the animals
    for (i = 0; i < N; i++) {
        printf("Enter domestic animal %d: ", i + 1);
        scanf("%s", allAnimals[i]);
    }

    // Input wild animals directly into merged array
    int j;
    for (j = 0; j < X; j++) {
        printf("Enter wild animal %d: ", j + 1);
        scanf("%s", allAnimals[N + j]);
        // the N is added to start from where the last domestic animal stopped
        //Being thst they are indexed
    }

    // Print all animals merged into one array
    printf("\nAll animals:\n");
    for (i = 0; i < N + X; i++) {
        printf("%s ", allAnimals[i]);
    }
    printf("\n");

    return 0;
}
