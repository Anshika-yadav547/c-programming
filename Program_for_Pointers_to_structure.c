#include<stdio.h>

struct name
{
    int a;
    float b;
};
void main() {
    struct name *ptr,p;
    ptr = &p; //Referencing pointer to memory address of p
    printf("Enter integer: ");
    scanf("%d",&(*ptr).a);
    printf("Enter number: ");
    scanf("%f",&ptr->b);
    printf("Displaying: ");
    printf("%d\n%f",(*ptr).a,ptr->b);
}