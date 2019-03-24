 #define  _CRT_SECURE_NO_WARNINGS     


//1.给定2个整型变量的值，将两个值的内容进行交换。
//#include <stdio.h>
//#include<stdlib.h>
//int main() {
//	int x, y;
//	int num;
//	scanf("%d %d", &x, &y);
//	num = x;
//	x = y;
//	y = num;
//	printf("%d,%d\n", x, y);
//	system("pause");
//	return 0;
//}
//
//2.不允许创建临时变量，交换两个数的内容。
//#include<stdio.h>
//#include <stdlib.h>
//int main() {
//	int i, j;
//	printf("请输入两个变量的值：");
//	scanf("%d %d", &i, &j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//	printf("%d %d\t", i, j);
//	printf("\n");
//	system("pause");
//	return 0;
//}



//3.将3个数按从大到小输出。
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()  {
//	int i;
//	int max,next;
//	int tmp;
//	scanf("%d %d",&max,&next);
//	if (next > max){
//		tmp = max;
//		max = next;
//		next = tmp;
//	}
//	scanf("%d", &tmp);
//	if (tmp > max) {
//		printf("%d %d %d\n", tmp, max, next);
//	}
//	else if(tmp>next) {
//		printf("%d %d %d\n", max,tmp, next);
//	}
//	else {
//		printf("%d %d %d\n", max,next,tmp);
//	}
//	
//	system("pause");
//	return 0;
//}
//4.求10个整数中的最大值。
//#include <stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int i;
//	int max;
//	int tmp;
//	scanf("%d", &max);
//	for (i = 1; i < 10; ++i) {
//		scanf("%d", &tmp);
//		if (tmp>max) {
//			max = tmp;
//		}
//	}
//	printf("最大的数为%d\n", max);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int i;
//	int max;
//	int tmp;
//	int first = 1;
//	for (i = 1; i < 10; ++i) {
//		scanf("%d", &tmp);
//		if (first) {
//			max = tmp;
//			first = 0;
//			continue;
//		}
//		if (tmp>max) {
//			max = tmp;
//		}
//	}
//	printf("最大的数为%d\n", max);
//	system("pause");
//	return 0;
//}
//5.求2个数的最大公约数。

#include<stdio.h>
#include<stdlib.h>
//辗转相除法
int main(){
//	int a,b,c;
//	printf("请输入两个数求最大公因数:");
//    scanf("%d %d", &a,&b);
//	while (b != 0) {
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("最大公因数为%d\n", a);
	int a, b,max=0;
	printf("输入两个数求他们的最大公因数:");
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= (a < b ? a : b); ++i) {
		if (a%i == 0 && b%i == 0) {
			max = i;
		}
	}
	if (max>1) {
		printf("他们的最大公因数为%d\n",max);
	}
	else {
		printf("他们的最大公因数为1\n");
	}
    system("pause");
	return 0;
} 