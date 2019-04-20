//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//实现strlen
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
////实现srcpy
////1.源字符串必须以'\0'结尾;
////2.会将源字符串中的'\0'拷贝到目标空间
////3.目标空间必须足够大,以确保可以存放源字符串
////4.目标空间必须可变
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
////实现strcat
////1.源字符串必须以'\0'结尾;
////2.目标空间必须足够大,以确保可以存放源字符串的内容
////3.目标空间必须可修改
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
////实现strcmp
////1.第一个字符串大于第二个字符串,则返回大于0的数
////  第一个字符串等于第二个字符串,则返回0
////  第一个字符串小于第二个字符串,则返回小于0的数
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

