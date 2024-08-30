#include<stdio.h>
#define MAX 20
typedef struct
{
    int data[MAX];
    int top;
}stack;
void initstack(stack *ps)
{
    ps->top= -1;
}
void push(stack *ps,int num)
{
    ps->data[++ps->top]=num;
}
int pop(stack *ps)
{
    return (ps->data[ps->top--]);
}
int peek(stack *ps)
{
    return ps->data[ps->top];
}
int isempty(stack *ps)
{
    return (ps->top == -1);
}
int isfull(stack *ps)
{
    return (ps->top == MAX -1);
}

int main()
{
    int n,ch;
    stack s;
    initstack(&s);

    do
    {
        printf("\n1:push\n2:pop\n3:peek\n4:Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:if (isfull(&s))
            printf("Stack overflow:");
            else
            {
              printf("Enter the element / insert:");
              scanf("%d",&n);
            push(&s,n);
            break;
            }
            case 2:if(isempty(&s))
            printf("stack underflow:");
            else
                printf("poped element is %d",pop(&s));
            break;

            case 3:if(isempty(&s))
            printf("stack underflow:");
            else
                printf("Topmost element is %d",peek(&s));
            break;
        }
    }while(ch != 4);
    return 0;
}
