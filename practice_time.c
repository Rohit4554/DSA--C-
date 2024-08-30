// Binary search
#include<stdio.h>
#include<stdlib.h>
int compcount=0;
int binary_search(int A[],int key,int n)
{
    int begin=0,mid,end=n-1;
    while(begin<=end)
    {
        compcount++;
        mid=(begin+end)/2;
        if(A[mid]== key)
            return mid;
        if(key<A[mid])
            end=mid-1;
        else
            begin=mid+1;
    }
    return -1;

}
void accept(int A[],int n)
{

    int i;
    printf("\nEnter the %d elements in array:",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
int main()
{

    int A[20],key,pos,n;
    printf("\n How many elements in array:");
    scanf("%d",&n);
    accept(A,n);
    printf("\nEnter the key you want to be search:");
    scanf("%d",&key);
    pos=binary_search(A,key,n);
    if(pos == -1)
    printf("\n%d is not found in array");
    else
        printf("\n%d is found in array at position:%d",key,pos);


}
