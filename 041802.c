// �ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
//		printf("s2��s1��������ַ���\n");
//	}
//	else{
//		printf("s2����s1��������ַ���\n");
//	}
//	system("pause");
//	return 0;
//}