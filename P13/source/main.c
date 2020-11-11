#include<stdio.h>
#include<stdlib.h>

double Power(double, int);
void main(void)
{
	int k; double ans;
	printf("計算3.5的K次方?請輸入k=");
	scanf_s("%d", &k); ans = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
	system("pause");
}

double Power(double x, int n)
{
	int i; double Powerxn = 1;
	for (i = 1; i <= n; i++)
		Powerxn = Powerxn * x;
	return Powerxn;
}