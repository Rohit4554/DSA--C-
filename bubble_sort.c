#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int A[],int n)
{
    int i,temp,pass;
    for(pass=1;pass<n-1;pass++)
    for(i=0;i<n-pass-1;i++)
    if(A[i]>A[i+1])
    {
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
}
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
void main()
{
    int A[20],temp,pass,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d elements:",n);
     accept(A,n);
     bubble_sort(A,n);
     printf("\n The sorted elements are:");
     display(A,n);

}