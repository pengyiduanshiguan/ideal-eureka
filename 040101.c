//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int mul(int n,int k) {
	if (k == 1) {
		return n;
	}
	return n*mul(n, k - 1);
	}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", mul(n, k));
	system("pause");
	return 0;
}