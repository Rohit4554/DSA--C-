#include<stdio.h>

int partition(int A[],int lb,int ub)
{
    int up,dn,temp,pivot;
    up=ub;
    dn=lb+1;
    pivot=A[lb];
    do
    {
        while((A[dn]<pivot) && (dn<=ub))
            {
            dn++;
            }
        while((A[up]>pivot)&&(up>lb))
        {
            up--;
        }
      if(dn < up)
      {
          temp=A[dn];
          A[dn]=A[up];
          A[up]=temp;
      }

    }while(dn<up);

    A[lb]=A[up];
    A[up]=pivot;
    return up;
}
void quicksort(int A[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=partition(A,lb,ub);
        quicksort(A,lb,j-1);
        quicksort(A,j+1,ub);
    }
}
void accept(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}
void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
int main()
{
    int A[20],n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the unsorted elements:");
    accept(A,n);
    quicksort(A,0,n-1);
    printf("\nThe sorted elements are:");
    display(A,n);
}
