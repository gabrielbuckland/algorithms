#include <stdio.h>

int main() {
    char A[] = {'S','O','R','T','I','N','G'};
    int length = sizeof(A) / sizeof(A[0]);
    
    for (int i = 0, n = length; i<(n-1); i++) {
        int k = i;
        for (int j = i+1, n = length; j<n; j++) {
            if (A[j] < A[k]) {
                k = j;
            }
        }
        char temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
    printf("Sorted Array: %s\n", A);
}