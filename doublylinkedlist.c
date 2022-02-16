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
    create();
    traverse();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    insert_pos();
    traverse();
    delete_beg();
    traverse();
    delete_end();
    traverse();
    delete_pos();
    traverse();
    sort();
    traverse();
}