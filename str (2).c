//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//ʵ��strlen
//char my_strlen(char*s) {
//	char*p = s;
//	while (*p != '\0') {
//		++p;
//	}
//	return p - s;
//}
//int main() {
//	char* s = "fvsskfs";
//	printf("%d\n", my_strlen(s));
//	system("pause");
//	return 0;
//}
////ʵ��srcpy
////1.Դ�ַ���������'\0'��β;
////2.�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
////3.Ŀ��ռ�����㹻��,��ȷ�����Դ��Դ�ַ���
////4.Ŀ��ռ����ɱ�
//char* my_strcpy(char* destination, const char* source) {
//	assert(destination != NULL);
//	assert(source != NULL);
//	int i = 0;
//	for (; source[i]!='\0'; ++i) {
//		destination[i] = source[i];
//	}
//	destination[i] = '\0';
//	return destination;
//}
//int main() {
//	char destination[1024] = { 0 };
//	const char*source = "jnfdlj";
//	my_strcpy(destination, source);
//	printf("%s\n", destination);
//	system("pause");
//	return 0;
//}
////ʵ��strcat
////1.Դ�ַ���������'\0'��β;
////2.Ŀ��ռ�����㹻��,��ȷ�����Դ��Դ�ַ���������
////3.Ŀ��ռ������޸�
//char*my_strcat(char* destination, const char*source) {
//	assert(destination != NULL);
//	assert(source != NULL); 
//	int i;
//	for (i = 0; destination[i] != '\0'; ++i);
//	for (int j = 0; source[j] != '\0'; ++j) {
//		destination[i] = source[j];
//		++i;
//	}
//	destination[i] = '\0';
//	return destination;
//}
//int main() {
//	char destination[1024] = "fsdd";
//	char*source = "ndfk";
//	my_strcat(destination, source);
//	printf("%s\n", destination);
//	system("pause");
//	return 0;
//}
////ʵ��strcmp
////1.��һ���ַ������ڵڶ����ַ���,�򷵻ش���0����
////  ��һ���ַ������ڵڶ����ַ���,�򷵻�0
////  ��һ���ַ���С�ڵڶ����ַ���,�򷵻�С��0����
//int my_strcmp(const char*str1, const char*str2) {
//  assert(str1!=NULL);
//  assErt(str2!=NULL);
//	int i = 0;
//	for (; str1[i] != '\0'&&str2[i] != '\0'; ++i) {
//		if (str1[i] > str2[i]) {
//			return 1;
//		}
//		else if (str1[i] <str2[i]) {
//			return -1;
//		}
//		else{}
//	}
//	if (str1[i] > str2[i]) {
//		return 1;
//	}
//	else if (str1[i] < str2[i]) {
//		return -1;
//	}
//    else 
//	return 0;
//}
//int main() {
//	const char str1[] = "fas";
//	const char str2[] = "fas";
//	printf("%d\n", my_strcmp(str1, str2));
//	system("pause");
//	return 0;
//}

