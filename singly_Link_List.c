#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
}NODE;
void createlist(NODE *head)
{
    int n,count;
    NODE *last, *newnode;
    printf("How many nodes:"); 
    scanf("%d",&n);
    last = head;
    for(count = 1;count<=n;count++)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->next = NULL;
        printf("\nEnter the node data :");
        scanf("%d",&newnode->info);
        last->next= newnode;
        last = newnode;
    }
}
void display(NODE *head)
{
    NODE *temp;
    for(temp=head->next;temp!=NULL;temp=temp->next)
        printf("%d\t",temp->info);
}
int search(NODE *head ,int num)
{
    NODE * temp;
    int pos;
    for(temp=head->next,pos=1;temp!=NULL;temp=temp->next,pos++)
      if(temp->info==num)
      return pos;
      return -1;
}
void insertbeg(NODE* head,int num)
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->info = num;
    newnode->next =head ->next;
    // attach newnode to node after head
    head->next=newnode;
}
void insertend(NODE* head,int num)
{
    NODE *newnode, *temp=head;
    // move temp to the last node
    while(temp->next!= NULL)
        temp=temp->next;
        // create new node
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->info=num;
        newnode->next=NULL;
        temp->next = newnode;
        // attach node after last
}
void insert(NODE *head,int num,int pos)
{
    NODE *newnode, *temp;
    int i;
    // move temp to node at position -1
    for(temp=head;(temp!=NULL)&&(i<=pos-1);i++)
        temp=temp->next;
    if(temp==NULL)
    {
        printf("\nposition is out of range:");
        return;
    }
    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->info=num;
    // insert newnode between temp and temp->next
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletefirst(NODE *head)
{
    NODE *temp;
    temp=head->next;
    head->next=temp->next;
    free(temp);
}
void deletelast(NODE *head)
{
    NODE *temp, *temp1;
    for(temp=head;temp->next!=NULL;temp=temp->next)
       temp1=temp;
       temp1->next=NULL;
       free(temp);
}
void deletebypos(NODE *head,int pos)
{
    NODE *temp,*temp1;
    int i;
    // move temp to node at position -1;
    for(temp=head,i=1;(temp->next!=NULL)&&(i<=pos-1);i++)
       temp=temp->next;
       if(temp->next==NULL)
       {
        printf("\nPosition is out of range:");
        return;
       }
       temp1=temp->next;
       temp->next = temp1->next;
       free(temp1);
}
void deletebyvalue(NODE *head,int num)
{
    NODE *temp,*temp1;
    // search for element
    for(temp=head;temp->next!=NULL;temp=temp->next)
       if(temp->next->info==num)
       {
        temp1=temp->next;
        temp->next = temp1->next;
        free(temp1);
        return;
       }
       printf("\nElement not found:");
}
void sortlist(NODE *head)
{
    NODE *temp, *temp1;
    int num;
    for(temp=head->next;temp->next=!NULL;temp=temp->next)
     for(temp1=temp->next;temp1!=NULL;temp=temp->next)
      if(temp->info>temp1->info)
      {
        //swap
        num=temp->info;
        temp->info=temp1->info;
        temp1->info=num;
      }
}
void reverse(NODE *head)
{
    NODE *t1 = head->next,*t2,*t3;
    if(t1==NULL)
        return;
        t2=t1->next;
        if(t2==NULL)
         return;
         t3=t2->next;
         t1->next=NULL;
         while(t3!=NULL)
         {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
         }
         t2->next=t1;
         head->next=t2;
}
/*void merge(NODE *head1, NODE *head2,NODE *head3)
{
    NODE *t1 = head1->next, *t2=head2->next, *last=head3,*newnode;
    while(t1!=NULL && t2!=NULL)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->next=NULL;
        if(t1->info < t2->info)
        {
            newnode->info=t1->info;
            t1=t1->next;
        }
        else
        {
            newnode->info = t2->info;
            t2=t2->next;
        }
        //attach new node
        last->next=newnode;
        last=newnode;
    }
    while(t1!=NULL) // first list has not end
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->info=t1->info;
        newnode->next=NULL;
        t1=t1->next;
          last->next=newnode;
        last=newnode;
    }
    while(t2!=NULL) // second list has not ended
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->info=t2->info;
        newnode->next=NULL;
        t2=t2->next;
        last->next=newnode;
        last=newnode;
    }
}*/
void merge(NODE *head1, NODE *head2, NODE *head3)
{
    NODE *t1 = head1->next, *t2 = head2->next, *last = head3, *newnode;

    while (t1 != NULL && t2 != NULL)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->next = NULL;

        if (t1->info < t2->info)
        {
            newnode->info = t1->info;
            t1 = t1->next;
        }
        else
        {
            newnode->info = t2->info;
            t2 = t2->next;
        }

        // Attach new node
        last->next = newnode;
        last = newnode;
    }

    while (t1 != NULL)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->info = t1->info;
        newnode->next = NULL;
        t1 = t1->next;
        last->next = newnode;
        last = newnode;
    }

    while (t2 != NULL)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->info = t2->info;
        newnode->next = NULL;
        t2 = t2->next;
        last->next = newnode;
        last = newnode;
    }
}

void concatenate(NODE *head1,NODE *head2)
{
    NODE *temp1, *temp2,*newnode;
    // move temp1 to end of first list
    for(temp1=head1;temp1->next=!NULL;temp1=temp1->next)
    // traverse second list
    for(temp2=head2->next;temp2!=NULL;temp2=temp2->next)
    {
       newnode=(NODE *)malloc(sizeof(NODE ));
       newnode->info=temp2->info;
       newnode->next=NULL;
       temp1->next=newnode;
       temp1=newnode;
    }
}
void main()
{
    NODE *head1, *head2, *head3;
    int choice,n,pos;
    head1=(NODE *)malloc(sizeof(NODE));
    head1->next=NULL;
    head2=(NODE *)malloc(sizeof(NODE));
    head2->next=NULL;
    head3=(NODE *)malloc(sizeof(NODE));
    head3->next=NULL;

    do
    {
        printf("\n1:CREATE\n2:INSERT\n3:DELETE BY NUMBER\n4:DELETE BY POSITION\n5:SEARCH\n6:DISPLAY\n7:REVERSE\n8:SORT\n9:MERGE\n10:CONCATENATE\n11:EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:createlist(head1);
                  break;
            case 2:
                  printf("\nEnter the element and position:");
                  scanf("%d%d",&n,&pos);
                  insert(head1,n,pos);
                  display(head1);
                  break;
            case 3:
                  printf("\nEnter the element:");
                  scanf("%d",&n);
                  deletebyvalue(head1,n);
                  display(head1);
                  break;
            case 4:
                  printf("\nEnter the position:");
                  scanf("%d",&pos);
                  deletebypos(head1,pos);
                  display(head1);
                  break;
            case 5:
                  printf("\nEnter the element to be search:");
                  scanf("%d",&n);
                  pos=search(head1,n);
                  if(pos==-1)
                    printf("Element not found :");
                  else
                    printf("\nelement found at position %d",pos);
                  break;
            case 6:
                  display(head1);
                  break;
            case 7:
               reverse(head1);
               display(head1);
               break;
            case 8:
               sortlist(head1);
               display(head1);
               break;
            case 9:
                createlist(head1);
                sort(head1);
                createlist(head2);
                sort(head2);
                merge(head1,head2,head3);
                display(head2);
                break;
            case 10:
                createlist(head1);
                createlist(head2);
                concatenate(head1,head2);
                display(head2);
                 break;

        }

    }while(choice!=11);
}

