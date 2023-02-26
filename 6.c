#include <stdio.h>
#include <string.h>
struct b_date
{
    int day;
    int month;
    int year;
};
struct a_date
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[50];
    int rno;
    struct b_date n2;
    struct a_date n3;
};

int main()
{
    struct student n1;

    char a[50];
    int b, c, d, e, f, g, h;
    printf("Enter the Student's Name = ");
    scanf("%s", a);
    printf("Enter the Student's Roll No. = ");
    scanf("%d", &b);
    printf("Enter the Student's DOB Day = ");
    scanf("%d", &c);
    printf("Enter the Student's DOB Month = ");
    scanf("%d", &d);
    printf("Enter the Student's DOB Year = ");
    scanf("%d", &e);
    printf("Enter the Student's Admission Day = ");
    scanf("%d", &f);
    printf("Enter the Student's Admission Month = ");
    scanf("%d", &g);
    printf("Enter the Student's Admission Year = ");
    scanf("%d", &h);

    strcpy(n1.name, a);
    n1.rno = b;
    n1.n2.day = c;
    n1.n2.month = d;
    n1.n2.year = e;
    n1.n3.day = f;
    n1.n3.month = g;
    n1.n3.year = h;

    printf("\n\nEnter the Student's Name = %s\n", n1.name);
    printf("Enter the Student's Roll No. = %d\n",n1.rno);
    printf("Enter the Student's DOB Day = %d\n",n1.n2.day);
    printf("Enter the Student's DOB Month = %d\n",n1.n2.month);
    printf("Enter the Student's DOB Year = %d\n",n1.n2.year);
    printf("Enter the Student's Admission Day = %d\n",n1.n3.day);
    printf("Enter the Student's Admission Month = %d\n",n1.n3.month);
    printf("Enter the Student's Admission Year = %d\n",n1.n3.year);


    printf("\n\n Student's Age = %d\n\n",n1.n3.year-n1.n2.year);
    return 0;
}
