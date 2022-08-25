#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//			定义		棋盘				行		列	
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//	InitBoard	作用是把行和列初始化为	空格


//			定义		棋盘				行		列	
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++) 
	{

		int j = 0;
		for (j = 0; j < col; j++) 
		{
			printf(" %c ",board[i][j]);
			
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//打印分割的行
		if (i < row - 1)
		{
			for (j = 0; j < col ; j++) 
			{

				printf("---");
				if (j < col - 1) 
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//	玩家下棋
//	输入坐标
void player_move(char board[ROW][COL], int row, int col)
{
	//	存储坐标
	int x = 0, y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断有没有被占用		
			//减一是因为数组的下标从0开始,玩家并不知道
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("该坐标被占用,请重新输入\n");
			}

		}
		else
		{
			printf("坐标输入错误,请重新输入!\n");
		}
	}
}


//电脑下棋

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	//	两个坐标
	printf("电脑下棋:>\n");
	//	和猜数字一样,只能被调用一次,不然数字会一直更新
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}