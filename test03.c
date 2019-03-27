//编写代码，演示"I LIKE YOU !"两端移动，向中间汇聚。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main() {
	char arr1[] = "I  LIKE  YOU!";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right) {
		printf("%s\n", arr2);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		++left;
		--right;
		Sleep(520);
		system("cls");
	}
	system("pause");
	return 0;
}