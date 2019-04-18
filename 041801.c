//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//#include<stdio.h>
//#include<stdlib.h>
//#define  SIZE(a) (sizeof(a)/sizeof(a[0]))
//int main() {
//	char a[] = {2,5,8,9,6,5,8,6,9,4,3,4 };
//	int i, sum = 0;
//	int pos;
//	int num1=0,num2=0;
//	//对只出现了一次的2个数^
//	for (i = 0; i < SIZE(a); ++i) {
//		sum ^= a[i];
//	}
//	//对^后的数二进制位的第一个1进行标记
//	for (i = 0; i < 32; ++i) {
//		if (sum & 1 << i) {
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < SIZE(a); ++i) {
//		//对这组数进行分组,pos位是否为1为标准
//		if (a[i] & 1 << pos) {
//			//相同2个数^为0
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