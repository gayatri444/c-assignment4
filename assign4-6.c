// write a program to print x to y (both inclusive)
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter a x & y :");
    scanf("%d%d",&x,&y);
    while(x<=y)
    {
        printf("%d",x);
        x++;
    }
    return 0;
    
}