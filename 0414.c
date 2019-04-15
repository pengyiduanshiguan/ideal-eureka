//  有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//	student a am i
//	i ma a tneduts
//	i am a student
#include <stdio.h>
#include <stdlib.h>
void reverse(char*arr, int start, int end) {
	for (int i = start,j=end-1; i<j; ++i,--j) {
		char tmp;
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}
void*reversearr(char*arr) {
	int start=0;
	int i = 0;
	for (; arr[i]; ++i) {
		if (arr[i] == ' ') {
			reverse(arr, start ,i);
			start =i+1;
		}
	}
	//对最后一个单词逆序
	reverse(arr, start, i);
	//对整体进行逆序
	reverse(arr, 0, i);
	return arr;
}
int main() {
	char arr[] = "student a am i";
	puts(reversearr(arr));
	system("pause");
	return 0;
}
