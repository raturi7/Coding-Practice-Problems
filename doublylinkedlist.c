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
    do
    {
        sptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&sptr->data);
        sptr->llink=ptr;
        ptr->rlink=sptr;
        ptr=sptr;
        printf("Do you want to enter more nodes? Y/N\n");
        ch=getch();
    }while(ch=='Y'||ch=='y');
    sptr->rlink=NULL;
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

void delete_beg()
{
    ptr=first;
    sptr=ptr->rlink;
    sptr->llink=NULL;
    first=sptr;
    free(ptr);
}

void delete_end()
{
    ptr=first;
    sptr=first->rlink;
    while(sptr->rlink!=NULL)
    {
        sptr=sptr->rlink;
        ptr=ptr->rlink;
    }
    ptr->rlink=NULL;
    free(sptr);
}

void delete_pos()
{
    printf("Enter Data of the node to be deleted\n");
    scanf("%d",&d);
    ptr=first;
    sptr=first->rlink;
    while(sptr->data!=d)
    {
        ptr=ptr->rlink;
        sptr=sptr->rlink;
    }
    ptr->rlink=sptr->rlink;
    free(sptr);
}

void sort()
{
    int s=0,temp=0;
    ptr=first;
    sptr=first->rlink;
    do
    {
        s=0;
        while(sptr->rlink!=NULL)
        {
            if(ptr->data>sptr->data)
            {
                temp=ptr->data;
                ptr->data=sptr->data;
                sptr->data=temp;
                s=1;
            }
            ptr=ptr->rlink;
            sptr=sptr->rlink;
        }
    }while(s==1);
}

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
    printf("\nCreation Function\n\n");
    create();
    traverse();
    printf("\nInsert Beginning Function\n\n");
    insert_beg();
    traverse();
    printf("\nInsert End Function\n\n");
    insert_end();
    traverse();
    printf("\nInsert Position Function\n\n");
    insert_pos();
    traverse();
    printf("\nDelete Beginning Function\n\n");
    delete_beg();
    traverse();
    printf("\nDelete End Function\n\n");
    delete_end();
    traverse();
    printf("\nDelete Position Function\n\n");
    delete_pos();
    traverse();
    printf("\nSorting Function\n\n");
    sort();
    traverse();
}