#include<stdio.h>
int odd(int m,int n)
{
    if(m>n)
    return 0;
    if(m%2!=0)
    {
         return 1 + odd(m+1,n);
    }
    else
    {
        return odd(m+1,n);
    }
}
int main()
{
    int m=1,n=10;
   int res=odd(m,n);
   printf("odd numbers count=%d",res);
}
    