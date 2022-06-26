#include<stdio.h>
int func1(int m,int n)
{
    return  (m + n-3) * (m + n);
}
int func2(int m,int n)
{
    n += 2;
    m += 1;
    return func1(m,n);
}
int main()
{
    int m,n;
    scanf("%d%d", &m,&n);
    printf("%d\n",func2(m,n));
    return 0;
}