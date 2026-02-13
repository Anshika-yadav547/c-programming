#include<stdio.h>
int main() {
    float basic_salary, HRA, TA, gross_salary, PT, net_salary;
    printf("Enter basic salary");
    scanf("%f",&basic_salary);
    HRA = basic_salary * 0.10;
    TA = basic_salary * 0.05;
    gross_salary = basic_salary + HRA + TA;
    PT = gross_salary * 0.02;
    net_salary = gross_salary - PT;
    printf("%f",net_salary);
    return 0;
}