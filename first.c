#include<stdio.h>
int main() {
    char Name[50];
    int roll;
    char College[50];
    int division;
    printf("Enter Name\n");
    scanf("%s",Name);
    printf("Enter Roll No\n");
    scanf("%d",&roll);
    printf("Enter College name\n");
    scanf("%s",College);
    printf("Enter division\n");
    scanf("%d",&division);
    printf("Name: %s\n",Name);
    printf("roll NO: %d\n",roll);
    printf("College Name: %s\n",College);
    printf("Division: %d\n",division);
    return 0;
}