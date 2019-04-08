//写一个递归函数DigitSum(n)，输入一个非负整数，
//返回组成它的数字之和，
//例如，调用DigitSum(1729)，
//则应该返回1 + 7 + 2 + 9，它的和是19
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