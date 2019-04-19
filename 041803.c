//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	scanf("%d", &i);
	int num = i;
	while (i >= 2) {
		if (i % 2 == 0) {
			num += i/2;
			i = i / 2;
		}
		else{
			num += i / 2;
			i = i / 2 +1;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}