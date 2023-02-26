#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
}n;
int main()
{
    int a,b,c; 
    printf("\nDate Format :- YYYY-MM-DD\n\n");
    printf("Enter the Current Date :- ");
    scanf("%d",&a);
    printf("Enter the Current Month :- ");
    scanf("%d",&b);
    printf("Enter the Current Year :- ");
    scanf("%d",&c);

    n.day = a ;
    n.month = b ;
    n.year = c ;
    
    printf("\nCurrent Date :- %d-%d-%d\n",n.year,n.month,n.day);
    printf("\nNew Date :- %d-%d-%d\n",n.year,n.month + 1,n.day +10);
    return 0;
}
