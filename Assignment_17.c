#include <stdio.h>
#include <math.h>


long fact(int n) 
{
    long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int i, n;
    int sign = 1;
    float sum = 0.0, x;

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
     
        int power = 2 * i - 1; 
        
        sum = sum + sign * pow(x, power) / fact(power);
        
        
        sign = -sign;
    }

    printf("The sum of the series for sin(%f) is: %f\n", x, sum);
    return 0;
}

