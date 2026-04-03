#include<stdio.h>
void main()
{
int x;
printf("Enter the value of x: ");
scanf("%d",&x);
for(int i=0;i<x;i++)
{
    int y;
    y=i*10;
    printf("%d",y);
}
}