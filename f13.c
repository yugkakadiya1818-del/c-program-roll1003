//  Check whether a number is a prime palindrome : //


#include <stdio.h>

int main() {
    int num, rev = 0, temp, digit, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (rev != num) {
        printf("%d is not a prime palindrome.\n", num);
        return 0;
    }

    if (num <= 1) prime = 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("%d is a prime palindrome.\n", num);
    else
        printf("%d is not a prime palindrome.\n", num);

    return 0;
}

