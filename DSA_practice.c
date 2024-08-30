// Linear search

#include<stdio.h>
#include<stdlib.h>

int linear_search(int a[],int n,int key)
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
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{

    int a[20],i,key,pos,n;
    printf("How many elements:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key you want to be search:");
    scanf("%d",&key);
    pos=linear_search(a,n,key);
    if(pos==-1)
        printf("\n%d is not fount in array:",key);
    else
        printf("\n%d is found in array at position :%d",key,pos);
}


// Binary serach.

#include<stdio.h>

int binary_search(int a[],int n,int key)
{
    int begin=0,mid,end=n-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]==key)
            return mid;
        if(key<a[mid])
            end=mid-1;
        else
            begin=mid+1;
    }
    return -1;
}
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the elements in sorted:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int a[20],n,key,pos,i;
    printf("How many elements in array:");
    scanf("%d",&n);
    accept(a,n);
    printf("\nEnter the key you want to be search:");
    scanf("%d",&key);
    pos=binary_search(a,n,key);
    if(pos==-1)
        printf("\n%d is not found in an array:");
    else
        printf("\n%d is found in array at position :%d",key,pos);
}

//Bubble sort.

#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int temp,pass,i;
    for(pass=1;pass<n;pass++)
    for(i=0;i<=n-pass-1;i++)
    {
        if(a[i]>a[i+1])
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
void main()
{
    int a[20],i,n;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("Enter the %d unsorted elements:",n);
    accept(a,n);
    bubble_sort(a,n);
    printf("\nThe sorted array is:");
    display(a,n);
}


//Insertion sort

#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
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
    int i,j,key,n,a[20];
    printf("HOw many elements:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted array:",n);
    accept(a,n);
    insertion_sort(a,n);
    printf("\nThe sorted array: ");;
    display(a,n);
}

//Merge sort.

#include<stdio.h>
void merge(int A[],int low,int mid,int high)
{
    int i,j,k,B[20];
    i=low;
    j=mid+1;
    k=0;

    while((i<=mid)&&(j<=high))
    {
    if(A[i]<=A[j])
        B[k++]=A[i++];
    else
        B[k++]=A[j++];
    }
    while(i<=mid)
        {
            B[k++]=A[i++];
        }
    while(j<=high)
    {
        B[k++]=A[j++];
    }
    for(i=low,k=0;i<=high;i++,k++)
        A[i]=B[k];

}
void mergesort(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(high+low)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
void accept(int A[],int n)
{

    int i;
    for (i=0;i<n;i++)
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
    int A[20],i,n;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted array:",n);
    accept(A,n);
    mergesort(A,0,n-1);
    printf("\nThe sorted array is:");
    display(A,n);
}

//Quick sort.

#include<stdio.h>
int partition(int a[],int lb,int ub)
{
    int up,dn,pivot,temp;
    up=ub;
    dn=lb+1;
    pivot=a[lb];
    do
    {
    while((a[dn]<pivot)&&(dn<=ub))
    {
        dn++;
    }
    while((a[up]>pivot)&&(up>lb))
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
void quicksort(int a[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=partition(a,lb,ub);
        quicksort(a,lb,j-1);
        quicksort(a,j+1,ub);
    }
}
void accept(int A[],int n)
{

    int i;
    for (i=0;i<n;i++)
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
    int a[20],n;
    printf("How many  numbers:");
    scanf("%d",&n);
    printf("\nEnter the %d unsorted elements:",n);
    accept(a,n);
    quicksort(a,0,n-1);
    printf("\nThe sorted array is:");
    display(a,n);
}














