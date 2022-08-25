#pragma once
#include<stdio.h>
#include<stdlib.h>	//	srand
#include<time.h>	//	time

#define ROW 3		//	行
#define COL 3		//	列

//文件中会出现很多行和列,直接在头文件定义,方便接下来的使用和后期修改

//	初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//	传				棋盘				行		列


//	打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//	传				棋盘				行		列


//	玩家下棋
void player_move(char board[ROW][COL], int row, int col);


//	电脑下棋
void computer_move(char board[ROW][COL], int row, int col);