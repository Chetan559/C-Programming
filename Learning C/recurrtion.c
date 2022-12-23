#include<stdio.h>

void add();

int main(){
    add();
    return 0;
}

void add(){
    int a,b;
    printf("Enter first number:-\n");
    scanf("%d",&a);
    printf("Enter second number:-\n");
    scanf("%d",&b);
    printf("The addition of these numbers is:%d\n",a+b);

}