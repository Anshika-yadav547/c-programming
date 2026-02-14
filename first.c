#include<stdio.h>
void main() {
    int i;
    int a[10];
    printf("Enter numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",a[i]);
    }
}