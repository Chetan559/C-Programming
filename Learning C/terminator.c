#include<stdio.h>
//we have used terminatot in 8th line 
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age );
    age >=18 ? printf("you can vote in this election\n") : printf("you cannot vote in this election\n");
    printf("thank you\n");
    return 0;
}