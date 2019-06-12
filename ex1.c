#include <stdio.h>
int main ()

{
    float num1,num2 ;
    printf(" Enter 2 number:");
    scanf("%f %f" ,&num1,&num2);
    
        if (num1>num2)
       
           printf("larger number is: %f\n",num1 );
       
        else if (num1<num2)
        printf("larger number is: %f\n",num2 );

         
        return 0;
}
