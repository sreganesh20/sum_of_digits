#include<stdio.h>
int sod(int dig)
{
    if(dig==0)
    {
        return 0;
    }
    return (dig%10 + sod(dig/10));
}
int main()
{
    int digit,sum;
    printf("Enter a number: ");
    scanf("%d",&digit);
    sum=sod(digit);
    printf("Sum of the digits %d is %d",digit,sum);
}
