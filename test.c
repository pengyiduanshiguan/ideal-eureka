//猜数字
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Menu(){
	printf("===========\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("请输入您的选择：\n");
	printf("===========\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game() {
	//生成一个随机数
	//rand表示生成一个随机数，其中rand()%100
	//表示生成1到100的随机数
	int num = rand()%100+1;
	//提示用户输入数字
	int tmp=0;
	while (tmp < 10) {
		printf("请输入您猜的数字：\n");
		int to_guess ;
		scanf("%d", &to_guess);
		//比较用户输入的数字与随机数
		if (to_guess > num) {
			printf("您猜大了\n");
		}
		else if (to_guess < num) {
			printf("您猜小了\n");
		}
		else {
			printf("恭喜您猜对了\n");
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
			printf("再见!\n");
			break;
		}else {
			printf("您的输入有误!\n");
		}
	}
	system("pause");
	return 0;
}