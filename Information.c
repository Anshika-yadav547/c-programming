#include<stdio.h>
int main()
{
    char Name[50];
    int Roll;
    char College[50];
    int Div;
    printf("Enter name: ");
    scanf("%s",Name);
    printf("Enter roll number: ");
    scanf("%d",&Roll);
    printf("Enter college name: ");
    scanf("%s",College);
    printf("Enter div: ");
    scanf("%d",&Div);
    printf("Name: %s\n Roll: %d\n College: %s\n Div: %d",Name,Roll,College,Div);
    return 0;
}