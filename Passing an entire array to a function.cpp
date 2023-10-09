/*When you pass an entire array to a function, you are passing the base
address (memory address) of the array. In C, arrays are passed by reference
meaning that any changes made to the elements of the array inside the function
will reflect in the original array outside the function.*/
#include <stdio.h>
void modifyArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2; // Modify each element of the array
    }
}
int main() {
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    modifyArray(array, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // Output: 2 4 6 8
    }

    return 0;
}
