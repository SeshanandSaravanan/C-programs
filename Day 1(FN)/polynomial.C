#include<stdio.h>
#include<math.h>

int main() {
    int degree,i;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    int coefficients[degree + 1];
    
    printf("Enter the coefficients: ");
    for (i = 0; i <= degree; i++) {
        scanf("%d", &coefficients[i]);
    }

    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    double result = 0.0;
    for (i = 0; i <= degree; i++) {
        result += coefficients[i] * pow(x, degree - i);
    }

    printf("P(%lf) = %lf\n", x, result);

    return 0;
}