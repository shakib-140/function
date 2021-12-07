#include<stdio.h>
#include<conio.h>

void display(int x,int y)
{
    int sum= x+y;
    printf("the sum is=%d\n",sum);
}

void display2(int f,int j)
{
    int sub= f-j;
    printf("the sub is=%d",sub);
}

int main()
{
    display(70,30);
    display2(210,90);

    getch();
}
