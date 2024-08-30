#include<stdio.h>
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
void insertion_sort(int A[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=A[i];
        for(j=i-1;j>=0;j--)
            if(key<A[j])
            A[j+1]=A[j];
        else
            break;
        A[j+1]=key;
    }
}
int main()
{
    int A[20],i,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(A,n);
    insertion_sort(A,n);
    printf("\nSorted elements:");
    display(A,n);
}

// Merge sort
#include<stdio.h>

void merge(inr a[],int low,int mid,int high)
{
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=0;

    while((i<=mid)&&(j<=high))
    {
        if(a[i]<=a[j])
           b[k++]=a[i++];
        else 
           b[k++]=a[j++];
    }
    while(i<=mid)
    {
        b[k++]=a[i++];
    }
    while(j<=high)
    {
        b[k++]=a[j++];
    }
    for(i=low,k=0;i<=high;i++,k++)
      a[i]=b[k];
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
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
    int a[10],i,n;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the %d unsorted elements:",n);
    mergesort(a,0,n-1);
    printf("\nThe sorted array is:");
    display(a,n);

}

// quick  sort

#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int up,dn,pivot,temp;
    up=ub;;
    dn=lb+1;
    pivot=a[lb];
    do
    {
        while((a[dn]<pivot)&&(dn<=ub))
        {
          dn++;
        }
        while((a[up]>pivot)&&(up<lb))
        {
            up--;
        }
        if(dn<up)
        {
            temp=a[dn];
            a[dn]=a[up];
            a[up]=temp;
        }
    }
    while(dn<up);
    {
        a[lb]=a[up];
        a[up]=pivot;
        return up;
    }
    
}
void quick_sort(int a[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=partition(a,lb,ub);
        quick_sort(a,lb,j-1);
        quick_sort(a,j+1,ub);
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
    int a[10],i,n;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the %d unsorted elements:",n);
    quick_sort(a,0,n-1);
    printf("\nThe sorted array is:");
    display(a,n);

}
