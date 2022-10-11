#include<stdio.h>
#include<stdlib.h>

# define max 5
int queue[max];
int f = -1;
int r = -1;

void enque(){
    int n;
    if((f==0 && r==max-1) || (f>0 && r==f-1)){
        printf("Queue is full");
    }
   else if(r==-1){
       r=f=0;
       printf("Enter the number: ");
       scanf("%d", &n);
       queue[r]=n;
   }
   else{
       r=(r+1)%max;
       printf("Enter the number: ");
       scanf("%d",&n);
       queue[r]=n;
   }
}

void deque(){
    if(r==-1){
        printf("Queue is empty");
    }
    else if(r==f){
        r=-1;
        f=-1;
    }
    else{
        f=(f+1)%max;
    }
}

void display(){
    int i=f;
    if (f==-1 && r==-1){
        printf("Queue is empty");
    }
    else{
        printf("Elements in the queue are: ");  
        while(i!=r){
            printf("%d ", queue[i]);
            i=(i+1)%max;
        }
        printf("%d ",queue[r]);
        printf("\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("1. enque\n2. deque\n3. dispaly\n4.exit\n");

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
                display();
                break;

            case 4:
					exit(1);

            default:
                printf("Wrong Choice");
        }
    }
}