#include<stdio.h>

int binary_search(int a[],int key ,int n)
{
    int begin=0,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]==key)
          return mid;
        if (a[mid]<key)
          end=mid-1;
        else
           begin=mid+1;
    }
    return -1;
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d element:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
int main()
{
    int a[20],i,n,key,end,mid,begin,pos;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key you want to search:");
    scanf("%d",&key);
    pos=binary_search(a,n,key);
    if(pos==-1)
    printf("\nkey is not found in array:");
    else
    printf("\n%d is found in array at position: %d",key,pos);

}
