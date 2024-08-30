
#include<stdio.h>

typedef struct node {
    int vertex;
    struct node* next;
} NODE;

NODE* list[10]; // array of pointers

void createmat(int m[10][10], int n)
{
    int i, j;
    for(i=0;i<n;i++)
        for (j=0;j<n;j++)
            {
            m[i][j] = 0;
            if (i != j) {
                printf("\nIs there an edge between %d and %d (1/0): ", i + 1, j + 1);
                scanf("%d", &m[i][j]);
            }
        }
}

void dispmat(int m[10][10], int n)
{
    int i, j;
    printf("\nThe adjacency matrix is:\n");
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

int main() {
    int m[10][10], sumin, sumout,n,v,i,j;
    printf("How many vertices: ");
    scanf("%d",&n);

    createmat(m,n);
    dispmat(m,n);

    printf("\n\nVertex\tIndegree\tOutdegree\tTotal degree\n");
    for (v=0;v<n;v++)
        {
        sumin = sumout = 0;
        for(i=0;i<n;i++)
         {
            sumin += m[i][v]; // sum of column v
            sumout += m[v][i]; // sum of row v
        }
        printf("%d\t%d\t%d\t%d\n", v + 1, sumin, sumout, sumin + sumout);
    }

    return 0;
}
