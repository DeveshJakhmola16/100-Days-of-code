//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() 
{
    float cost, sellingprice, percent;
    scanf("%f %f", &cost, &sellingprice);
    if (sellingprice > cost) 
    {
        percent = ((sellingprice - cost) / cost) * 100;
        printf("Profit %f%%\n", percent);
    }
    else if (sellingprice < cost) 
    {
        percent = ((cost - sellingprice) / cost) * 100;
        printf("Loss %f%%\n", percent);
    }
    else 
    {
        printf("No Profit No Loss\n");
    }
   return 0;
}
