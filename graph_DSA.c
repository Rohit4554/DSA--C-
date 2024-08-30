
#include <stdio.h>

#define MAX_VERTICES 20

// Function prototypes
void initializeGraph(int vertices, int graph[MAX_VERTICES][MAX_VERTICES]);
void addEdge(int start, int end, int graph[MAX_VERTICES][MAX_VERTICES]);
void printDegree(int vertices, int graph[MAX_VERTICES][MAX_VERTICES]);

int main() {
    int vertices, edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int graph[MAX_VERTICES][MAX_VERTICES];
    initializeGraph(vertices, graph);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; ++i) {
        int start, end;
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);
        addEdge(start, end, graph);
    }

    printf("\nGraph Adjacency Matrix:\n");
    for (int i = 0; i < vertices; ++i) 
    {
        for (int j = 0; j < vertices; ++j) 
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("\nVertex Degrees:\n");
    printDegree(vertices, graph);

    return 0;
}

void initializeGraph(int vertices, int graph[MAX_VERTICES][MAX_VERTICES]) 
{
    for (int i = 0; i < vertices; ++i)
     {
        for (int j = 0; j < vertices; ++j)
         {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int start, int end, int graph[MAX_VERTICES][MAX_VERTICES])
 {
    graph[start][end] = 1;
}

void printDegree(int vertices, int graph[MAX_VERTICES][MAX_VERTICES]) 
{
    for (int i = 0; i < vertices; ++i) 
    {
        int inDegree = 0, outDegree = 0;

        for (int j = 0; j < vertices; ++j)
         {
            if (graph[j][i] == 1)
             {
                inDegree++;
            }

            if (graph[i][j] == 1)
             {
                outDegree++;
            }
        }

        printf("Vertex %d: In-degree = %d, Out-degree = %d, Total degree = %d\n",
               i, inDegree, outDegree, inDegree + outDegree);
    }
}
