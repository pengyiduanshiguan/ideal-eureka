//�õݹ�ͷǵݹ�ķ�ʽʵ��n!
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ�
int main() {
	int n;
	scanf("%d", &n);
	int num = 1;
	for (int i = 1; i <= n; ++i) {
		num *= i;
	}
	printf("%d", num);
	system("pause");
	return 0;
}
//�ݹ�
int Factor(int n) {
	if (n <= 1)
		return 1;
	else
		return n*Factor(n - 1);
}
int main() {
	int i;
	scanf("%d", &i);
	printf("%d",Factor(i));
	system("pause");
	return 0;
}