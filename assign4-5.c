//Write a program to print 1 to N
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a Number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n %d",i);
        i++;
    }
    return 0;
}