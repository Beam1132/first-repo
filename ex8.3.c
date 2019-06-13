#include <stdio.h>
int main ()
{
    int a,b,sum=0,k,x,l=1 ;

    printf ("Enter 2 numbers :");
    scanf ("%d %d",&a,&b);
    if (a>b) 
    {
        k = a ; 
        a = b ; 
        b = k ;
    }
  
        b-- ; 
        a++ ;
        x = (b-a)+1  ;

    for ( l ; l<=x ;l++)
        {
          sum += a ;
          a++  ;

        }

   
    printf ("The sum between 2 numbers is : %d",sum);
    
}