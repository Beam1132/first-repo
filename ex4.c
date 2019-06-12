#include <stdio.h>
int main ()
{
    float num1,num2,ans ;
    char c ;
    printf("Enter 2 numbers:");
    scanf("%f %f" , &num1 , &num2 );
    printf("plus (p)\n");
    printf("minus (m)\n");
    printf("multiply (u)\n");
    printf("divide (d)\n");
    scanf(" %c", &c);
    switch (c)
{
    case '+' :
    ans = num1+num2;
    printf("the answer is: %f\n",ans);
    break;

     case '-' :
    ans = num1-num2;
    printf("the answer is: %f\n",ans);
    break;
    
     case '*' :
    ans = num1*num2;
    printf("the answer is: %f\n",ans);
    break;

     case '/' :
    ans = num1/num2;
    printf("the answer is: %f\n",ans);
    break;

    default:
    printf("Error\n");
}

    return 0;
}