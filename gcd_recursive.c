/*
*   @author      : SRvSaha
*   Filename     : gcd_recursive.c
*   Timestamp    : 08:29 21-August-2016 (Sunday)
*   Description  : Euclidan Recursive way to find GCD of 2 numbers
*
*/
#include <stdio.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
int gcd(int a,int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int num1,num2;
    CIN(num1)
    CIN(num2)
    COUT(gcd(num1,num2))
    return 0;
}
