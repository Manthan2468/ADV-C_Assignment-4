#include <stdio.h>
#include <string.h>
struct stu
{
    int rno;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
    float percentage;
};

int main(){
    int a,q;
    char b[50];
    float c,d,e,f;
    printf("Enter the No. of Students to Store Data :- ");
    scanf("%d",&q);
    struct stu n[q];
    for (int i = 1; i <= q; i++)
    {
        printf("\n\n");
        printf("Enter the %d Student Data :- \n",i);
        printf("Enter the Roll No. = ");
        scanf("%d",&a);
        printf("Enter the Name = ");
        scanf("%s",b);
        printf("Enter the Chemistry Marks = ");
        scanf("%f",&c);
        printf("Enter the Maths Marks = ");
        scanf("%f",&d);
        printf("Enter the Physics Marks = ");
        scanf("%f",&e);
        f = (c+d+e)/3;

        n[i].rno = a ;
        strcpy(n[i].name,b);
        n[i].chem_marks = c ;
        n[i].maths_marks = d ;
        n[i].phy_marks = e ;
        n[i].percentage = f ;

        printf("%d Student's Roll No. :- %d\n",i,n[i].rno);
        printf("%d Student's Roll No. :- %s\n",i,n[i].name);
        printf("%d Student's Roll No. :- %.2f\n",i,n[i].chem_marks);
        printf("%d Student's Roll No. :- %.2f\n",i,n[i].maths_marks);
        printf("%d Student's Roll No. :- %.2f\n",i,n[i].phy_marks);
        printf("%d Student's Roll No. :- %.2f\n",i,n[i].percentage);
    }
    
    return 0;
}