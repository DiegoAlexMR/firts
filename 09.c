#include<stdio.h>
#include<stdlib.h>

//F = C X 1.8 + 32


int main()
{
     int Celcius;
     double Fahrenheit;
     scanf("%d", &Celcius);
     printf(" Celcius = %d \n ", Celcius);
     
     Fahrenheit = Celcius * 1.8 + 32;
     printf("Fahrenheit = %2.lf\n", Fahrenheit);
     return 0;

}