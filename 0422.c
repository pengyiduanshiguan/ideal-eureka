//有一个一维数组,内放10个学生成绩,写一个函数,当主函数
//调用此函数时,能求出最高分,最低分,平均分
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

float Max = 0, Min = 0;

int main() {
	float average(float a[], int n);
	float ave, score[10];
	printf("Plese enter 10 scores;\n");
	for (int i = 0; i < 10; ++i) {
		scanf("%f", &score[i]);
	}
	ave = average(score, 10);
	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
	system("pause");
	return 0;
}

float average(float a[],int n) {
	float aver, sum = a[0];
	Max = Min = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] > Max)
			Max = a[i];
		else if (a[i] < Min)
			Min = a[i];
		sum += a[i];
	}
	aver = sum / n;
	return aver;
}

