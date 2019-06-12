#include <stdio.h>
int main ()
{
    float num1 , num2 , num3 ;
    printf ("Input three number :");
    scanf("%f %f %f",&num1 ,&num2 ,&num3);

    if(num1==num2 && num2==num3)
    {
        printf("all same");
    }
    else if (num1!=num2 && num1!=num3 && num3!=num2)
    {
        printf("all different");
    }
    else
    {
        printf("neither");
    }
    return 0;
}