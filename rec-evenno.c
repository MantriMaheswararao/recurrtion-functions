#include<stdio.h>
void output(int i)
{
    if(i<-7)
    {
        return ;
    }
    if(i%2==0)
    {
        printf("i=%d\n",i);
     }
     output(i-1);
    
}
int main()
{
    output(4);
    return 0;

}