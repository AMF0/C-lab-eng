#include <stdio.h>
#include <math.h>

int main(void)
{
    //take user input
    double a, b, c;
    printf("Enter the coeff of the equation (X^2 , x , c ) respectivly: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    //substitute in the quadratic formula
    double x1 = (-b + pow((pow(b , 2)) - 4 * a * c), 2)/(2 * a);
    double x2 = (-b - pow((pow(b , 2)) - 4 * a * c, 0.5))/(2 * a);
    //print the resluts
    //printf("%d\n", b);
    printf("The roots of the quadratic equation that have coeff %lf, %lf, %lf, are:\n X1 = %lf\n X2 = %lf ", a, b, c, x1, x2);
}
