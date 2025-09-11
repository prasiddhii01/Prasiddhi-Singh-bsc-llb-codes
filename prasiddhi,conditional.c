//program to find maximum of 2 numbers using conditional operator.
//developed by Prasiddhi  Date: 11/09/2025
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf ("%d%d",&a,&b);
    printf("the maximum number of %d and %d is = %d",a,b,a>b?a:b);
}
