#include<stdio.h>
void main() {
    int a,b,ch,i,fact=1,power;
    float c,d;
    printf("Enter numbers: ");
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Addition of two numbers: %d",a+b);
        break;
        case 2:
        printf("Subtraction of two numbers: %d",a-b);
        break;
        case 3:
        printf("Multiplication of two numbers: %d",a*b);
        break;
        case 4:
        if (d==0)
        {
            printf("Division is not possible by zero");
        }
        else
        {
            printf("Division of two numbers: %f",c/d);
        }
        break;
        case 5:
        for(i=1;i<=a;i++)
        {
            fact=fact*i;
        }
        printf("Factorial is %d",fact);
        break;
        case 6:
        for(i=1;i<=b;i++)
        {
            power=power*a;
        }
        printf("Power is: %d",power);
        break;
        case 7:
        break;
        default:
        printf("Wrong choice");
    }
}