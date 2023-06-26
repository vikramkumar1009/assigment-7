//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
main()
{
    int n,p=0,c=1,next=0,i;
    printf("enter the Nth term to find fibonnaci series ");
    scanf("%d",&n);
     printf("1");
       for(i=0 ;i<n-1;i++)
    {
        next=c+p;
        p=c;
        c=next;
         printf("%d",next);
    }


    return 0;
}
