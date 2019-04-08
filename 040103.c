//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void reverse_string(char * str) {
//	int len = strlen(str) - 1;
//	char tmp;
//	if (str[0] = '\0') {
//		return ;
//	}
//	tmp=str[0];
//	str[0] = str[len];
//	str[len] = '\0';
//	reverse_string( str+1);
//	str[len] = tmp;
//}
//int main() {
//	char arr[] = "xatu";
//	reverse_string(arr);
//	puts(arr);
//	system("pause");
//	return 0;
//}