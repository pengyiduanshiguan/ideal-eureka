#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu() {
	printf("==============\n");
	printf(" 1.��ʼ��Ϸ\n");
	printf(" 2.�˳���Ϸ\n");
	printf("����������ѡ��\n");
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
	//�������������
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
	printf("�������\n");
	while (1) {
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//��������Ƿ�Ϸ�
		if (row < 0 || row >= MAX_ROW ||
			col < 0 || col >= MAX_COL) {
			printf("����������������������\n");
			continue;
		}
		else if (chess_board[row][col] != ' ') {
			printf("���������ѱ�ռ�ã�����������\n");
			continue;
		}
		else {
			chess_board[row][col] = '*';
			break;
		}
	}
	return;
}
//����������ˣ�����1�����򷵻�0
int IsFull() {
	for (int row=0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[row][col] != ' ')
				return 0;
		}
	}
	return 1;
}
//����ֵ����ʤ����
//*�������
//x�������
//p�������
//' '��������δ��
int judgement(){
	while (1) {
		//�ж���
		for (int row = 0; row < MAX_ROW; ++row) {
			if (chess_board[row][0] == chess_board[row][1]
			   && chess_board[row][0] == chess_board[row][2])
			   return chess_board[row][0];
			}
		//�ж���
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[0][col] == chess_board[1][col]
				&& chess_board[0][col] == chess_board[2][col])
				return chess_board[0][col];
		}
		//�ж����Խ���
		if (chess_board[0][0] == chess_board[1][1]
			&& chess_board[0][0] == chess_board[2][2])
			return chess_board[0][0];
		//�жϷ��Խ���
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
	printf("��������\n");
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
	printf("�����������\n");
}
void Game() {
	//��ʼ������
	Init();
	char winner = ' ';
	while (1) {
		//��ӡ����
		print();
		//�������
		playmove();
		//�ж�ʤ��
		winner=judgement();
		if (winner != ' ') {
			break;
		}
		//��������
		cmpmove();
		//�ж�ʤ��
		winner=judgement();
		if (winner != ' ') {
			break;
		}
		//��ӡ����
		print();
	}
	if (winner == '*') {
		printf("��Ӯ��\n");
	}
	else if (winner == 'x') {
		printf("������\n");
	}
	else if (winner == 'p') {
		printf("���͵��԰�����\n");
	}
	else {
		printf ("������˼�������ô���\n" );
	}
}
int main() {
	while (1){
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 2) {
			printf("�ټ�\n");
			break;
		}
		else {
			printf("������������\n");
		}
	}
	system("pause");
	return 0;
}