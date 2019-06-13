#include <stdio.h>
int main ()

{
    int cont = 1 ;
    char input ;

    while (cont)
    {
        printf (" Enter a character :");
        scanf ("%c" ,&input );

        if ( input== 'q')    
           cont= 0 ;
    
    }
    
    printf ("Exit!\n");
    return 0;
}