#include<stdio.h>
int func(int n)
{
    int ea = -1;
    if(n < 0 || n > 80) return ea;
    ea = 7 + n;
    if(n < 0) 
      n = ea;
    n >>= 3;
    n -= 6;
    ea = 1;
    if(n < 0 || n > 4)
    {
        return ea;
    }
    switch(n)
    {
        case 0 :
            ea = 2;
            break;
        case 1 :
            ea= 3;
            break;
        case 2 :
            ea = 4;
            break;
        case 3 :
            ea = 5;
            break;
        case 4 :
            ea = 5;
        break;
    }
    return ea;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",func(n));
    return 0;
}