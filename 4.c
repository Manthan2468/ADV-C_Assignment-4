#include <stdio.h>
#include <string.h>

struct Employee
{
    int empid;
    char name[50];
    char designation[100];
    char department[100];
    float salary;
}n;
int main(){
    int a;
    char b[50],c[100],d[100];
    float e;
    printf("\n\n");
    printf("Enter the Employee ID :- ");
    scanf("%d",&a);
    printf("Enter the Employee Name :- ");
    scanf("%s",b);
    printf("Enter the Employee Designation :- ");
    scanf("%s",c);
    printf("Enter the Employee Department :- ");
    scanf("%s",d);
    printf("Enter the Employee Salary :- ");
    scanf("%f",&e);
    printf("\n\n");
    n.empid = a;
    strcpy(n.name,b);
    strcpy(n.designation,c);
    strcpy(n.department,d);
    n.salary = e;
    printf("Employee ID :- %d\n",n.empid);
    printf("Employee Name :- %s\n",n.name);
    printf("Employee Designation :- %s\n",n.designation);
    printf("Employee Department :- %s\n",n.department);
    printf("Employee Salary :- %.2f\n",n.salary);
    return 0;
}
