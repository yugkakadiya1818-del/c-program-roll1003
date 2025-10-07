//Print the first N even numbers : //

#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of even numbers to print: ");
    scanf("%d", &N);

    printf("First %d even numbers:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", 2 * i);
    }
    printf("\n");

    return 0;
}

