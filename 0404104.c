//递归和非递归分别实现strlen
#include<stdio.h>
#include<stdlib.h>
//非递归
	int my_strlen(char *arr) {
		int i;
		for (i = 0; arr[i]; ++i);
		return i;
	}
//递归
	int my_strlen1(char *arr) {
		if (*arr == '\0') {
			return 0;
		}
		else { 
			return 1 + my_strlen1(arr + 1);//递归调用自己
		}
	}
	int main() {
		char arr[] = "abcde";
		my_strlen(arr);
		my_strlen1(arr);
		printf("%d\n", my_strlen(arr));
		printf("%d\n", my_strlen1(arr));
		system("pause");
		return 0;
	}
