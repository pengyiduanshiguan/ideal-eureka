//  ��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	//�����һ����������
	reverse(arr, start, i);
	//�������������
	reverse(arr, 0, i);
	return arr;
}
int main() {
	char arr[] = "student a am i";
	puts(reversearr(arr));
	system("pause");
	return 0;
}
