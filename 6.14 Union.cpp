#include <stdio.h>
#define SET_SIZE 10
#define TOTAL_SIZE (2 * SET_SIZE)
int main() {
    int numbers[TOTAL_SIZE];
    int unique[TOTAL_SIZE];  // Array to store unique elements
    int uniqueCount = 0;     // Counter for unique elements

    printf("Enter the first set of %d numbers:\n", SET_SIZE);
    for (int i = 0; i < SET_SIZE; i++) {
        scanf("%d", &numbers[i]);
        unique[uniqueCount++] = numbers[i];
    }

    printf("Enter the second set of %d numbers:\n", SET_SIZE);
    for (int i = 0; i < SET_SIZE; i++) {
        scanf("%d", &numbers[i]);
        int duplicate = 0;

        // Check for duplicates
        for (int j = 0; j < uniqueCount; j++) {
            if (numbers[i] == unique[j]) {
                duplicate = 1;
                break;
            }
        }

        // Append unique element to unique array
        if (!duplicate) {
            unique[uniqueCount++] = numbers[i];
        }
    }

    printf("Unique elements from both sets:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}

