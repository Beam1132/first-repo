#include <stdio.h>
int main ()
{
    float price, total_price;
    int isMember;

    printf("Input price and membership (0 or 1): ");
    scanf("%f %d", &price, &isMember);

    if (isMember)
    {
        total_price = price*(100-10)/100;
    }
    else
    {
        total_price = price;
    }
    printf("The price is: %f", total_price);
    return 0;

}