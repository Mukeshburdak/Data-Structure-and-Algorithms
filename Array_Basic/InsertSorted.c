#include <stdio.h>

void main() {
    int arr[100], n, i, j, element;

    // Input array size
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    // Input array elements (must be sorted)
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the correct position
    for(i = 0; i < n; i++) {
        if(arr[i] > element)
            break;
    }

    // Shift elements to make space
    for(j = n; j > i; j--) {
        arr[j] = arr[j-1];
    }

    // Insert the element
    arr[i] = element;
    n++;  // Increase array size

    // Print the updated array
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
