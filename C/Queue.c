#include<stdio.h>
#include<stdlib.h>
#define max 5

int r=-1;
int f=-1;
int queue[max];

void enque(){
    int n;
    if (r==max-1){
        printf("queue is overflown");
    }
    else if(r==-1){
        r=f=0;
        printf("Enter the number: ");
        scanf("%d", &n);
        queue[r]=n;
    }
    else{
        r=r+1;
        printf("Enter the number to enque: ");
        scanf("%d",&n);
        queue[r]=n;
    }
}

void deque(){
    if (r==-1){
        printf("queue is underflow");
        }
    else{
        f=f+1;
    }    
            
}

void traverse(){
    int i=f;
    if(r==-1){
        printf("queue is underflow");
    }
    else{
        while(i<=r){
            printf("%d ", queue[i]);
            i++;
        }
        printf("\n");
    }
}

int main(){
    int n,choice;
    while(1){
        printf("1. enque\n2. deque\n3. traverese\n4. exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                enque();
                break;
            
            case 2:
                deque();
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