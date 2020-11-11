#include<stdio.h>
#include<stdlib.h>

int maximun(int x, int y, int z);

int main(void)
{
	int no1;
	int no2;
	int no3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &no1, &no2, &no3);
	printf("maxmimum is:%d\n", maximum(no1, no2, no3));
	system("pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}

	return max;
}