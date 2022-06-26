#include<stdio.h>
void func1(int *x,int *y)
{
    int t = *x;
    *x = *x + *y;
    *y = t - *y;
}
int func2(int x, int y)
{
    func1(&x, &y);
    return x*x + y*y;
}
void main()
{
	 int m,n;
     scanf("%d%d", &m, &n);
     printf("%d\n", func2(m, n));
}