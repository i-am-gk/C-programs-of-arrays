#include <stdio.h>
#define ARRAY_SIZE 6
int main() {
    int array[ARRAY_SIZE] = {5, 9, 3, 11, 6, 2};
    int largest = array[0];  // Assume the first element is the maximum
    // Iterate through the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        // If the current element is greater than the current max, update max
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    printf("The largest number in the array is: %d\n",largest);
    return 0;
}
