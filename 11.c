#include <stdio.h>
struct dis {
float inch;
float feet;
}n[2];
int main(){
    float a,b,s1=0,s2=0;
    for (int i = 1; i <= 2; i++)
    {
        printf("\nEnter the %d Distance :- \n",i);
        printf("%dEnter the Inch = ",i);
        scanf("%f",&a);
        printf("%dEnter the Feet = ",i);
        scanf("%f",&b);

        n[i].inch = a ;
        n[i].feet = b ;
    }
    for (int i = 1; i <= 2; i++)
    {
        s1 = s1 + n[i].inch;
        s2 = s2 + n[i].feet;
    }
    printf("\nThe Total Inch = %.2f\n",s1);
    printf("\nThe Total Feet = %.2f\n",s2); 
        if (s1 >= 12)
        {
            s1 = s1 - 12;
            s2++;
        }
    printf("\n\n After Convert Inch to Feet :- \n");
    printf("\nThe Total Inch = %.2f\n",s1);
    printf("\nThe Total Feet = %.2f\n",s2); 
    
    return 0;
}