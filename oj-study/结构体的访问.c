#include<stdio.h>
struct A
{
	long a,b,c,d;
};
long func(struct A* aa)
{
	return (aa->a + aa->b + aa->c) * aa->d;
}
void main()
{
   struct A aa;
    int m, n;
    scanf("%d%d",&m,&n);
    aa.a = m;
    aa.b = m + n;
    aa.c = n;
    aa.d = m * n;
    printf("%ld", func(&aa));
}