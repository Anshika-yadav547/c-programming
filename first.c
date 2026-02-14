#include<stdio.h>
#include<stdlib.h>
int main() {
    int num1,num2,i,gcd;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter new number: ");
    scanf("%d",&num2);
    num1 = abs(num1);
    num2 = abs(num2);
    for(i=1;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            gcd = i;
        }
    }
    printf("GCD is %d",gcd);
    return 0;
}
