#include <stdio.h>
int main ()
{
    int num,x, i;
    float sum = 0;
    printf ("Number of Inputs:");
    scanf("%d", &num);

    //while(i<=num)
    for(i=1;i<=num;i++)
    {

        printf("Input a number:");
        scanf("%d", &x);

        sum = sum +x;

        //i++; //i=i+1
    }
    printf("An average is %f", sum/num);
    return 0;  
}