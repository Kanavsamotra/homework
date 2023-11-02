#include<stdio.h>
void main()
{
    int i,n,f;
    f=i=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The factorial of %d is: %d",n,f);
}