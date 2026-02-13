#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Number is %d %d\n",a,b);
    int c = a+b;
    printf("Addition of two number is: %d\n",c);
    return 0;
}
