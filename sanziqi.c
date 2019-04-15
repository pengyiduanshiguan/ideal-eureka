#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu() {
	printf("==============\n");
	printf(" 1.开始游戏\n");
	printf(" 2.退出游戏\n");
	printf("请输入您的选择\n");
	printf("==============\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
#define MAX_ROW 3
#define MAX_COL 3
char chess_board[MAX_ROW][MAX_COL];
void Init() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			chess_board[row][col] = ' ';
		}
	}
	//设置随机数种子
	srand((unsigned int)time(0));
}
void print() {  
	for (int row = 0; row < MAX_ROW; ++row) {
		printf("| %c | %c | %c |\n", chess_board[row][0],chess_board[row][1],
			chess_board[row][2]);
		printf("|---|---|---|\n");
	}
	system("pause");
}
void playmove() {
	printf("玩家落子\n");
	while (1) {
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//检查落子是否合法
		if (row < 0 || row >= MAX_ROW ||
			col < 0 || col >= MAX_COL) {
			printf("您的输入有误，请重新输入\n");
			continue;
		}
		else if (chess_board[row][col] != ' ') {
			printf("您的输入已被占用，请重新输入\n");
			continue;
		}
		else {
			chess_board[row][col] = '*';
			break;
		}
	}
	return;
}
//如果棋盘满了，返回1，否则返回0
int IsFull() {
	for (int row=0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[row][col] != ' ')
				return 0;
		}
	}
	return 1;
}
//返回值代表胜利者
//*代表玩家
//x代表电脑
//p代表和棋
//' '代表棋盘未满
int judgement(){
	while (1) {
		//判断行
		for (int row = 0; row < MAX_ROW; ++row) {
			if (chess_board[row][0] == chess_board[row][1]
			   && chess_board[row][0] == chess_board[row][2])
			   return chess_board[row][0];
			}
		//判断列
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[0][col] == chess_board[1][col]
				&& chess_board[0][col] == chess_board[2][col])
				return chess_board[0][col];
		}
		//判断正对角线
		if (chess_board[0][0] == chess_board[1][1]
			&& chess_board[0][0] == chess_board[2][2])
			return chess_board[0][0];
		//判断反对角线
		if (chess_board[0][2] == chess_board[1][1]
			&& chess_board[0][2] == chess_board[2][0])
			return chess_board[0][2];
	}
	if (IsFull()) {
		return 'p';
	}
	return ' ';
}
void cmpmove() {
	printf("电脑落子\n");
	while (1) {
		int row = rand() % 3;
		int col = rand() % 3;
	    if (chess_board[row][col] != ' ') {
			continue;
		}
		else {
			chess_board[row][col] = 'x';
			break;
		}
	}
	printf("电脑落子完毕\n");
}
void Game() {
	//初始化棋盘
	Init();
	char winner = ' ';
	while (1) {
		//打印棋盘
		print();
		//玩家落子
		playmove();
		//判断胜负
		winner=judgement();
		if (winner != ' ') {
			break;
		}
		//电脑落子
		cmpmove();
		//判断胜负
		winner=judgement();
		if (winner != ' ') {
			break;
		}
		//打印棋盘
		print();
	}
	if (winner == '*') {
		printf("您赢了\n");
	}
	else if (winner == 'x') {
		printf("您输了\n");
	}
	else if (winner == 'p') {
		printf("您和电脑半斤八两\n");
	}
	else {
		printf ("不好意思，代码敲错了\n" );
	}
}
int main() {
	while (1){
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
			printf("再见\n");
			break;
		}
		else {
			printf("您的输入有误！\n");
		}
	}
	system("pause");
	return 0;
}