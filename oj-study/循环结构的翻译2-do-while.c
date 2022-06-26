#include<stdio.h>
int func(int n)
{
    int a = 0,c,d;//a in %eax,d in %edx,c in %ecx.
    while(1)
    {
        d = n - 1;
        c = d;
        c *= n;
        n -= 2;
        n *= c;
        a += n;
        if(d <= 0)
            break;
        n = d;
    }
    return a;
}




void main()
{
   int n;
   scanf("%d",&n);
   printf("%d\n",func(n));
   return 0;
}
