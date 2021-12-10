#include<stdio.h>
#include<conio.h>
int n,j,k;



int display2(int b[n])
{
    int max=b[0];
    for(k=0; k<n; k++)
    {
        if(max<b[k])
            max=b[k];
    }

    return max;


}




void display(int c[n])
{
    printf("the array index is =");
    for(j=0; j<n; j++)
        printf("%d\t",c[j]);
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

    int maximum=display2(a);
    printf("\n");
    printf("the maximum array index value is =%d",maximum);




    getch();
}

