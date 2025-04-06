#include<stdio.h>

int display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}

int indInsertion(int arr[],int size,int ele,int capacity,int ind)
{
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >0; i--)
    {
        // printf("%d\t",i);
        // printf("\n");      // idx-val  
        arr[i+1] = arr[i];   //  6 -  0 = arr[i+1]   =   5 = 7 = arr[i]     6 =  7 = arr[i+1]      =     5 = 0 = arr[i]
    }
    arr[ind] = ele;
    return 1;
    
    
}
int main(){       //0 1 2 3 4 5 6 7 8 9 10 .......100
    int arr[100] = {1,3,4,5,6,7};
    int size = 6;
    display(arr,size);
    
    int element = 2,index=1;
    indInsertion(arr,size,element,100,index);
    size+=1;

    display(arr,size);
    return 0;
}

