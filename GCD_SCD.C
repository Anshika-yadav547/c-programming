#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1,num2,i,scd,gcd,choice;
    printf("Enter choice:\n");
    scanf("%d",&choice);
    printf("Enter numbers:\n");
    scanf("%d%d",&num1,&num2);
    num1 = abs(num1);
    num2 = abs(num2);

    switch(choice)
    {
        case 1:
        for(i=1;i<=num1&&i<=num2;i++) {
            if(num1%i==0&&num2%i==0) {
                gcd = i;
            }
        }
        printf("GCD is %d",gcd);
        break;
        case 2:
        for(i=2;i<=num1&&i<=num2;i++) {
            if(num1%i==0&&num2%i==0) {
                scd = i;
                break;
            }
        }
        if(scd == -1) {
            printf("NO COMMON DIVISOR");
        }
        else{
            printf("scd = %d",scd);
        }
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}