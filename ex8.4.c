#include <stdio.h>
int main ()
{
    int a,b,i=0,sum=0 ;
    printf("Input number :");
    scanf("%d" ,&a);
    printf("Table length :");
    scanf("%d",&b);
    printf("Multiplication of :%d\n",a);
    
    for(i=1;i<=b;i++){
        sum = a*i;
        printf("%d x %d = %d \n",a ,i ,sum);
    }
}