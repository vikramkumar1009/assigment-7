//Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
main()
{
    int a,b,hcf,i;
    printf("enter two number to find  prime or co-prime ");
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
  for(i=1;i<=min;i++)
  {
      if(a%i==0 && b%i==0)
        hcf=i;
  }
  if(hcf==1)
    printf("number found in co-prime");
  else
    printf("number not fount in co-prime");
  return 0;

}
