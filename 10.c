#include <stdio.h>
#include <string.h>
struct employee
{
    int eno;
    char name[100];
    float salary;
};
int main()
{
    int a, q;
    char b[100];
    float c;
    printf("Enter the total no of employee :- ");
    scanf("%d", &q);
    struct employee n[q];
    for (int i = 1; i <= q; i++)
    {
        printf("\n\nEnter the %d Details in Employee :- \n", i);
        printf("%d Enter Employee's No. = ",i);
        scanf("%d", &a);
        printf("%d Enter Employee's Name = ",i);
        scanf("%s", b);
        printf("%d Enter Employee's Salary = ",i);
        scanf("%f", &c);

        n[i].eno = a;
        strcpy(n[i].name, b);
        n[i].salary = c;
    }
    printf("The Details of Employees :- \n");
    for (int i = 1; i <= q; i++)
    {
        printf("%d Deatils :- \n", i);
        printf("%d Employee No. = %d\n", i, n[i].eno);
        printf("%d Employee No. = %s\n", i, n[i].name);
        printf("%d Employee No. = %.2f\n", i, n[i].salary);
    }
    float max = n[1].salary;
    for (int i = 1; i <= q; i++)
    {
        if (max < n[i].salary)
        {
            max = n[i].salary;
        }
    }
    printf("\n\nThe Highest Salary is :- %.2f\n\n",max);
    return 0;
}