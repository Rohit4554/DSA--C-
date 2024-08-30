/*#include<stdio.h>
#include<stdlib.h>

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

int partition(int a[],int lb,int ub)
{
    int up,dn,temp,pivot;
    up=ub;
    dn=lb+1;
    pivot=a[lb];
    do
     {
        while((a[dn]<pivot)&&(dn<=ub))
        dn++;
        while((a[up]>pivot)&&(up>lb))
        up--;

        if(dn<up)
        {
            temp=a[dn];
            a[dn]=a[up];
            a[up]=temp;
        }

      } while(dn<up);
      a[lb]=a[up];
      a[up]=pivot;
      return up;
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
int main()
{
    int a[10],n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("\nEnter the unsorted %d elements:",n);
    accept(a,n);
    quick_sort(a,0,n-1);
    printf("\nThe sorted array is:");
    display(a,n);
}*/

// Linear Search
#include<stdio.h>
#include<stdlib.h>

int lin_search(int a[],int n)
{
    int i,key;
    for(i=0;i<n;i++)
    {
        if(a[i]=key)
        return i;
    }
    return -1;
}
int main()
{
    int i,pos,n,key;
    printf("How many elements in array:");
    scanf("%d",&n);
    printf("Enter the %d elements in array:",n);
    printf("\nEnter the key you want to search:");
    scanf("%d",&key);
     lin_search(a,n);
     
   


}







