//Write a program to find sum of x to y (both inclusive)
#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("enter x & y:");
    scanf("%d%d",&x,&y);
    sum = (y *(y + 1) / 2)-((x - 1)* x / 2);
    printf("sum=%d",sum);
    return 0;

}