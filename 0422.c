//��һ��һά����,�ڷ�10��ѧ���ɼ�,дһ������,��������
//���ô˺���ʱ,�������߷�,��ͷ�,ƽ����
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

