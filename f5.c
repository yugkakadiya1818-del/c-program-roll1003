//Compute the product of elements in a 1D array //

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    long long product = 1;  // Use long long for larger product

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i];
    }

    printf("Product of array elements = %lld\n", product);

    return 0;
}

