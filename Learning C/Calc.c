/*
                                       AUTHOR:- Chetan Sharma
                                       DOC:-19th Nov 2022
                                       Objective:-TO Creat a Calculator
*/
#include<stdio.h>

void add();
void subtract();
void multiply();
void divide();

int main(){
    int number;
    printf("Which function do you want to use?\n");
    printf("Enter 1 to add two numbers\n");
    printf("Enter 2 to subtract two numbers\n");
    printf("Enter 3 to multipy two numbers\n");
    printf("Enter 4 to add two numbers\n");
    printf("Enter 0 to exit\n");
    scanf("%d", &number ); 
    if(number==1)
    {
        add(); 
    }
    else if(number==2)
    {
        subtract();
    }
    else if (number==3)
    {
        multiply();
    }
    else if (number==4)
    {
        divide();
    }
    else if (number==0)
    {
        printf("Bye\n");
    }
    
    else
    {
        printf("Enter a valid number\n");
    }

    return 0; 
}

void add(){
      int a,b;
    printf("Enter first number:-\n");
    scanf("%d",&a);
    printf("Enter second number:-\n");
    scanf("%d",&b);
    printf("The addition of these numbers is:%d\n",a+b);
    main();
}

void subtract(){
      int a,b;
    printf("Enter first number:-\n");
    scanf("%d",&a);
    printf("Enter second number:-\n");
    scanf("%d",&b);
    printf("The subtraction of these numbers is:%d\n",a-b);
    main();
}

void multiply(){
      int a,b;
    printf("Enter first number:-\n");
    scanf("%d",&a);
    printf("Enter second number:-\n");
    scanf("%d",&b);
    printf("The multiplication of these numbers is:%d\n",a*b);
    main();
}

void divide(){
      int a,b;
    printf("Enter first number:-\n");
    scanf("%d",&a);
    printf("Enter second number:-\n");
    scanf("%d",&b);
    printf("The division of these numbers is:%d\n",a/b);
    main();
}