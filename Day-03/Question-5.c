#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("The Temp in celsius is:");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9.0/5.0) + 32;
    printf("The Temp in fahrenheit is: %.2f",fahrenheit);
    return 0;
}
