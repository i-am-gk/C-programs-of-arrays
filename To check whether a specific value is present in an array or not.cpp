#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int array[ARRAY_SIZE];
    // Input values from the user
    printf("Enter values for the array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", &array[i]);
    }
    // Prompt user to enter a value for checking
    int value;
    printf("Enter a value to check: ");
    scanf("%d", &value);
    // Check if the value exists in the array
    int found = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] == value) {
            found = 1;
            break;
        }
    }
    // Display the result
    if (found) {
        printf("The value %d is present in the array.\n", value);
    } else {
        printf("The value %d is not present in the array.\n", value);
    }

    return 0;
}
