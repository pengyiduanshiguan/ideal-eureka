//�ݹ�ķ�ʽ��ӡһ��������ÿһλ
#include<stdlib.h>
#include<stdlib.h>
void print(int n) {
	if (n == 0) {
		return;
	}
	print(n / 10);
	printf("%d ",n%10);
}
int main() {
	int i;
	scanf("%d", &i);
	print(i);
	system("pause");
	return 0;
}