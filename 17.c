#include <stdio.h>
#include <string.h>
struct stu
{
    int rno;
    char name[100];
    int class;
};
int str(struct stu n[100],int q);
int main()
{
    struct stu q[100];
    int a, b, p ;
    char c[100];
    printf("Enter the no of data :- ");
    scanf("%d", &p);
    for (int i = 1; i <= p; i++)
    {
        printf("Enter the data %d student :- ", i);
        printf("Enter the Rno. = ");
        scanf("%d", &a);
        printf("Enter the Name. = ");
        scanf("%s", c);
        printf("Enter the Class = ");
        scanf("%d", &b);

        q[i].rno = a;
        strcpy(q[i].name, c);
        q[i].class = b;
    }
    str(q,p);
}

int str(struct stu n[100],int q)
{
    for (int i = 1; i <= q; i++)
    {
        printf("\n\nThe %d student's Data :- ", i);
        printf("The Rno. = %d\n", n[i].rno);
        printf("The Name. = %s\n", n[i].name);
        printf("Enter the Class = %d\n", n[i].class);
    }
}
