//Write a program to calculate HCF of two numbers
#include<stdio.h>
main()
{
    int a,b,i,hcf=1;
    printf("enter two number to find  Hcf ");
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
  for(i=1;i<=min;i++)
  {
      if(a%i==0 && b%i==0)
        hcf=i;
  }
     printf("Hcf is %d",hcf);
  return 0;
}
