#include<stdio.h>
#include<stdlib.h>

int main()
{
     double a = 1.4;
     double b = 14.5;

     int temp;
     printf("a=%3.lf\n",a);
     printf("b=%3.lf\n",b);
     
     temp = a;
     a=b;
     b=temp;
     printf("a=%3.lf\n", a);
     printf("b=%3.lf\n",b);
     return 0;
}