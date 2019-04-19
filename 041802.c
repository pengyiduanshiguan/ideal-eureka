// 判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//int find(char s1[],char s2[]) {
//	char*tmp = (char*)malloc(strlen(s1) * 2 + 1, sizeof(char));
//	assert(tmp != NULL);
//	strcpy(tmp, s1);
//	strcat(tmp, s1);
//	if (strstr(tmp, s2) == 0) {
//		free(tmp);
//		return 1;
//	}
//	free(tmp);
//	return 0;
//}
//int main() {
//	char s1[] = "asdf";
//	char s2[] = "sdfa";
//	if (find(s1, s2) == 1) {
//		printf("s2是s1左旋后的字符串\n");
//	}
//	else{
//		printf("s2不是s1左旋后的字符串\n");
//	}
//	system("pause");
//	return 0;
//}