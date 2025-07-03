//Write a program to find sum of 1 to N (sum of first N numbers) (with and without loop)
 #include<stdio.h>
int main()
{
    int i,n,sum=0;
   printf("Enter Number");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
    sum +=i;
   }
    printf("sum=%d",sum);
    return 0;
}