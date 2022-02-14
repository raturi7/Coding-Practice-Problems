#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *link;
}*first,*ptr,*sptr,*lptr;

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
    sptr->link=NULL;
}

void traverse()
{
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
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
    first=sptr;
}

void insert_end()
{
    ptr=first;
    while(ptr->link!=NULL)
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
    ptr->link=sptr;
    sptr->link=NULL;
}

void insert_pos()
{
    printf("Enter Data of the position before which you want to enter the new node\n");
    scanf("%d",&d);
    ptr=first;
    while(ptr->link->data!=d)
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
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    first=first->link;
    free(ptr);
}

void delete_end()
{
    ptr=first;
    //sptr=first->link;
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    while(ptr->link->link!=NULL)
    {
        ptr=ptr->link;
        //sptr=sptr->link;
    }
    free(ptr->link);
    ptr->link=NULL;
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

void sort()
{
    ptr=first;
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    int temp=0,swap=0;
    lptr=NULL;
    do
    {
        swap = 0;
        ptr=first;
        while (ptr->link != lptr)
        {
            if (ptr->data > ptr->link->data)
            { 
                temp=ptr->data;
                ptr->data=ptr->link->data;
                ptr->link->data=temp;
                swap = 1;
            }
            ptr = ptr->link;
        }
        lptr = ptr;
    }
    while (swap);
}

void insert_sort()
{
    printf("Enter Data\n");
    scanf("%d",&d);
    ptr=first;
    while(ptr->link->data<d)
    {
        ptr=ptr->link;
    }
    sptr=(struct node*)malloc(sizeof(struct node));
    if(sptr==NULL)
    {
        printf("Overflow\n");
        return;
    }
    sptr->data=d;
    sptr->link=ptr->link;
    ptr->link=sptr;
}

void main()
{
    printf("Create Function\n"); create();
    traverse();
    printf("Insert First Function\n"); insert_first();
    traverse();
    printf("Insert End Fucntion\n"); insert_end();
    traverse();
    printf("Insert Position Function\n"); insert_pos();
    traverse();
    printf("Delete First Function\n"); delete_first();
    traverse();
    printf("Delete End Function\n"); delete_end();
    traverse();
    printf("Delete Position Function\n"); delete_pos();
    traverse();
    printf("Sorting Function\n"); sort();
    traverse();
    printf("Insert Sort Function\n"); insert_sort();
    traverse();
}