#include<stdio.h>
int func(int a[],int n)
{
	int i,fan = 0;
		for (i = 0;i < n;i ++)
			fan += a[i];
		return fan;
	return fan;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i = 0;i < n;i++)
        scanf("%d",&a[i]);
    printf("%d\n",func(a,n));
    return 0;
}