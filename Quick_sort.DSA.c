#include<stdio.h>
#include<stdlib.h>

int partition(int A[], int lb, int ub)
 {
    int up, dn, temp, pivot;
    up = ub;
    dn = lb - 1;
    pivot = A[lb];

    do
    {
        while ((A[dn] < pivot) && (dn < ub))
            dn++;
        while ((A[up] > pivot) && (up > lb))
            up--;

        if (dn < up) 
        {
            temp = A[dn];
            A[dn] = A[up];
            A[up] = temp;
        }
    } while (dn < up);

    A[lb] = A[up];
    A[up] = pivot;
    return up;
}


void quick_sort(int A[],int lb,int ub)
{
    int j,i;
    if(lb<ub)
    {
        j=partition(A,lb,ub);
        quick_sort(A,lb,j-1);
        quick_sort(A,j+1,ub);
    }
}
int main()
{
    int A[20], n,i;
    // srand(time(NULL));
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        A[i]=rand()%50;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n\nSorted Elements:\n");
    quick_sort(A,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
