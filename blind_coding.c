/*#include<stdio.h>
#include<stdlib.h>
void accept(int a[],int n)
{
    int i;
    printf("\nEnter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void display(int a[],int n)
{
    int i;
    printf("\nThe even numbers from array:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
int evennum(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
          return i;
    }

}
int main()
{
    int i,n,a[10];
     printf("How many numbers:");
    scanf("%d",&n);
    accept(a,n);
    evennum(a,n);
    printf("\nThe even numbers are:");
    display(a,n);

}*/
#include<stdio.h>
#include<stdlib.h>

void accept(int a[], int n)
{
    int i;
    printf("\nEnter the %d elements:", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display(int a[], int n)
{
    int i;
    printf("\nThe even numbers from array:");
    for(i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
        }
    }
    printf("\n");
}

int evennum(int a[], int n) {
    int count = 0; // Initialize count to zero
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            count++;
        }
    }
    return count; // Return the count of even numbers
}

int main() {
    int n, a[10];
    printf("How many numbers:");
    scanf("%d", &n);
    accept(a, n);
    int evenCount = evennum(a, n);
     printf("\nThe count of even numbers is: %d\n", evenCount);
    printf("The even numbers are:\n");
    display(a, n);

    return 0;
}

