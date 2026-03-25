#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    int sal;
};
void increment(struct employee *);
void display(struct employee);
int main()
{
    struct employee emp;
    printf("Employee Name:\n");
    scanf("%s",emp.name);
    printf("Employee Id:\n");
    scanf("%d",&emp.id);
    printf("Employee salary:\n");
    scanf("%d",&emp.sal);
    display(emp);
    return 0;
}
void display(struct employee e)
{
    printf("Name: %s\n",e.name);
    printf("Employee Id:%d\n",e.id);
    printf("Employee salary:%d\n",e.sal);
}
void increment(struct employee *ee)
{
    ee -> sal = ee -> sal + 1000;
}
