#include<stdio.h>
#include<stdlib.h>

int main ()
{
     int num1, num2, num3;
     double result;

     printf("Enter num1 ");
     scanf("%d", &num1);
     printf("Enter num2 ");
     scanf("%d", &num2);
     printf("Enter num3 ");
     scanf("%d", &num3);

     result = (num1 + num2 +num3)/5.0;
     printf("result = %2.lf", result);

     return 0;
     
}