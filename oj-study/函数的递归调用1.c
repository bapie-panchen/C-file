#include<stdio.h>
int func(int x)
{
	if (x <= 1)
		return 1;
	else
		return func(x - 1) + x * x;
}
int main()
{
	int x;
	scanf(" %d", &x);
	printf("%d\n", func(x));
	return 0;
}