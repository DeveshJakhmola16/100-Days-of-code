//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;
    // Input coefficients
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) 
    {
        // Real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0lf, %.0lf\n", root1, root2);
    } 
    else if (discriminant == 0) 
    {
        // Real and same roots
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0lf\n", root1);
    } 
    else 
    {
        // Complex roots
        printf("Roots are complex\n");
    }

    return 0;
}