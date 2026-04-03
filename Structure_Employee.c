#include<stdio.h>
struct Employee {
    char Name[10];
    char Designation[10];
    char Gender[10];
    int Date_of_joining;
    float Salary;
} E[10];
int main() 
{
    int Total =0 ,Male = 0,Female = 0,i;
    printf("Enter total number of employees: \n");
    scanf("%d",&Total);
    for(i=0;i<Total;i++)
    {
        printf("Enter employee name: ");
        scanf("%s",E[i].Name);
    }
    printf("Employee name: %s",E[i].Name);
    for(i=0;i<Total;i++)
    {
        printf("%s ",E[i].Name);
    }
    for(i=0;i<Total;i++)
    {
        printf("Enter employee designation: ");
        scanf("%s",E[i].Designation);
    }
    printf("Employee Designation: %s",E[i].Designation);
    for (i = 0; i < Total; i++)
    {
        printf("%s ",E[i].Designation);
    }
    for (i = 0; i < Total; i++)
    {
        printf("Enter employee gender: ");
        scanf("%s",E[i].Gender);
    }
    printf("Employee gender: %s",E[i].Gender);
    for ( i = 0; i < Total; i++)
    {
        printf("%s ",E[i].Gender);
    }
    for(i=0;i<Total;i++)
    {
        printf("Enter date of joining: ");
        scanf("%d",&E[i].Date_of_joining);
    }
    printf("Date of joining: %d",E[i].Date_of_joining);
    for ( i = 0; i < Total; i++)
    {
        printf("%d ",E[i].Date_of_joining);
    }
    for ( i = 0; i < Total; i++)
    {
        printf("Enter salary: ");
        scanf("%f ",&E[i].Salary);
    }
    printf("salary: %f",E[i].Salary);
    for ( i = 0; i < Total; i++)
    {
        printf("%f ",E[i].Salary);
    }
  return 0;  
}
