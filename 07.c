#include<stdio.h>
#include<stdlib.h>

int main()
{
     double height, windth;
     double area;
     printf("Enter height : ");
     scanf("%lf", &height);
     printf("Enter windth : ");
     scanf("%lf", &windth);
     area = height * windth;
     printf("This area of this triangular is = %lf", area);
     return 0;
}
