#include <stdio.h>

int HoarePartition(int A[], int l, int r) {
    int x = A[r];
    int i = l-1;
    int j = r+1;

    while (1) {
        do {
            j--;
        } while (A[j] > x);
        do {
            i++;
        } while (A[i] < x);
        if (i < j) {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } 
        else {
            return i;
        }
    }
}

void QuickSort(int A[], int l, int r) {
    if (l<r) {
        int m = HoarePartition(A,l,r);
        QuickSort(A,l,m-1);
        QuickSort(A,m,r);
    }
}

int main() {
    int A[] = {5,7,2,1,3,9};
    int n = 6;

    QuickSort(A,0,n);
    for (int i = 0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}