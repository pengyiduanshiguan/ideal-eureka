//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ݹ�
int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
int main() {
	int n ;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}
//�ǵݹ�
int main() {
	int n;
	int num = 0;
	int a = 1;
    int b = 1;
	scanf("%d", &n);
	if (n <= 2) {
		printf("1");
	}
	else{
		for (int i = 3; i <= n; ++i) {
			num = a + b;
			b = a;
			a = num;
		}
		printf("%d", num);
	}
	system("pause");
	return 0;
}