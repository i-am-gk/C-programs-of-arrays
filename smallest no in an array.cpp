#include <stdio.h>
#define ARRAY_SIZE 6
int main() {
    int array[ARRAY_SIZE] = {5, 9, 3, 11, 6, 2};
    int smallest = array[0];  // Assume the first element is smallest
    // Iterate through the array
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    printf("The smallest number in the array is: %d\n",smallest);
    return 0;
}
