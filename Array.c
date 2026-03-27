#include<stdio.h>
void main()
{
    int i;
    int a[3],b[3],c[3];

    printf("Enter numbers of a:\n");
    printf("Enter numbers of b:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Sum of array:\n");
    for(i=0;i<3;i++)
    {
        c[i] = a[i] + b[i];
        printf("%d",c[i]);
    }
}