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
    printf("Linked List Created Successfully\n");
}

void traverse()
{
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n\n");
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
    if(ptr==NULL)
    {
        printf("Underflow\n");
        return;
    }
    while(ptr->link->link!=NULL)
    {
        ptr=ptr->link;
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
                swap=1;
            }
            ptr=ptr->link;
        }
        lptr=ptr;
    }
    while (swap==1);
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
    int choice;
    char ch;
    printf("Let's Create Linked List\n");
    create();
    traverse();
    printf("Do you want to perform operations?Y/N\n");
    ch=getch();
    if(ch=='Y'||ch=='y')
    {
        do
        {
            printf("Choose:\n1: Insert First\n2: Insert End\n3: Insert at specific position\n");
            printf("4: Delete First\n5: Delete End\n6: Delete from specific position\n");
            printf("7: Sort Linked List\n8: Insert in Sorted Linked List\n9: Traverse\n10: Exit\n");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
            insert_first();
            break;
            case 2:
            insert_end();
            break;
            case 3:
            insert_pos();
            break;
            case 4:
            delete_first();
            break;
            case 5:
            delete_end();
            break;
            case 6:
            delete_pos();
            break;
            case 7:
            sort();
            break;
            case 8:
            insert_sort();
            break;
            case 9:
            traverse();
            break;
            default:
            if(choice!=10)
                printf("Wrong Choice\n");
            break;
            }
        }while(choice!=10);
    }
}