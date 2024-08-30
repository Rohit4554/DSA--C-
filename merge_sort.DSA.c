

#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int low, int mid, int high) 
{
    int B[20], i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) 
    {
        if (A[i] <= A[j])
            B[k] = A[i++];
        else
            B[k] = A[j++];
        k++;
    }

    while (i <= mid)
        B[k++] = A[i++];
    while (j <= high)
        B[k++] = A[j++];

    int p = low;
    k = 0;
    while (p <= high)
        A[p++] = B[k++];
}

void mergesort(int A[], int low, int high)
 {
    int mid;

    if (low < high) 
    {
        mid = (low + high) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

void random(int A[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
        A[i] = rand() % 100;
}

int main() 
{
    int i, n, A[20];

    printf("How many numbers:");
    scanf("%d", &n);

    random(A, n);

    printf("\nArray is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    printf("\n");

    mergesort(A, 0, n - 1);

    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    return 0;
}

