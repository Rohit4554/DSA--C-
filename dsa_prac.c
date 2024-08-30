// Binary search

/*#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int n,int key)
{
    int begin,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]==key)
            return mid;
        if(a[mid]<key)
            begin=mid+1;
        else
            end=mid-1;

    }
    return -1;
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d elements in sorted order:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int a[12],n,key,pos;
    printf("How many elements:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key:");
    scanf("%d",&key);
    pos=binary_search(a,n,key);
    if(pos==-1)
    printf("\n%d key is not found in array: ");
    else
        printf("\n%d key is found in array at position %d",key ,pos);
}
*/

// bubble sort
#include<stdio.h>
#include<stdio.h>

void bubble_sort(int a[],int n)
{
    int temp,pass,i;
    for(pass=1;pass<n-1;pass++)
        for(i=0;i<n-pass-1;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i]=temp;
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

    int i,a[10],n;
    printf("How many elements:");
    scanf("%d",&n);
    printf("\nEnter the unsorted array:");
    accept(a,n);
    bubble_sort(a,n);
    printf("\nThe sorted array is:");
    display(a,n);
}
