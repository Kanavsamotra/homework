#include<stdio.h>
void main()
{
    int i,n,f;
    printf("Enter the number you want to add upto\n");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f+i;
        i++;
    }
    printf("The sum of all the numbers is: %d",f);
}