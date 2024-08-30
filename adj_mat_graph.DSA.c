#include<stdio.h>
typedef struct node
{
int vertex;
struct node *next;
}NODE;
NODE *list[10]; //array of pointers
Void createmat (int m[10] [10], int n)
{
int i,j;
char ans;
for (i=0;i<n;i++)
for (j=0; j<n; j++)
{
 m[i][i]=0;
 if(i!=j)
 {
     printf("\nIs there an edge between %d and %d (1/0)", i+1,j+1);
            scanf("%d",&m[i][j]);
 }
}
}
void dispmat (int m[10][10], int n)
{
int i, j;

printf("\nThe adjacency matrix is :\n");

for(i=0;i<n;i++)

1

for(j=0;j<n; j++)

printf("15d",m[i][j]);

printf("\n");

/*void createlist (int m[10][10], int n)

int i, j;

struct node temp, newnode;

for (i=0; i<n;i++)

list[i]-NULL;

for(j=0;j<n; j++)

if (m[i][j]==1)

newnode (NODE *)malloc(sizeof (NODE)); newnode->vertex=i+1; -list[i]-temp=newnode;

newnode->next=NULL; if (list[i]==NULL)

else

temp->next=newnode; temp-newnode;
*/
