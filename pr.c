#include<stdio.h>
#include<stdlib.h>
int insertion_sorts(int a[],int n)
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

    }
    a[j+1]=key;
}
void accepts(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d\t",&a[i]);
}
void displays(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int a[10],i,j,n;
    printf("How many elements:");
    scanf("%d",&n);
    printf("\nEnter the %d elements:",n);
    accepts(a,n);
    insertion_sorts(a,n);
    printf("\nThe sorted array is:");
    displays(a,n);
}


