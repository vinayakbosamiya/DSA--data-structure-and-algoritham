// structure and structure to pointer and pass structure inside the function  

// 1 - structure and structure to pointer 
// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     int rollno;
//     char name[20];
// }s1, s2 ,*ptr = &s1; // struct student *ptr = &s1

// int main(){
//     s1.rollno = 1;
//     strcpy(s1.name,"vinay");
//     // printf values without pointer 
//     printf(" 1 name is %s\n",s1.name);
//     printf(" 1 rollno is %d\n",s1.rollno);
    
//   // printf values using pointer but inside using arrow ->
//     printf("2 name is %s\n",ptr -> name);
//     printf("2 rollno is %d\n",ptr -> rollno);
// // printf values using pointer but inside using (*ptr)
//     printf("3 name is %s\n",(*ptr).name);
//     printf("3 rollno is %d\n",(*ptr).rollno);
// }

// 2 - structure to function

#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
}s1;

void prt(struct student s1);

int main(){
    // struct student s2 = {1,"vinay"};
strcpy(s1.name,"vinay1");
s1.rollno = 1;

prt(s1);

return 0;

}
void prt(struct student s2)
{
    printf("name is - %d\n",s2.rollno);
    printf("name is - %s\n",s2.name);
}