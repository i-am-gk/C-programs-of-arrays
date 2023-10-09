/*When you pass a single element of the array to a function,
you are passing the value of that element. The function works
with just that individual value, and any changes made to the value
inside the function do not affect the original element outside the function.*/
#include <stdio.h>
void modifyElement(int x) {
    x *= 2; // Modify the value of the element
}
int main() {
    int array[] = {1, 2, 3, 4};

    modifyElement(array[1]); // Pass the first element of the array

    printf("outside function no change and value is %d\n", array[1]); // Output: 1 (unchanged)

    return 0;
}

