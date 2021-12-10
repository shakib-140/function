#include<stdio.h>
#include<conio.h>
int n,j;
void display(int a[])
{
    for(j=0; j<n; j++)
        printf("%d\t",a[j]);
}
int main()
{
    int i;
    printf("enter the value of array index=");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("enter the value of[%d]=",i);
        scanf("%d",&a[i]);
    }

    display(a);


    getch();
}
