//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//#include<stdio.h>
//#include<stdlib.h>
//#define  SIZE(a) (sizeof(a)/sizeof(a[0]))
//int main() {
//	char a[] = {2,5,8,9,6,5,8,6,9,4,3,4 };
//	int i, sum = 0;
//	int pos;
//	int num1=0,num2=0;
//	//��ֻ������һ�ε�2����^
//	for (i = 0; i < SIZE(a); ++i) {
//		sum ^= a[i];
//	}
//	//��^�����������λ�ĵ�һ��1���б��
//	for (i = 0; i < 32; ++i) {
//		if (sum & 1 << i) {
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < SIZE(a); ++i) {
//		//�����������з���,posλ�Ƿ�Ϊ1Ϊ��׼
//		if (a[i] & 1 << pos) {
//			//��ͬ2����^Ϊ0
//			num1 ^= a[i];
//		}
//		else {
//			num2 ^= a[i];
//		}
//	}
//	printf("%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}