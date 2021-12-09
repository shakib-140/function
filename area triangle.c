#include<stdio.h>
#include<conio.h>
double display(double a,double b)
{
    return 0.5*a*b;


}
int main()
{
    double base,hight;
    printf("enter the value of base=");
    scanf("%lf",&base);
    printf("enter the value of hight=");
    scanf("%lf",&hight);
    double area=display(base,hight);
    printf("the area of triangle is=%lf",area);




    getch();
}
