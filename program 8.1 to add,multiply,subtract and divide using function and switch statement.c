#include<stdio.h>
void main()
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\n1.ADD\n2.SUBTRACT\n3.MULTIPLICATION\n4.DIVISION\n");
    printf("Enetr the choice\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=add(a,b);
        printf("Sum=%d",c);
        break;

        case 2:
        c=sub(a,b);
        printf("SUBTRACT=%d",c);
        break;

        case 3:
        c=mul(a,b);
        printf("MULTIPLICATION=%d",c);
        break;

        case 4:
        if(b==0)
        printf("Infinity");
        else
        {
            c=div(a,b);
            printf("Div=%f",c);
        }
        break;
        default:
        printf("Enter the correct choice\n");
    }
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int x,int y)
{
    int z=x-y;
    return z;
}
int mul(int x,int y)
{
    int z=x*y;
    return z;
}
float div(int x,int y)
{
    float z=x/y;
    return z;
}
