#include<stdio.h>
#include<stdlib.h>
struct ArrayADT
{
    int total_size;
    int use_size;
    int* ptr;
} marks;

void createArray(struct ArrayADT* a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->use_size = uSize;
    a->ptr = (int*) malloc(tSize*sizeof(int));
}

void setval(struct ArrayADT *a)
{
    int n;
    for (int j = 0; j < a->use_size; j++)
    {
        printf("enter element %d = ",j);
        scanf("%d",&n);
        (a->ptr)[j] = n;  // it means   (a->ptr + j) = n;  =   (a->ptr + 0) = n;  (a->ptr + 1) = n; ..............
    }
    
}

void show(struct ArrayADT *a){
    for (int i = 0; i < a->use_size; i++)
    {
        printf("ptr is = %d\n" , (a->ptr)[i]);
    }
    
}

int main(){
   createArray(&marks, 5, 2);
    printf("We are running show now\n");
    setval(&marks);
    show(&marks);
}
