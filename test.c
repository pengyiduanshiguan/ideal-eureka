//������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Menu(){
	printf("===========\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("����������ѡ��\n");
	printf("===========\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {
	//����һ�������
	//rand��ʾ����һ�������������rand()%100
	//��ʾ����1��100�������
	int num = rand()%100+1;
	//��ʾ�û���������
	int tmp=0;
	while (tmp < 10) {
		printf("���������µ����֣�\n");
		int to_guess ;
		scanf("%d", &to_guess);
		//�Ƚ��û�����������������
		if (to_guess > num) {
			printf("���´���\n");
		}
		else if (to_guess < num) {
			printf("����С��\n");
		}
		else {
			printf("��ϲ���¶���\n");
			return;
		}
		tmp += 1;
	}
}
int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("�ټ�!\n");
			break;
		}else {
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}