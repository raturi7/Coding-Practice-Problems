#include<stdio.h>
#include<stdlib.h>
#define max 5

int top= -1;
int stack[max];

void push(){
    int n;
    if (top>=max-1){
        printf("stack is overflown");
    }
    else{
        top=top+1;
        printf("Enter the number to push: ");
        scanf("%d",&n);
        stack[top]=n;
    }
}

void pop(){
    if (top==-1){
        printf("stack is underflow");
        }
    else{
        top=top-1;
    }    
            
}

void traverse(){
    int i=top;
    if(i==-1){
        printf("stack is underflow");
    }
    else{
        while(i>=0){
            printf("%d ", stack[i]);
            i--;
        }
        printf("\n");
    }
}

int main(){
    int n,choice;
    while(1){
        printf("1. push\n2. pop\n3. traverse\n4. exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                push();
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                traverse();
                break;
                
            case 4:
                exit(1);
                
            default:
                printf("wrong choice\n");
        }
    }
}    