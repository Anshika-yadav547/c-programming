#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    printf("Menu\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);
    switch(choice)
    {
        case 1:
        result=num1+num2;
        printf("Addition = %f",result);
        break;
        case 2:
        result=num1-num2;
        printf("Subtraction = %f",result);
        break;
        case 3:
        result=num1*num2;
        printf("Multiplication = %f",result);
        break;
        case 4:
        if(num2!=0)
        {
            result = num1/num2;
            printf("Division = %f",result);
        }
        else{
            printf("Division with zero is not possible.");
        }
        break;
        default:
        printf("Invalid choice");
    }
    return 0;
}