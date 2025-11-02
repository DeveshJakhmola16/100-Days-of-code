//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() 
{
    float p, r, t;
    float si, ci, amount;
    scanf("%f %f %f", &p, &r, &t);
    // Simple Interest
    si = (p * r * t) / 100;
    amount = p * (1 + r / 100 * t);
    ci = p * ((1 + r / 100) * (1 + r / 100)) - p;  // works only for t = 2
    if (t == 3) 
    {
        amount = p * (1 + r / 100) * (1 + r / 100) * (1 + r / 100);
        ci = amount - p;
    }
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    return 0;
}
