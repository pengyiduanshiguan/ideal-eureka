//��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ����
#include<stdio.h>
#include<stdlib.h>
int main() {
	int ch;
	printf("������һ���ַ�:\n");
	while ((ch = getchar()) != EOF) {
		if (ch >= 'a'&&ch <= 'z') {
			printf("%c", ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z') {
			printf("%c", ch + 32);
		}
		else if (ch >= '1'&&ch <= '9');
		else {
			printf("%c", ch);
		}
	}
	system("pause");
	return 0;
}