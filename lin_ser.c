//bubble sort

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int A[],int n)
{
    int i,temp,pass;
    for(pass=1;pass<n;pass++)
    for(i=0;i<n-pass-1;i++)
    {
    if(A[i]>A[i+1])
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    }
}
void accept(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
}
void dispaly(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
}
int main()
{
    int A[10],n,temp,pass;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("\nEnter the unsorted elements:");
    accept(A,n);
    printf("\nThe sorted elements are:");
    bubble_sort(A,n);
    dispaly(A,n);
}