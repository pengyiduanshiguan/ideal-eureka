//不使用（a + b)/ 2这种方式，求两个数的平均值。
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int i,j,k,m;
//	//i是a&b相同的部分
//	i = a&b;
//	//j是a与b不同的部分
//	j = a^b;
//	//k=(a-b)/2
//	k = j >> 1;
//	m = i + k;
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}
////交换两个数
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d,%d\n", a, b);
//	system("pause");
//	return 0;
//}