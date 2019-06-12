#include <stdio.h>
int main ()
{
    float price, total_price;
    int isMember, age, payment;

    printf("Input price and membership (0 or 1): ");
    scanf("%f %d", &price, &isMember);

    if (isMember == 1)
    {
        printf("Age:");
        scanf("%d", &age);
        
        if(age > 60) 
        {
            total_price = price*(100-20)/100;
        }
        else 
        {
            total_price = price*(100-10)/100;
        }
       
    }
    else
    {
        printf("payment option (0 or 1) : ");
        scanf("%d", &payment);

        if(payment==1)
        {
            total_price = price*(100-5)/100;
        }
        else
        {
            total_price = price;
        }
        
    }
    printf("The price is %f\n", total_price);
        return 0;
    }
    