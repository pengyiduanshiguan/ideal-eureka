#define  _CRT_SECURE_NO_WARNINGS
//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
////��"λ��˼��"
//unsigned int reverse_bit(unsigned int value) {
//	int tmp, num = 0;
//	for (int i = 0; i < 31; ++i) {
//		//ȡ�����һλ���浽tmp��
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
