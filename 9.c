#include <stdio.h>
#include <string.h>
struct worker{
    char name[50];
    int run;
}n[15];
int main(){
    int b,sum=0,i;
    char a[50];
    for (int i = 1; i <= 11; i++)
    {
        printf("\n Enter the Details of Player. %d :- \n",i);
        printf("%d Enter the Player Name = ",i);
        scanf("%s",a);
        printf("%d Enter the Player's Run = ",i);
        scanf("%d",&b);

        strcpy(n[i].name,a);
        n[i].run = b;
    }
    for (int i = 1; i <= 11; i++)
    {
        printf("\nThe Player Details No. %d :- \n",i);
        printf("%d Name = %s\n",i,n[i].name);
        printf("%d Runs = %d\n",i,n[i].run);
    }
    for (int i = 1; i <= 11; i++)
    {
        sum = sum + n[i].run;
    }
    printf("\nThe Total Run of Team is = %d\n",sum);

    
return 0;
}