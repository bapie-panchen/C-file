#include<stdio.h>
int func(int x)
{         
    if(x <= 0) return 1;
    return func(x >> 1) + x + 3;
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", func(x));
    return 0;
}