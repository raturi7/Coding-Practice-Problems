#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *llink;
    struct node *rlink; 
}*first,*ptr,*sptr;

int d;

void create()
{
    char ch;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&ptr->data);
    first=ptr;
    ptr->llink=NULL;
    ptr->rlink=NULL;
    printf("Do you want to enter more nodes? Y/N\n");
    ch=getch();
    while(ch=='Y'||ch=='y')
    {
        sptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&sptr->data);
        sptr->llink=ptr;
        ptr->rlink=sptr;
        sptr->rlink=NULL;
        ptr=sptr;
        printf("Do you want to enter more nodes? Y/N\n");
        ch=getch();
    }
}

void insert_beg()
{
    ptr=first;
    sptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    ptr->llink=sptr;
    sptr->rlink=ptr;
    sptr->llink=NULL;
    first=sptr;
}

void insert_end()
{
    ptr=first;
    while(ptr->rlink!=NULL)
    {
        ptr=ptr->rlink;
    }
    sptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    ptr->rlink=sptr;
    sptr->llink=ptr;
    sptr->rlink=NULL;
}

void insert_pos()
{
    ptr=first;
    printf("Enter data of node after which you want to enter the new node\n");
    scanf("%d",&d);
    while(ptr->data!=d)
    {
        ptr=ptr->rlink;
    }
    sptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&sptr->data);
    sptr->llink=ptr;
    sptr->rlink=ptr->rlink;
    ptr->rlink=sptr;
    ptr->rlink->llink=sptr;
}

/*void delete_beg()
{
    ptr=first;
    ptr->rlink->llink=NULL;
    ptr=ptr->rlink;
    ptr->rlink=NULL;
    free(ptr);
}*/

void traverse()
{
    ptr=first;
    printf("NULL");
    while(ptr!=NULL)
    {
        printf("<- %d ->",ptr->data);
        ptr=ptr->rlink;
    }
    printf("NULL\n");
}

void main()
{
    create();
    traverse();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    insert_pos();
    traverse();
    //delete_beg();
    //traverse();
}