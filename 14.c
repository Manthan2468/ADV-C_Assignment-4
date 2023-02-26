#include <stdio.h>
#include <string.h>
struct lib
{
    int bookno;
    char bname[100];
    char aname[100];
};
int main()
{
    int a, n, t;
    int count = 0;
    char b[100], c[100];
    printf("Enter the Store No. of Books Data = ");
    scanf("%d", &n);
    struct lib s[n];
    for (int i = 1; i <= n; i++)
    {
        // printf(" Enter the %d Book Data :- \n", i);
        // printf("%d Book No = ", i);
        // scanf("%d", &a);
        // printf("%d Book Name = ", i);
        // scanf("%s", b);
        // printf("%d Book's Author Name = ", i);
        // scanf("%s", c);

        s[i].bookno = a;
        strcpy(s[i].bname, b);
        strcpy(s[i].aname, c);
    }
    int z;
op:
    printf("\n\nPress The No. of show Details :-\n (1) Add book details.\n(2) Display book details.\n(3) List all books of given author.\n(4) List the count of books in the library.\n(5) Exit. = ");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        for (int i = 1; i <= n; i++)
        {
            printf("New Data Enter the %d Book :- \n", i);
            printf("%d Book No = ", i);
            scanf("%d", &a);
            printf("%d Book Name = ", i);
            scanf("%s", b);
            printf("%d Book's Author Name = ", i);
            scanf("%s", c);
            s[i].bookno = a;
            strcpy(s[i].bname, b);
            strcpy(s[i].aname, c);
        }
        goto op;
        break;
    case 2:
        for (int i = 1; i < n+1; i++)
        { 
            printf("\n Data of the %d Book :- \n", i);
            printf("%d Book No = %d\n", i,s[i].bookno);
            printf("%d Book Name = %s\n",i,s[i].bname);
            printf("%d Book's Author Name = %s\n",i,s[i].aname);
        }
        goto op;
        break;
    case 3:
        for (int i = 1; i <= n; i++)
        {
            printf("%s Book Written by %s.\n", s[i].bname, s[i].aname);
        }
        goto op;
        break;
    case 4:
        for (int i = 1; i <= n; i++)
        {
            count++;
        }
        printf("\nThe Total no of Books in Library = %d\n", count);
        goto op;
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("Restart Your Program.");
        break;
    }

    return 0;
}