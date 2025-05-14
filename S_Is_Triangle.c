#include <stdio.h>
#include <math.h>

int isValidTriangle(double a, double b, double c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculateArea(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (isValidTriangle(a, b, c))
    {
        printf("Valid\n");
        printf("%.6lf\n", calculateArea(a, b, c));
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}