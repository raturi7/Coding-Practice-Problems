#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *link;
}*first,*ptr,*sptr,*temp;

int d;

void create()
{
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data in First Node\n");
    scanf("%d",&ptr->data);
    first=ptr;
    do
    {
        sptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&sptr->data);
        ptr->link=sptr;
        ptr=sptr;
        printf("Do you want to enter more nodes? Y/N\n");
        ch=getch();
    }while(ch=='Y'||ch=='y');
    sptr->link=first;
}

void traverse()
{
    ptr=first;
    do
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }while(ptr!=first);
    printf("%d\n",first->data);
}

void insert_first()
{
    ptr=first;
    sptr=(struct node*)malloc(sizeof(struct node));
    if(sptr==NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    sptr->link=ptr;
    do
    {
        ptr=ptr->link;
    }while(ptr->link!=first);
    ptr->link=sptr;
    first=sptr;   
}

void insert_end()
{
    ptr=first;
    do
    {
        ptr=ptr->link;
    }while(ptr->link!=first);

    sptr=(struct node*)malloc(sizeof(struct node));
    if(sptr==NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    ptr->link=sptr;
    sptr->link=first;
}

void insert_pos()
{
    printf("Enter Data of the position after which you want to enter the new node\n");
    scanf("%d",&d);
    ptr=first;
    while(ptr->data!=d)
    {
        ptr=ptr->link;
    }
    sptr=(struct node*)malloc(sizeof(struct node));
    if(sptr==NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    sptr->link=ptr->link;
    ptr->link=sptr;
}

void delete_first()
{
    ptr=first;
    temp=first;
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    do
    {
        temp=temp->link;
    } while (temp->link!=first);
    temp->link=first->link;
    first=first->link; 
    free(ptr);
}

void delete_end()
{
    ptr=first;
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    do
    {
        ptr=ptr->link;
    }while(ptr->link->link!=first);
    free(ptr->link);
    ptr->link=first;
}

void delete_pos()
{
    printf("Enter Data of the node to delete\n");
    scanf("%d",&d);
    ptr=first;
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    sptr=first->link;
    while(sptr->data!=d)
    {
        sptr=sptr->link;
        ptr=ptr->link;
    }
    ptr->link=sptr->link;
    free(sptr);
}

void main()
{
    create();
    traverse();
    insert_first();
    traverse();
    insert_end();
    traverse();
    insert_pos();
    traverse();
    delete_first();
    traverse();
    delete_end();
    traverse();
    delete_pos();
    traverse();
}