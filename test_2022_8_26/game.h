#pragma once
#include<stdio.h>
#include<stdlib.h>	//	srand
#include<time.h>	//	time

#define ROW 3		//	��
#define COL 3		//	��

//�ļ��л���ֺܶ��к���,ֱ����ͷ�ļ�����,�����������ʹ�úͺ����޸�

//	��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//	��				����				��		��


//	��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//	��				����				��		��


//	�������
void player_move(char board[ROW][COL], int row, int col);


//	��������
void computer_move(char board[ROW][COL], int row, int col);