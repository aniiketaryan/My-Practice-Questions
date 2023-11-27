//WAP using pointer, dynamic memory allocation to search an element in an array of n numbers.

#include <stdio.h>
#include <stdlib.h>

int searchElement(int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int index = searchElement(arr, n, target);

    if (index != -1) {
    	printf("Element '%d' found at %d position.\n", target, (index+1));
    } else {
        printf("Element '%d' not found in the array.\n", target);
    }

    free(arr);

    return 0;
}
