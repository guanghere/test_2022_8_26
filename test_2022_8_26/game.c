#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//			����		����				��		��	
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
//	InitBoard	�����ǰ��к��г�ʼ��Ϊ	�ո�


//			����		����				��		��	
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

		//��ӡ�ָ����
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

//	�������
//	��������
void player_move(char board[ROW][COL], int row, int col)
{
	//	�洢����
	int x = 0, y = 0;
	printf("�������\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����
			//�ж���û�б�ռ��		
			//��һ����Ϊ������±��0��ʼ,��Ҳ���֪��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("�����걻ռ��,����������\n");
			}

		}
		else
		{
			printf("�����������,����������!\n");
		}
	}
}


//��������

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	//	��������
	printf("��������:>\n");
	//	�Ͳ�����һ��,ֻ�ܱ�����һ��,��Ȼ���ֻ�һֱ����
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