#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    int a, b, c;
    printf("Date Format is :- YYYY-MM-DD");
    struct Date n[3];
    for (int i = 1; i < 3; i++)
    {
        printf("\n\n");
        printf("%d Date :- \n", i);
        printf("Enter the Day = ");
        scanf("%d", &a);
        printf("Enter the Month = ");
        scanf("%d", &b);
        printf("Enter the Year = ");
        scanf("%d", &c);

        n[i].day = a;
        n[i].month = b;
        n[i].year = c;
        printf("The Date is :- %d-%d-%d", n[i].year, n[i].month, n[i].day);
    }
    if ((n[1].day == n[2].day) && (n[1].month == n[2].month) && (n[1].year == n[2].year))
    {
        printf("\nDates are Equal.\n");
    }
    else
    {
        printf("\nDates are not Equal.\n");
    }

    return 0;
}
