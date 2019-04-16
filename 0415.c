//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void Improve(int str[],int n) {
//	int i,j=n;
//	for (i = 0; i <j; ++i) {
//		int tmp;
//		if (str[i] % 2 != 0&&j>0) {			
//			printf("%d ", str[i]);
//		}
//		else {
//			tmp = str[j - 1];
//			str[j - 1] = str[i];
//			str[i] = tmp;
//			--j;
//			--i;
//		}
//	}
//	for (j; j < n; ++j) {
//		printf("%d ", str[j]);
//	}
//	printf("\n");
//}
//int main() {
//	int str[9];
//	for (int i = 0; i < 9; ++i) {
//		scanf("%d", &str[i]);
//	}
//	Improve(str,9);
//	system("pause");
//	return 0;
//}