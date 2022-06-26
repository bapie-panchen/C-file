#include<stdio.h>
long func(int n)
 {
    long  m,k,l = 0,b;//m in %edx,k in %ecx,l in %rax,b in %rsi
    if(n > 0)
    {
        m = 1;
        k = 1;
    do
    {
        b = m;
        k = k * b;
        l = l + k;
        m += 1;
      }while(n >= m);
    }
    return l;
 }
int main()
{
    int n;
    scanf("%d",&n);
    long result = func(n);
    printf("%ld\n",result);
    return 0;
}