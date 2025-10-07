// Check whether a number is Armstrong : //


#include <stdio.h>

int main() {
    int num, temp, digit, count = 0, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to count
    while (temp) {
        digit = temp % 10;

        int power = 1;
        for (i = 0; i < count; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


