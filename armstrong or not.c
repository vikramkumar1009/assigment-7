//Write a program to check whether a given number is an Armstrong number
//or not
#include<stdio.h>
main()
{
    int a,x,s=0,r;
    printf("Enter any number to check whether the given number Armstrong number or not \n");
    scanf("%d",&x);
      a=x;

        while(x>0){
            r=x%10;
            s=(r*r*r)+s;
            x=x/10;
             }
        if(a==s)
            printf("found armstrong ");
            else
            printf("not found armstrong");
          return 0;

}
