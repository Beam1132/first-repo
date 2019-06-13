#include <stdio.h>
int main ()
{
    int num,x, i=1;
    float sum = 0;
    printf ("Number of Inputs:");
    scanf("%d", &num);

    while(i<=num)
    {

        printf("Input a number:");
        scanf("%d", &x);

        sum = sum +x;

        i++; //i=i+1
    }
    printf("An average is %f", sum/num);
    return 0;  
}