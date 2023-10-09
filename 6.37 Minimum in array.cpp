#include <stdio.h>
// Recursive function to find the minimum element in the array
int recursiveMinimum(int array[], int size) {
    // Base case: Stop processing when the array size is one
    if (size == 1) {
        return array[0];
    } else {
        int minRest = recursiveMinimum(array + 1, size - 1); // Find the minimum of the rest of the array
        return (array[0] < minRest) ? array[0] : minRest; // Return the smaller of the two
    }
}

int main() {
    int array[] = {3, 7, 1, 9, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int minElement = recursiveMinimum(array, size);
    printf("The smallest element in the array is: %d\n", minElement);
    return 0;
}

