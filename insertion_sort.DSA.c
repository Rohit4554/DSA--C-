#include<stdio.h>
#include<stdlib.h>

int insertion_sort(int A[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int current=A[i];
        j=i-1;
        while(A[j]>current && j>=0)
        {
            A[j+1]=A[j];
            j--;
        }
          A[j+1]=current;
    }

}
int random(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        A[i]=rand()%50;
}
void main()
{
    int i,j,n;
    int A[50];
    printf("How many numbers:");
    scanf("%d",&n);
    random(A,n);
    printf("\nThe array is:     ");
    for(i=0;i<n;i++)
    printf("%d\t",A[i]);
    printf("\n\n");
    insertion_sort(A,n);
    printf("\nsorted Array is:  ");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
        printf("\n");
}
