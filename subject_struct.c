#include<stdio.h>
#include<stdlib.h>
struct subject
{
    char sub_name[20];
    int sub_code;
}subs[20],*ptr;

void main()
{
    int i=0,n=0;
    printf("Enter Number of Subjects [MAX 20]: ");
    scanf("%d",&n);
    ptr=(struct subject *)malloc(n*sizeof(struct subject));
    for(i=0;i<n;i++)
    {
        printf("Enter Subject Name & Subject Code\n");
        scanf("%s %d",(ptr+i)->sub_name, &(ptr+i)->sub_code);
    }
    printf("\nDetails Entered: \n");
    for(i=0;i<n;i++)
    {
        printf("%s : %d\n",(ptr+i)->sub_name,(ptr+i)->sub_code);
    }
    free(ptr);
}