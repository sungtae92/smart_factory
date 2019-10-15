#include<stdio.h>

int main()
{
	/*
	자판기 프로그램
	동전 투입 : 10000원
	1.콜라 2.사이다 3.커피 4.쥬스
	커피 크기 (1.Tall 2.Grande) : 
	Tall 사이즈 커피가 나왔습니다.
	*/
	int pick;
	int size;
	int money;

	printf("===========================================================================\n");
	printf("======================        자판기 프로그램        ======================\n");
	printf("===========================================================================\n");
	printf("1.콜라(700원), 2.사이다(600원), 3.커피(1500원, 2000원), 4.쥬스(1000원)\n");
	printf("\n  동전 투입 : ");
	scanf("%d", &money);
	printf("  메뉴 선택 : ");
	scanf("%d", &pick);
	printf("===========================================================================\n");

	if (money > 600)
	{
		if (pick == 1)
		{
			money = money - 700;
			printf("콜라가 나왔습니다.\n");
		}
		else if (pick == 2)
		{
			money = money - 600;
			printf("사이다가 나왔습니다.\n");
		}
		else if (pick == 3)
		{
			printf("커피 크기 : 1.Tall(1500원), 2.Grande(2000원) : ");
			scanf("%d", &size);
			if (size == 1)
			{
				money = money - 1500;
				printf("Tall 사이즈 커피가 나왔습니다.\n");
			}
			else if (size == 2)
			{
				money = money - 2000;
				printf("Grande 사이즈 커피가 나왔습니다.\n");
			}
			else
			{
				printf("err\n");
			}
		}
		else if (pick == 4)
		{
			money = money - 1000;
			printf("쥬스가 나왔습니다.\n");
		}
		else
		{
			printf("err");
		}
		printf("잔돈은 %d원 입니다.\n", money);
		printf("===========================================================================\n");
	}
	else
	{
		printf("금액이 부족합니다.\n");
		printf("===========================================================================\n");
	}
	
	getch();

	return 0;
}
