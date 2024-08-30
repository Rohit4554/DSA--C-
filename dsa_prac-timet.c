/*#include<stdio.h>
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
    printf("\nEnter the %d elements in array:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int a[10],n,i,pos,key;
    printf("\nHow many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key you want to be search:");
    scanf("%d",&key);
    pos=lin_sear(a,n,key);
    if(pos == -1)
        printf("\n%d key is not found in array:");
    else
        printf("\n%d is found in array at position %d",key,pos);
}

#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int n,int key)
{
    int i,begin=0,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid] == key)
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
    printf("\nEnter the %d sorted elements in array:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int a[10],n,key,pos;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key you want to be search:");
    scanf("%d",&key);
    pos=binary_search(a,n,key);
    if(pos == -1)
    {
        printf("\n%d key is not found in array:",key);
    }
    else
    {
        printf("\n%d key is found in array at position %d",key,pos);
   }
}
*/
#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n)
{
    int i,temp,pass;
    for(pass=1;pass<n;pass++)
        for(i=0;i<n-pass-1;pass++)
           if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
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
    int a[10],i,n,pass,temp;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("\nSorted array:");
    accept(a,n);
    bubble_sort(a,n);
    printf("\nAfter sort:");
    display(a,n);
}
































