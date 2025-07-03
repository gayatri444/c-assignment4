//Write a program to print even numbers from 100to 150 (or odd numbers)
#include<stdio.h>
int main()
{
    int i;
    printf("Even number of even 100 to 150:");
    
    for(i=100; i<=150; i+=2)
    
        printf("\n%d",i);
    
    return 0;
}