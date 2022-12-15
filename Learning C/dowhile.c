#include<stdio.h>
 
 int main()
 {
    int n;
    do{
       printf("enter a number which is even");
       scanf("%d",&n);
       printf("%d\n",n);

       if(n % 2 != 0)
        {
         printf("This is not an even number!!\n");
        break;
        }
    }while(1);
    printf("Thanku");
 }