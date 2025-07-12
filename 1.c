#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int cishu = 5;
	while (cishu) 
	{
		printf("请输入一个整数>:");
		scanf("%d", &guess);
		if (r > guess) {
			printf("猜小了\n");
			cishu--;
			printf("还有%d次机会", cishu);
		}
		else if (r < guess) {
			printf("猜大了\n");
			cishu--;
			printf("还有%d次机会", cishu);
		}
		else if (guess == r) 
		{
			printf("猜对了！\n");
			break;
		}

	}
	if (cishu == 0)
		printf("游戏失败×\n");
}

void menu()
{
	printf("************************\n");
	printf("******* 1.玩游戏 *******\n");
	printf("******* 0.退出 *********\n");
	printf("************************\n");
}

int main() {
	int input=0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入错误！\n");
			break;
		}
	} while (input);
	return 0;
}