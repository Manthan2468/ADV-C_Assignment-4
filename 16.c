#include <stdio.h>
#include <string.h>
struct book
{
    int accession;
    char bt[100];
    char author[100];
    char publisher[100];
    float cost;
};
int main()
{
    int n,e;
    char a[100], b[100], c[100];
    float d;
    printf("Enter the No. of Insert data = ");
    scanf("%d", &n);
    struct book s[n];
    for (int i = 1; i <= n; i++)
    {
        printf("\n\nEnter the %d Books Data :- \n",i);
        printf("%d Enter the Book Title = ",i);
        scanf("%s", a);
        printf("%d Enter the Book Author Name = ",i);
        scanf("%s", b);
        printf("%d Enter the Publisher Name = ",i);
        scanf("%s", c);
        printf("%d Enter the Book Cost = ",i);
        scanf("%f", &d);

        strcpy(s[i].bt, a);
        strcpy(s[i].author, b);
        strcpy(s[i].publisher, c);
        s[i].cost = d;
        s[i].accession = i;
    }
    printf("\nBooks of a Specific Author :- \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%s Book's Author is %s. \n", s[i].bt, s[i].author);
    }
    printf("\nBooks by a Specific Publisher :- \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%s Book's Publisher is %s. \n", s[i].bt, s[i].publisher);
    }
    printf("\nBooks Costing Rs.500 and above. :- \n");
    for (int i = 1; i <= n; i++)
    {
        if (s[i].cost >= 500)
        {
            printf("%s Book's Cost is %.2f. \n", s[i].bt, s[i].cost);
        }
    }
    printf("\n All Books. :- \n");
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d Book's Accession Number is %d. \n", i,i);
        printf("%d Book's Title is %s. \n", i, s[i].bt);
        printf("%d Book's Author is %s. \n", i, s[i].author);
        printf("%d Book's Publisher is %s. \n", i, s[i].publisher);
        printf("%d Book's Cost is %.2f. \n", i, s[i].cost);
    }

    return 0;
}