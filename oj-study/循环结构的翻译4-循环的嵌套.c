#include<stdio.h>
#define L long
int func(int a, int b, int c)
{        //%edi    %esi   %edx
    int eb, ea;
    L rc;
    L r9 = c;
    L r8 = 0;
    if(a > 0)
    {
        L r10 = 10;
        L r11 = 1;
        eb = 1;
        do
        {
            rc = eb;
            if(a > 0)
            {
                do
                {
                    c = r10 + rc;
                    ea = c;
                    c >>= 31;
                    c = ea % r9;
                    ea = ea / r9;
                    if(c - 1 < 0) r8 ++;
                    rc ++;
 
                }while(b >= rc);
            }
            r11++;
            r10 += 10;
 
        }while(a >= r11);
    }
    ea = r8;
    return ea;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",func(a,b,c));
    return 0;
}