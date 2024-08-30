#include<stdio.h>
void accept(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
void merge(int A[],int low,int mid,int high)
{
    int i,k,j,B[20];
    i=low;
    j=mid+1;
    k=0;
    while((i<=mid)&&(j<=high))
    {
        if(A[i]<=A[j])
            B[k++] = A[i++];
        else
        B[k++] = A[j++];
    }
    while (i<= mid)
    {
        B[k++] = A[i++];
    }
    while (j <= high)
    {
        B[k++] = A[j++];
    }
    for(i=low,k=0;i<=high;i++,k++)
        A[i]=B[k];
}
void mergesort(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(high+low)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
int main()
{
    int A[20],i,j,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(A,n);
    mergesort(A,0,n-1);
    printf("\nThe sorted Array is :");
    display(A,n);
}
