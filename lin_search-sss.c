// Linear Search

#include<stdio.h>
#include<stdlib.h>
int lin_search(int a[],int n, int key)
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
    printf("Enter the %d elements in array:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int main()
{
    int a[20], n,key,pos;
    printf("How many numbers in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("Enter the key:");
    scanf("%d",&key);
    pos=lin_search(a,n,key);
    if(pos==-1)
    printf("%d key is not found in array:\n");
    else 
    printf("%d key is found in array at position : %d ",key,pos);
}