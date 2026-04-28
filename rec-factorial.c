#include<stdio.h>
int factorial(int i)
{
    if(i==0||i==1)
    {
        return 1;
    }
    return i*factorial(i-1);
}
int main()
{
int num=5;
printf("factorial=%d",factorial(num));
return 0;
}
