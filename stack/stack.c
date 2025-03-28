#include<stdio.h>
#define size 5
int stack[size];
int tos = -1;
void push();
void pop();
void peep();
void display();
void main(){
    push();
    push();
    push();
    push();
    printf("\n \n");
    display();
    printf("\n \n");
    peep();
    printf("\n \n");
    pop();
    display();
    printf("\n \n");
    push();
    push();
    push();
    push();
}

void push(){
    int ele; 
    if(tos >= size-1){ // -1 5-1  = 4   -1   4
        printf("stack is full\n");
    }
    else{
        printf("\n enter element\n");
        scanf("%d",&ele);
        tos++;
        stack[tos] = ele;
        printf("value added successfully");
    }
}

void pop(){
    if(tos <= -1)
    {
        printf("stack is empty\n");
    }
    else{
        tos--;  
        printf("value is deleted");
    }           
}

void display(){
    int i;
    if(tos <= -1)
    {
        printf("stack is empty\n");
    }
    else{
        for (i = tos; i >= 0; i--)
        {
            printf("\t %d",stack[i]);
        }
    }
}

void peep(){
    int pos;
    if(tos<= -1)
    {
        printf("stack is empty\n");
    }
    else{
        printf("enter the position\n");
        scanf("%d",&pos);
        if(pos > tos+1 || pos < 1) // 0 1 2 3 4     3
        {                         //  4 3 2 1 
            printf("position is out of range\n");
        }
        else{
            printf("\n value position %d is %d",pos, stack[tos-pos+1]);
        }
                        
    }
}