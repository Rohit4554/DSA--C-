#include<stdio.h>
char str[20];
int top;


void init()
{
    top = -1;
}
int isempty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(top == 19)
        return 1;
    else
        return 0;
}
void push(char ch)
{
    if(isfull() == 1)
        printf("Stack is full:\n");
    else
    {
        top++;
        str[top]=ch;
    }
}
char pop()
{
    char ch;
    if(isempty()== 1)
        {
        printf("Stack is empty:\n");
        return '\0';
        }
    else
    {
        ch=str[top];
        top--;
        return ch;
    }
}
int main()
{
    init();
    char str[20];
    int i;
    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    printf("Reversed String:\n");
    while(!isempty())
    {
        printf("%c",pop());
    }
}
