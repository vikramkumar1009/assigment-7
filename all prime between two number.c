//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
main()
{
    int a,b,n,i,flag=0;
    printf("enter any two number to print all prime number betweeen two number ");
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
        printf(" %d ",n);

    }
    return 0;
}
