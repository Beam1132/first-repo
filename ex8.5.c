#include <stdio.h>
int main ()
{
    int a ;
        printf ("Input number :");
        scanf ("%d",&a);
    while ( a != 0)
    {
        if (a%2 == 0)
        printf("Even\n");
        else
        printf("Odd\n");

        printf ("Input number :");
        scanf ("%d",&a);

    }
    return 0 ;
}