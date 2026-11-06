//Write a program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    
    printf("Enter temp is celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius* 9.0/5.0)+32; 
    printf("The temp in Fahrenheit is:%.2f\n",fahrenheit);
    return 0;   
}
