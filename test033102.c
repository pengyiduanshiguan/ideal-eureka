//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int arr[], int len) {
	printf("初始化数组:");
	for (int i = 0; i<len; i++) {
		scanf("%d",&arr[i]);
	}
}
void empty(int arr[], int len) {
	printf("\n清空数组:");
	for (int i = 0; i<len; i++) {
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int len) {
	printf("\n逆置数组:");
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
