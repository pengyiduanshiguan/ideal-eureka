 #define  _CRT_SECURE_NO_WARNINGS     


//1.����2�����ͱ�����ֵ��������ֵ�����ݽ��н�����
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
//2.����������ʱ���������������������ݡ�
//#include<stdio.h>
//#include <stdlib.h>
//int main() {
//	int i, j;
//	printf("����������������ֵ��");
//	scanf("%d %d", &i, &j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//	printf("%d %d\t", i, j);
//	printf("\n");
//	system("pause");
//	return 0;
//}



//3.��3�������Ӵ�С�����
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
//4.��10�������е����ֵ��
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
//	printf("������Ϊ%d\n", max);
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
//	printf("������Ϊ%d\n", max);
//	system("pause");
//	return 0;
//}
//5.��2���������Լ����

#include<stdio.h>
#include<stdlib.h>
//շת�����
int main(){
//	int a,b,c;
//	printf("���������������������:");
//    scanf("%d %d", &a,&b);
//	while (b != 0) {
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("�������Ϊ%d\n", a);
	int a, b,max=0;
	printf("���������������ǵ��������:");
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= (a < b ? a : b); ++i) {
		if (a%i == 0 && b%i == 0) {
			max = i;
		}
	}
	if (max>1) {
		printf("���ǵ��������Ϊ%d\n",max);
	}
	else {
		printf("���ǵ��������Ϊ1\n");
	}
    system("pause");
	return 0;
} 