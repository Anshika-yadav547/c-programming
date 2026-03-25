#include<stdio.h>
void display(char empname[],int id,int sal)
{
    printf("Employee name: %s\n",empname);
    printf("Employee Id: %d\n",id);
    printf("Employee salary: %d\n",sal);
}
struct employee
{
    char name[20];
    int id;
    int sal;
}emp;
void main()
{
    printf("Employee name:\n ");
    scanf("%[^\n]", emp.name); //use this instead of %s when reading names or any input that may contain spaces.
    printf("Employee id:\n ");
    scanf("%d", &emp.id);
    printf("Employee salary:\n ");
    scanf("%d", &emp.sal);
    display(emp.name, emp.id, emp.sal);

}