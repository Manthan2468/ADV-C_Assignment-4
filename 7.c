#include <stdio.h>
#include <string.h>
struct account{
int ano;
char name[50];
float balance;
}n[10];
int main(){
    int a,i;
    char b[50];
    float c;
for (int i = 1; i <= 3; i++)
{
    printf("Enter the %d Bank Details :- \n",i);
    printf("%d Enter Account Number = ",i);
    scanf("%d",&a);
    printf("%d Enter Name = ",i);
    scanf("%s",b);
    printf("%d Enter Account Balance = ",i);
    scanf("%f",&c);
    n[i].ano = a;
    strcpy(n[i].name,b);
    n[i].balance = c;
}
printf("\n\n Balance < 100 Rs Customer's Details :- \n");
    for (int i = 1; i <= 3; i++)
    {
        if (n[i].balance<100)
        {
            printf("\n%d Enter Account Number = %d\n",i,n[i].ano);
            printf("%d Enter Account Number = %s\n",i,n[i].name);
            printf("%d Enter Account Number = %.2f\n",i,n[i].balance);
        }
        
    }
    

}