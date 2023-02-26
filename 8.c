#include <stdio.h>
#include <string.h>
struct worker{
    char name[50];
    float payment;
}n[2];
int main(){
    float b,sum=0;int i;
    char a[50];
    for (int i = 1; i <= 2; i++)
    {
        printf("\n Enter the Details No. %d :- \n",i);
        printf("%d Enter the Name = ",i);
        scanf("%s",a);
        printf("%d Enter the Payment = ",i);
        scanf("%f",&b);

        strcpy(n[i].name,a);
        n[i].payment = b;
    }
    for (int i = 1; i <= 2; i++)
    {
        printf("\nThe Details No. %d :- \n",i);
        printf("%d Name = %s\n",i,n[i].name);
        printf("%d The Payment = %.2f\n",i,n[i].payment);
    }
    for (int i = 1; i <= 2; i++)
    {
        sum = sum + n[i].payment;
    }
    printf("\nThe Total Payment is = %.2f\n",sum);

    
return 0;
}