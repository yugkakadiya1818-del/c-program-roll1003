// Compute the LCM of two numbers : //


#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = gcd(num1, num2);
    lcm = (num1 / hcf) * num2;  // LCM formula using GCD

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

