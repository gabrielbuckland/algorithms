#include <stdio.h>

int main() {
    char A[] = {'S','O','R','T','I','N','G'};
    int length = sizeof(A)/sizeof(A[0]);

    for (int i = 1, n = length; i<n; i++) {
        int j = i-1;
        char t = A[i];

        while (j >= 0 && t < A[j]) {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = t;
    }
    printf("The sorted array is: %s\n", A);
}