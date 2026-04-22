#include<stdio.h>
int main()
{
    int num,digit,temp,sum;
    char choice = 'y';
    while (choice == 'y' || choice == 'y') {
        sum = 0;
        printf("Enter num: ");
        scanf("%d",&num);
        temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("num is armstrong");
    }
    else{
        printf("num is not armstrong");
    }
    printf("check anothe? (y/n: )");
    scanf("%c",&choice);
}
    return 0;
}