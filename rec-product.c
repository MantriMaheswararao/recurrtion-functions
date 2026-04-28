#include <stdio.h>
int product(int n)
{
    if(n==0)
    {
        return 1;
    }
    int digit=n%10;
    if(digit%2==0&&digit!=0)
    {
        return digit * product(n/10);
    }
    else
    {
        return product(n/10);
    }
}
int main()
{
    int num=2468;
    printf("product of even digits=%d",product(num));
    return 0;
}