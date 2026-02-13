#include<stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (year % 4 == 0)
    {
        printf("Leap year is %d",year);
    }
    else
    {
        printf("Not a Leap year %d",year);
    }
    return 0;
}