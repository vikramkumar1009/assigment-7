//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
main()
{
    int n,r,s,x;
    printf("armstrong number are \n");
    for(n=1;n<=1000;n++){
        s=0;
        x=n;
        while(x!=0)
        {

            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            printf("%d \n",n);
    }
      return 0;

}
