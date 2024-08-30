#include<stdio.h>
#define MAX 20
typedef struct
{
    int data[MAX];
    int front,rear;
}queue;
void initque(queue *qu)
{
    qu->front = qu->rear = -1;
}
void addque(queue *qu,int num)
{
    qu->rear++;
    qu->data[qu->rear]=num;
}
int removeque(queue *qu)
{
    int num;
    qu->front++;
    num=qu->data[qu->front];
    return (num);
}
int peekque(queue *qu)
{
    return (qu->data[qu->front+1]);
}
int isempty(queue *qu)
{
   return qu->front == qu->rear;
}
int isfull(queue *qu)
{
    return qu->rear == MAX-1;
}
int main()
{
    int n,choice;
    queue q;
    initque(&q);
    do
    {
        printf("\n1:Add\n2:Remove\n3:Peek\n4:Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1://ADD
            if(isfull(&q))
                printf("\nQueue overflow:");
            else
                printf("\nAdd elements in Queue:");
                scanf("%d",&n);
                addque(&q,n);
            break;
        case 2:// Remove
            if(isempty(&q))
                printf("\nQueue underflow:");
            else
                printf("\nThe removed element is :%d",removeque(&q));
            break;
        case 3: //peekque
            if(isempty(&q))
                printf("\nQueue is empty:");
            else
                printf("\n The front element of queue is :%d",peekque(&q));
        }
    }while(choice!=4);
}
