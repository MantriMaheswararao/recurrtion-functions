#include<stdio.h>
int add(int i,int n, int sum)
{
    if(i>n)
    {
        return sum;
    }
    sum=sum+i;
    add(i+1,n,sum);
}
int main()
{
    int  m,n;
    printf("enter the start and end values");
    scanf("%d%d",&m,&n);
    int res=add(m,n,0);
    printf("the sum is %d",res);
}
    