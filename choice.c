#include <stdio.h>
int main ()
{
    
    float x,y,price_discount;
    printf("Input price of an item: ");
    scanf("%f", &x);
    printf("Input the discount rate: ");
    scanf("%f", &y);
    price_discount = (x-(x*(y/100)));
    printf("The discounted price of the item is%f\n",price_discount);
    return 0;


    }