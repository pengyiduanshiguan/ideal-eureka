//递归和非递归分别实现求第n个斐波那契数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//递归
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
//非递归
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