//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ��
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	scanf("%d", &i);
	int num = i;
	while (i >= 2) {
		if (i % 2 == 0) {
			num += i/2;
			i = i / 2;
		}
		else{
			num += i / 2;
			i = i / 2 +1;
		}
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}