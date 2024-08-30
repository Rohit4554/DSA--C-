/*#include<stdio.h>
void bubble_sort(int A[],int n)
{
    int i,temp,pass;
    for(pass=1;pass<n;pass++)
        for(i=0;i<=n-pass-1;i++)
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
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
void main()
{
    int n,i,A[20];
    printf("How many numbers:");
    scanf("%d",&n);
    //random(A,n);
    printf("\n Enter the unsorted elements are :");
    accept(A,n);
    bubble_sort(A,n);
    printf("\nThe sorted elements are:");
    display(A,n);

}*/

#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n)
{
  int i,temp,pass;
  for(pass=1;pass<n;pass++)
     for(i=0;i<n-pass-1;pass++)
     {
        if(a[i]>a[i+1])
          {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          }
     }
}
void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

int main()
{
    int i,n,temp,pass,a[10];
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(a,n);

    printf("\nThe sorted elements array is: ");
    bubble_sort(a,n);
    display(a,n);
}
