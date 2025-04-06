#include<stdio.h>
// int main(){
//    int m=1,n;
//    printf("%d\n",n);
//     printf("enter the number of fectorial\n");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) // n = 5
//     {
//        m = m*i;
//     }
//     printf("%d\n",m);
// }

#include <stdio.h>

int main() {
    int n,a=0,b=1;
    printf("enter the number of febonancci series:\n");
    scanf("%d",&n);   /// 0 1 1
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a);
        int store = a + b;
        a = b;
        b = store;

    }
    

}
