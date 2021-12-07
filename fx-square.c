#include<stdio.h>
#include<conio.h>
int a;
void display()
{

    int square=a*a;
    printf("the square is =%d",square);
}
int main()
{
    printf("enter a value of a=");
    scanf("%d",&a);
    display();

    getch();
}




