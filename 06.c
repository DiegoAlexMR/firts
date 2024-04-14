#include<stdio.h>
#include<stdlib.h>

int main ()
{
     int age;
     int year;

     scanf("%d", &age);
     scanf("%d", &year);

     printf("i born in %d \n", year - age);
     return 0;
}