#include<stdio.h>
int compcount =0;
int linear_search(int A[],int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        compcount++;
        if(A[i]==key)
        return i;
    }
    return -1;
}
void accept(int A[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",A[i]);
}
int main()
{
    int i,key,n,pos;
    printf("\nHow many elements in Array:");
    scanf("%d",&n);
    accept(A,n);
    printf("\nEnter the you want to be search:");
    scanf("%d",key)
    pos=linear_search(A,n,key);
    if(pos=-1)
    printf("\n%d is not fount in an array:",key);
    else
    printf("%d is fount in an array at position %d",key,pos);
    printf("\n Total number of compcount is %d",compcount)


}