#include<stdio.h>
#define MAX 20
typedef struct
{
    int data[MAX];
    int top;
}stack;
void initstack(stack *ps)
{
    ps->top = -1;
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
    return (ps->top == MAX-1);
}
/*void main()
{
    int n,choice;
    stack s;
    initstack(&s);
    do
    {
        printf("\n1:Push\n2:Pop\n3:Peek\n4:Exit");
        printf("\nEnter tour choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:// push
            if(isfull(&s))
                printf("\nStack overflow:\n");
            else
            {
            printf("\nPush the elements in Array:");
            scanf("%d",&n);
            push(&s,n);
            }
            break ;
        case 2: // POP
            if(isempty(&s))
                printf("\nStack Underflow:\n");
            else
                printf("\nThe poped element is :%d",pop(&s));
            break;
        case 3://peek
            if(isempty(&s))
                printf("\nStack Underflow:\n");
            else
                printf("\nThe topmost element of stack is :%d",peek(&s));
            break;

        }
    }while(choice != 4);
}
*/


void reverse(char str[20])
{
    int i;
    stack s;
    initstack(&s);
    for(i=0;str[i]!="\0";i++)
        push(&s,str[i]);
    i=0;
    while(!isempty(&s))
        str[i++]=pop(&s);
}
void main()
{
    char str[]="GOOD";
    printf("The original string is :%s",str);
    reverse(str);
    printf("\nThe reverse string is :%s",str);
}
