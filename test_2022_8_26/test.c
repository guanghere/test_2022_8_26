#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//	引用头文件定义的行和列

//	测试三子棋的逻辑



void menu()
{
	printf("**********************\n");
	printf("*******  1.play ******\n");
	printf("******* 0.voer  ******\n");
	printf("**********************\n");
}

void game()
{
	//存放下棋的数据
	char board[ROW][COL] = { 0 };

	//初始化棋盘为全空格
	InitBoard(board, ROW, COL);
	//传给↑	   棋盘, 行, 列
	//从game.c文件接收

	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//传给↑	   棋盘, 行, 列
	//从game.c文件接收

	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		//	下完棋打印一下
		DisplayBoard(board, ROW, COL);


		//电脑下棋
		computer_move(board, ROW, COL);//随机下棋,不用AI
		//	下完棋打印一下
		DisplayBoard(board, ROW, COL);

	}
}

void test()
{
	int input = 0;
	//因为是玩游戏,所以说和猜数字的逻辑差不多
	do
	{
		srand((unsigned int)time(NULL));
		//	time函数返回的是time_t,但程序需要的是整型
		//	需要强制类型转换成int

		menu();//菜单
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//游戏主体
			game();
			//printf("三子棋\n");
			break;

		case 0:
			printf("退出游戏！\n");
			break;

		default:
			printf("请重新选择!\n");
		}

	} while (input);
}


int main() {

	test();

	return 0;
}