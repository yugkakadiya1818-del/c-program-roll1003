// Find the smallest of three numbers : //


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int smallest = a;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("The smallest number is: %d\n", smallest);

    return 0;
}

