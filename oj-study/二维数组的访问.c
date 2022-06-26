#include<stdio.h>
void func(int m, int n, int* a)
{   //%edi   //%esi   //%edx
    for(int i = 0;i < m;i ++)
    {
        int t = 0;
        for(int j = 0;j < n;j ++)
        {
            *(a + i * n + j) = t;
            t += i;
        }
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int a[m][n];
    func(m,n,*a);//指向一维数组
    int sum = 0;
    for(int i = 0;i < m;i ++)
        for(int j = 0;j < n;j ++)
            sum += a[i][j];
    printf("%d\n",sum);
    return 0;
}