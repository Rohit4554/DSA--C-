#include<stdio.h>
int compcount=0;
int binary_search(int A[],int key, int n)
{
    int begin =0,end=n-1,mid;
    while(begin<=end)
    {
        compcount++;
        mid=(begin+end)/2;
        if(A[mid]==key)
            return mid;
        if(A[mid]<key)
            begin=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
void accept(int A[],int n)
{
    int i;
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
int main()
{
    int i,n,key,pos,A[20];
    printf("How many numbers:");
    scanf("%d",&n);
    accept(A,n);

    printf("Enter the key you want to search in Array:");
    scanf("%d",&key);

    pos=binary_search(A,key,n);
    if(pos == -1)
    {
        printf("%d key is not found in an Array:\n",key);
    }
    else
    {
        printf("%d is found in an array at position:%d\n",key,pos);
    }
    return 0;
}
