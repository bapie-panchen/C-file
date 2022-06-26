#include<stdio.h>
int func(int n,int m)
{
    int a,d;//a in %eax,d in %edx
    long l = 0,i = 1; //i in %rcx,l in %r8
    if(n > 0)
      for(i;i <= n;i ++)
         {
             d = i;
             a = i;
             d >>= 31;
             d = a%m;
             a = a/m;
             a = l+i;
             if(d == 0)
             l = a;
         }
         a = l;
         return a;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",func(n,m));
    return 0;
}
