#include<stdio.h>
int recursion(int n)
{
    if(n<=1)
    return 1;
    return n*recursion(n-1);
}
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    printf("Recursion = %d",recursion(n));
    return 0;
}