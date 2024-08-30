/*#include<stdio.h>
#include<stdlib.h>

int binary_search(int A[],int n,int key)
{

    int begin=0,end=n-1,mid;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(A[mid]==key)
            return mid;
        if(A[mid]<key)
            end=mid-1;
        else
            begin=mid+1;

    }
    return -1;


}
void accept(int A[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
int main()
{
    int A[20],n,key,mid,i,pos;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(A,n);

    printf("Enter the key:");
    scanf("%d",&key);
    pos=binary_search(A,n,key);
    if(pos==-1)
        printf("\n%d is not found in array:");
    else
        printf("\n%d is found in array at position %d",key,pos);

}*/



#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int n ,int key)
{
    int i,begin=0,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]==key)
          return mid;
        if(a[key]<mid)
           end=mid-1;
        else
           begin=mid+1;
    }
    return -1;
}
 void accept(int a[],int n)
 {
    int i;
    printf("\nenter the %d sorted elements in array:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 }
 int main()
 {
 int i,n,key,begin,end,mid,pos,a[10];
 printf("How many element in array:");
 scanf("%d",&n);
 accept(a,n);
 printf("\nEnter the key you want to search:");
 scanf("%d",&key);
 pos=binary_search(a,n,key);
 if(pos==-1)
 printf("%d is not found in array:");
 else
 printf("\n%d key is found in array at position :%d ",key,pos);
 }
