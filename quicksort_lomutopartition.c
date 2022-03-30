#include <stdio.h>

int LamutoPartition(int A[], int left, int right) {
    int x = A[right];
    int i = left-1;
    for (int j = left; j<right; j++) {
        if (A[j] <= x) {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp1 = A[i+1];
    A[i+1] = A[right];
    A[right] = temp1;
    return i+1;
}

void QuickSort(int A[], int left, int right) {
    if (left<right) {
        int m = LamutoPartition(A,left,right);
        QuickSort(A,left,m-1);
        QuickSort(A,m+1,right);
    }
}

int main() {
    int A[] = {2,6,8,4,33,1,90,77,200};
    int left = 0;
    int right = 8;

    QuickSort(A,left,right);
    for (int i = 0; i<=right; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}