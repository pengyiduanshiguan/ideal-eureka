//дһ���ݹ麯��DigitSum(n)������һ���Ǹ�������
//���������������֮�ͣ�
//���磬����DigitSum(1729)��
//��Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int DigitSum(n) {
	if (n < 10) {
		return n;
	}
	return n%10+DigitSum(n / 10);
}
int main() {
	int i;
	scanf("%d", &i);
	printf("%d\n", DigitSum(i));
	system("pause");
	return 0;
}