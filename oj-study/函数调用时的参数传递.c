#include<stdio.h>
long func(int a, int b, int c, int d, int e, int f, int g, int h)
{
    //long ra;
    //d = d + c;
    //a = a + b;
    //b = d+c;
    //b = (a+b) * (d+c);
    //f = f + e;
    // b = (a + b) * (d + c) * (f+e);
    //ra = (g + h) * (a + b) * (d + c) * (f + e);
    return (g + h) * (a + b) * (d + c) * (f + e);

}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%ld\n", func(a, b, a + b, a - b, a * a, b * b, a * b, a * a - b));
    return 0;
}