#include <stdio.h>

int main() {
    char A[] = {'S','O','R','T','I','N','G'};
    int length = sizeof(A) / sizeof(A[0]);

    printf("The initial string is: %s\n", A);

    for (int i = length, n = 1; i>n; i--) {
        for (int j = 0, n = i; j<n; j++) {
            if (A[j] > A[j+1]) {
                char temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        printf("The string is now: %s\n", A);
    }
    printf("The sorted string is: %s\n", A);
}