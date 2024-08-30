/*// Linear search
#include<stdio.h>
#include<stdlib.h>

int lin_sear(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        return i;
    }
    return -1;
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void main()
{
    int a[10],n,key,pos;
    printf("How many elements:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key:");
    scanf("%d",&key);
    pos=lin_sear(a,n,key);
    if(pos==-1)
    printf("\n%d Key is not found in array:",key);
    else
    printf("\n%d Key is found in array at position :%d",key,pos);
}


// Binary search

#include<stdio.h>
#include<stdlib.h>


int binary_sear(int a[],int n,int key)
{
    int i,begin=0,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]==key)
        return mid;
        if(a[mid]>key)
           end=mid-1;
        else
           begin=mid+1;
    }
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d sorted elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void main()
{
    int a[10],n,key,pos;
    printf("How many numbers:");
    scanf("%d",&n);
    accept(a,n);
    printf("Enter the key:");
    scanf("%d",&key);
    pos=binary_sear(a,n,key);
    if(pos==-1)
     printf("\n%d key is not found in array:",key);
    else
     printf("\n%d key is found in array at position :%d",key,pos);
}


#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j--)
        if(key<a[j])
           a[j+1]=a[j];
        else
        break;
        a[j+1]=key;
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
    int i,j,key,n,a[10];
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(a,n);
    insertion_sort(a,n);
    printf("\nThe sorted array is:");
    display(a,n);
}
*/
// bubble sort
#include<stdio.h>
void  bubble_sort(int a[],int n)
{
    int i,pass,temp;
    for(pass=1;pass<n;pass++)
     for(i=0;i<n-pass-1;pass++)
     {
        if(a[i+1]<a[i])
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
    int a[10],n,pass,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(a,n);
    bubble_sort(a,n);
    printf("\nThe sorted array is :");
    display(a,n);
}
