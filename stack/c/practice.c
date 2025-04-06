#include <stdio.h>
#define size 5   // 1 2 3 4 
int stack[size]; // 0 1 2 3 4  
int tos = -1;
void push();
void pop();
void display();
void peep();


int main() {
    push(); // push 10
    push(); // push 20
    push(); // push 30
    push(); // push 40

    printf("\n Stack after pushing 4 elements:\n");
    display();

    printf("\n\nPeeping at a position:\n");
    peep();  // try input: 2
    display();
    printf("\n");
    push();
    display();
return 0;
}

void push(){
    int ele;
    if(tos>= size -1){
        printf("stack is full\n");
    }
    else{
        printf("enter the number inside the stack = ");
        scanf("%d",&ele);
        tos++;
        stack[tos] = ele;
        printf("value added succsessfully\n");
    }
}

void pop(){
    if(tos<=-1)
    {
        printf("stack is empty\n");
    }
    else{
        tos--;
        printf("value deleted succsessfully\n");
    }
}

void display(){
    if(tos<=-1)
    {
        printf("stack is empty\n");
    }
    else{
        for (int i = tos; i >= 0; i--)
        {
           printf("display = %d\t \t",stack[i]);
        }        
    }
}
 
void peep(){
    int pos;
    if (tos <= -1)
    {
        printf("stack is empty\n");
    }
    else{
        printf("enter the postion \n");
        scanf("%d",&pos);
        if(pos<1 || pos < 0 || pos > tos+1)
        {
            printf("stack is out of range\n");
        }
        else{
            printf("position = %d is value = %d\n",pos,stack[tos-pos+1]);
        }
    }
    
}


// #include <stdio.h>
// #define size 5

// int stack[size];
// int tos = -1;

// void push();
// void pop();
// void peep();
// void display();

// int main() {
//     push(); // push 10
//     push(); // push 20
//     push(); // push 30
//     push(); // push 40

//     printf("\n\nStack after pushing 4 elements:\n");
//     display();

//     printf("\n\nPeeping at a position:\n");
//     peep();  // try input: 2

//     return 0;
// }

// // Push function
// void push() {
//     int ele;
//     if (tos >= size - 1) {
//         printf("Stack is full\n");
//     } else {
//         printf("Enter element to push: ");
//         scanf("%d", &ele);
//         tos++;
//         stack[tos] = ele;
//         printf("Value added successfully\n");
//     }
// }

// // Pop function
// void pop() {
//     if (tos <= -1) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Value %d is deleted\n", stack[tos]);
//         tos--;
//     }
// }

// // Display function
// void display() {
//     if (tos <= -1) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Stack from top to bottom:\n");
//         for (int i = tos; i >= 0; i--) {
//             printf("%d\n", stack[i]);
//         }
//     }
// }

// // Peep function (fixed and tested)
// void peep() {
//     int pos;
//     if (tos < 0) {
//         printf("Stack is empty\n");
//     } else {
//         printf("Enter the position from top (1 to %d): ", tos + 1);
//         scanf("%d", &pos);

//         if (pos < 1 || pos > tos + 1) {
//             printf("Position is out of range\n");
//         } else {
//             int index = tos - pos + 1;
//             printf("Value at position %d from top is: %d\n", pos, stack[index]);
//         }
//     }
// }
