#include <stdio.h>
int main ()
{
    char s,m,y,n ;
    int k;

    printf("Status of user single(s) or married(m)");
    scanf(" %c" ,&s );
    if(s=='s')
    {
        printf("Do you girlfriend or boyfriend (y/n) : ");
        scanf(" %c", &y);
        if (y=='y')
        
            printf("You are not alone");
        
        else if (y=='n')
        
            printf("Let me hug you");
        
            else
            printf("Invalid marital status");
    
    }
    else if (s=='m')
    {
        printf("How many kids do you have");
        scanf("%d",&k);
        if(k>0)
        {
            printf("GG");
        }
        else if (k<=0)
        {
            printf("You can ask me for advices");
        }
        else
    
            printf("Invalid marital status");
    }
    else
    
            printf("Invalid marital status");

    printf("\nThank you for your information");
    
}