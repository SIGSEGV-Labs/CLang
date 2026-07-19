#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("\ngive me three num; ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b && a>c)
    {
        printf("\na = %d is largest num",a);
    }
    else if(b>a && b>c)
    {
        printf("\nb = %d is largest number",b);
    }
    else
    {
        printf("\nc = %d is largest number",c);
    }
   
    return 0;
}
