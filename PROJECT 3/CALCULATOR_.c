// PROGRAM TO MAKE A CALCULATOR

#include<stdio.h>

int main()
{
    float num1;
    float num2;
    char op;
    float result;

    printf("Enter the FIRST number :");
    scanf("%f" , &num1);

    printf("Enter the operation :");
    scanf(" %c" , &op);

    printf("Enter the SECOND number :");
    scanf("%f" , &num2);

    switch(op){
        case '+' :
        printf("%.2f" , num1 + num2);
        break;

        case '-' :
        printf("%.2f" , num1 - num2);
        break;

        case '*' :
        printf("%.2f" , num1 * num2);
        break;

        case '/' :
        printf("%.2f" , num1 / num2);
        break;

    }
    
    return 0;
}