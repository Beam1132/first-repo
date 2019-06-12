#include <stdio.h>
int main ()
{
    float num1,num2,num3 ;
    printf("Enter three number:");
    scanf("%f %f %f" ,&num1,&num2,&num3);

    if (num1<num2 && num1<num3)
    {
        printf ("Min of three number is: %f",num1);
        if (num2<num3)
        {
            printf ("Max of three number is: %f",num3);

        }
        else 
        {
            printf ("Min of three number is:%f",num2);
        }
    }
    if (num2<num1 && num2<num3)
    {
        printf ("Min of three number is :%f",num2);
        if (num1<num3)
        {
            printf ("Max of three number is:%f",num3);

        }
        else 
        {
            printf ("Min of three number is:%f",num1);
        }
    }
    if (num3<num1 && num3<num2)
    {
        printf ("Min of three number is :%f",num3);
        if (num1<num2)
        {
            printf ("Max of three number is:%f",num2);

        }
        else 
        {
            printf ("Min of three number is:%f",num1);
        }
    }  
    return 0;
}