//  Print the first N odd numbers : //


#include <stdio.h>

int main() {
    int N, i, count = 0, num = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    while (count < N) {
        printf("%d ", num);
        num += 2;  // Next odd number
        count++;
    }

    printf("\n");
    return 0;
}

