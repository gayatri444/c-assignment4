//Write a program to print even numbers from 1 to 10 (or odd numbers)
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Number 1 to 10 even:");
    
    for(i=2; i<=10; i+=2)
    
        printf("\n%d",i);
    
    return 0;
}