#include<stdio.h>
#include<stdlib.h>

struct node
{
    int vertex;
    struct node* next;
};
struct node* createnode (int );
struct Graph

{
    int numvertices;
    struct node** adjlist;
    int visited;
};
struct node* createnode(int v)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->vertex=v;
    newnode->next=NULL;
    return newnode;
}
struct Graph* creategraph(int vertices)
{
    struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->numvertices=vertices;
    graph->adjlist=(struct node**)malloc(sizeof(struct node*));
    graph->visited=(int*) malloc(vertices* sizeof(int));

    int i;
    for(i=0;i<vertices;i++)
    {
        graph->adjlist[i]=NULL;
        graph->visited[i]=0;
    }
    return graph;
}
