#include<stdio.h>
#include<stdlib.h>

long fac(long num);

int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d!=%1d\n", i, fac(i));
	}
	system("pause");
	return 0;
}

long fac(long num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return(num * fac(num - 1));
	}
}