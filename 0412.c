#define  _CRT_SECURE_NO_WARNINGS
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
#include<stdio.h>
#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value) {
//	unsigned int tmp, num = 0;
//	for (int i = 0; i < 32; ++i) {
//		tmp = value % 2;
//		num = num * 2 + tmp;
//		value = value / 2;
//	}
//	return num;
//}
////按"位的思想"
//unsigned int reverse_bit(unsigned int value) {
//	int tmp, num = 0;
//	for (int i = 0; i < 31; ++i) {
//		//取出最后一位保存到tmp中
//		tmp = value & 1;
//		num = num | tmp;
//		num = num << 1;
//		value = value >> 1;
//	}
//	return num;
//}
//int main() {
//	unsigned int value;
//	scanf("%u", &value);
//	printf("%u\n", reverse_bit(value));
//	system("pause");
//	return 0;
//}
