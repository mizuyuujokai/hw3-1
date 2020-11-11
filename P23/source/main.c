#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum status { con, won, lost };

int diceroll(void);

int main(void)
{
	int sum;
	int mypoint;

	enum status gamestatus;

	srand(time(NULL));
	sum = diceroll();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;

	default:
		gamestatus = con;
		mypoint=sum;
		printf("Point is %d\n", mypoint);
		break;
	}

	while (gamestatus == con)
	{
		sum = diceroll();
		if (sum == mypoint)
		{
			gamestatus = won;
		}
		else 
		{
			if (sum == 7)
			{
				gamestatus = lost;
			}
		}
	}
	if (gamestatus == won)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player lose\n");
	}

	system("pause");
	return 0;
}

int diceroll(void)
{
	int d1,d2,worksum;

	d1 =1 + (rand() % 6);
	d2 =1 + (rand() % 6);
	worksum = d1 + d2;

	printf("Player rolled %d +%d = %d\n", d1, d2, worksum);
	return worksum;
}