#include <stdio.h>
struct uno
{
    int iteam1;
    float tp;
};

int main()
{
    struct uno n;
    int a,d;
    float b,s;
    printf("Enter the no. Of Total Friends :- ");
    scanf("%d",&d);
    printf("\nHow many Iteams Eat = ");
    scanf("%d",&a);
    printf("\nHow many Total Price = ");
    scanf("%f",&b);

    n.iteam1 = a;
    n.tp = b;

    printf("Total Items is %d.\n",n.iteam1);
    printf("Total Price is %.2f.\n",n.tp);

    s = n.tp / d ; 
    printf("\n Each Friend Have Paid in %.2f Rupees.\n",s);
    return 0;
}
