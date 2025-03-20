#include <stdio.h>
#include<stdlib.h>

int main() {
    int array[5], i;

    // Getting array elements from user
    printf("Enter 5 integers: \n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Traversing and displaying the array
    printf("Array elements are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
