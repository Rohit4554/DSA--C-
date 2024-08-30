// bubble sort 
#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void dispaly(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
void bubble_sort(int a[],int n)
{
    int i,temp,pass;
    for(pass=1;pass<n;pass++)
    for(i=0;i<n-pass-1;i++)
    if(a[i]>a[i+1])
    {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
    }
}
void main()
{
    int a[10],i,n,pass,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the %d element:",n);
    accept(a,n);
    bubble_sort(a,n);
    printf("\nThe sorted array is:");
    dispaly(a,n);
}