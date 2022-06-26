#include<stdio.h>
void func(int *a,int n)
{
    if (n <= 2)
        return;
    for (int i = 2;i < n ;i++)
         a[i] = a[i - 1] + a[i - 2];   
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    a[0] = a[1] = 1;
    func(a,n);
    for (i = 0;i < n;i++)
        sum += a[i];
    printf("%d\n",sum);
    return 0;
}