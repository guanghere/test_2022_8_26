#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//	����ͷ�ļ�������к���

//	������������߼�



void menu()
{
	printf("**********************\n");
	printf("*******  1.play ******\n");
	printf("******* 0.voer  ******\n");
	printf("**********************\n");
}

void game()
{
	//������������
	char board[ROW][COL] = { 0 };

	//��ʼ������Ϊȫ�ո�
	InitBoard(board, ROW, COL);
	//������	   ����, ��, ��
	//��game.c�ļ�����

	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//������	   ����, ��, ��
	//��game.c�ļ�����

	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		//	�������ӡһ��
		DisplayBoard(board, ROW, COL);


		//��������
		computer_move(board, ROW, COL);//�������,����AI
		//	�������ӡһ��
		DisplayBoard(board, ROW, COL);

	}
}

void test()
{
	int input = 0;
	//��Ϊ������Ϸ,����˵�Ͳ����ֵ��߼����
	do
	{
		srand((unsigned int)time(NULL));
		//	time�������ص���time_t,��������Ҫ��������
		//	��Ҫǿ������ת����int

		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//��Ϸ����
			game();
			//printf("������\n");
			break;

		case 0:
			printf("�˳���Ϸ��\n");
			break;

		default:
			printf("������ѡ��!\n");
		}

	} while (input);
}


int main() {

	test();

	return 0;
}