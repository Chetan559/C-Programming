#include<stdio.h>
//addition of first n numbers
int main()
{
    int sum=0;
    int n;
    printf("Enter a number:-");
    scanf( "%d", &n);
    for(int i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("the sum of first %d numbers is %d",n,sum);
}