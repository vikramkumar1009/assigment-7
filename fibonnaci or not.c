/*Write a program to check whether a given number is there in the Fibonacci
series or not*/
#include<stdio.h>
main()
{
    int n,p=0,c=1,next=0,i;
    printf("enter the Nth term to find fibonnaci series ");
    scanf("%d",&n);

  for(i=0;1;i++)
  {
      next=p+c;
      p=c;
      c=next;
      if(next == n)
  {
      printf("number found in fibonacci series ");
      break;
  }
  else if(next>n)
  {
      printf("number is not found in fibonnaci series");
      break;
  }

  }
  return 0;
}
