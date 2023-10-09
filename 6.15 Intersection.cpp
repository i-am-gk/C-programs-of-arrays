#include <stdio.h>
#define SET_SIZE 10
int main() {
    int set1[SET_SIZE];
    int set2[SET_SIZE];
    int common[SET_SIZE];
    int commonCount = 0;
    printf("Enter the first set of %d numbers:\n", SET_SIZE);
    for (int i = 0; i < SET_SIZE; i++) {
        scanf("%d", &set1[i]);
    }

    printf("Enter the second set of %d numbers:\n", SET_SIZE);
    for (int i = 0; i < SET_SIZE; i++) {
        scanf("%d", &set2[i]);
    }

    // Find common elements
    for (int i = 0; i < SET_SIZE; i++) {
        int current = set1[i];
        int isCommon = 0;

        // Check if the element is common
        for (int j = 0; j < SET_SIZE; j++) {
            if (current == set2[j]) {
                isCommon = 1;
                break;
            }
        }

        // Store common element
        if (isCommon) {
            common[commonCount] = current;
            commonCount++;
        }
    }

    printf("Unique elements common to both sets:\n");
    for (int i = 0; i < commonCount; i++) {
        printf("%d ", common[i]);
    }
    printf("\n");

    return 0;
}

