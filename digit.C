#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value \n");
    scanf("%d",&a);
    int res=(a>=0)&&(a<=9);
    printf("%d is a digit i.e is : %d",a,res);
}
    