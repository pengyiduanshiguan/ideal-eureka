//ʵ��strstr
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* my_strstr(const char*str1, const char*str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL); 
//	if (str2 == '\0') {
//		return NULL;
//	}
//	//*black_ptr��ʾ��str1�����Ӵ�str2��λ��
//	char*black_ptr =(char*) str1;
//	while (*black_ptr != '\0') {
//		//*red_ptr�������Ҿ����λ��
//		char* red_ptr = black_ptr;
//		char* green_ptr =(char*) str2;
//		while (*green_ptr != '\0'&&
//			*red_ptr == *green_ptr) {
//			++red_ptr;
//			++green_ptr;
//		}
//		if (*green_ptr == '\0') {
//			return black_ptr;
//		}
//		++black_ptr;
//	}
//	return NULL;
//}
//int main() {
//	const char str1[] = "qazwsx";
//	const char str2[] = "qz";
//	printf("%s\n", my_strstr(str1, str2));
//	system("pause");
//	return 0;
//}

//ʵ��strchr
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char*my_strchr(const char*str, char character) {
//	assert(str != NULL);
//	int tmp = 0;
//	for (*str; *str != '\0';++str) {
//		++tmp;
//		if (character == *str) {			
//			printf("found at %d\n",tmp );
//		}
//	}
//	return NULL;
//}
//int main() {
//	char str[] = "I miss you";
//	char k = 'n';
//	my_strchr(str, k);
//	system("pause");
//	return 0;
//}
//ʵ��memcpy
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
//�������������'\0'��ʱ�򲻻�ͣ����
//���source��destinatioon���κ��ص�,���ƵĽ������δ�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void*my_memcpy(void*destination, const void*source, size_t num) {
//	assert(destination != NULL);
//	assert(source != NULL);
//	const char*src = (const char*)source;
//	char*dest = (char*)destination;
//	for (size_t i = 0; i < num; ++i) {
//		dest[i] = src[i];
//	}
//	return destination;
//}
//int main() {
//	char a1[5] = { 0 };
//	char a2[] = { 1, 2, 5 };
//	my_memcpy(a1, a2,2);
//	for (int i = 0; i < 5; ++i) {
//		printf("%d\n", a1[i]);
//	}
//	system("pause");
//	return 0;
//}
