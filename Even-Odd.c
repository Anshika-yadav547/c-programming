#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    if (num%2 == 0)
    {
        printf("Number is EVEN %d",num);
    }
    else
    {
        printf("Number is ODD %d",num);
    }
    return 0;
}