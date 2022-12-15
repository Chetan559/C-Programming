#include<stdio.h>
/* Its just a random project we are going to make,
its the hotel menu ,
customer can order THEIR food on line with the help of this program*/
int main(){
    int a;
    printf("WELCOME \n");
    printf("plz select the type of the food tha you'd like to order\n");
    printf("Enter 1 for south indian \n");
    printf("Enter 2 for north indian \n");
    printf("Enter 3 for gujrati/rajasthani\n");
    printf("Enter 4 for itaian food\n");
    scanf("%d",&a);
    if (a==1){
        printf("you have selected south indian \n");
    }
    else if (a==2)
    {
        printf("you have selected north indian\n");
    }
    else if (a==3)
    {
        printf("you have selected gujrati/rajasthani\n");
    }
    else if (a==4)
    {
        printf("you have selected italian\n");
    }
    else {
        printf("plz enter a vaild number\n");
    }
    printf("TERE GHAR JAYENGA ISMAI;)\n");
    return 0;
}