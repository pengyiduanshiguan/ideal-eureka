//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int arr[], int len) {
	printf("��ʼ������:");
	for (int i = 0; i<len; i++) {
		scanf("%d",&arr[i]);
	}
}
void empty(int arr[], int len) {
	printf("\n�������:");
	for (int i = 0; i<len; i++) {
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int len) {
	printf("\n��������:");
	for (int i = len - 1;i>=0 ; --i) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[5];
	int len = 0;
	int i = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	init(arr, len);
	reverse(arr, len);
	empty(arr, len);
	system("pause");
	return 0;
}
