#include<stdio.h>
struct student {
    char Name[50];
    int Roll_No;
    int Marks;
    float percentage;
} s[10];
int main()
{
    int Total = 0,i;
    printf("Enter Total number of students: ");
    scanf("%d",&Total);
    for(i=0;i<Total;i++) {
        printf("Enter student name: ");
        scanf("%s",s[i].Name);
    }
    for(i=0;i<Total;i++) {
        printf("Enter student roll number: ");
        scanf("%d",&s[i].Roll_No);
    }
    for (i = 0; i < Total; i++)
    {
        printf("Enter student marks: ");
        scanf("%d",&s[i].Marks);
    }
    for ( i = 0; i < Total; i++)
    {
         s[i].percentage = (s[i].Marks/100.0)*100;
         printf("%.2f\n",s[i].percentage);
    }
    
}
