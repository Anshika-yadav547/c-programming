#include<stdio.h>
int main() {
    int a,b,ch,E,F;
    float c,d;
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    printf("Select switch: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case(1):
        E=a+b;
        printf("Addition of two number: %d",E);
        break;
        case(2):
        F=a-b;
        printf("Subtraction of two number: %d",F);
        break;
        case(3):
        c=a*b;
        printf("Multiplication of two number: %f",c);
        break;
        case(4):
        d=a/b;
        printf("Division of two number: %f",d);
        break;
        default:
        printf("choice is incorrect");
    }
return 0;
}