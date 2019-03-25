//Çó 1+1/(-2)+1/3+....+1/(-100).
#include<stdio.h>
#include<stdlib.h>
int main() {
	double num=0.0;
	int n;
	double flag = 1.0;
	for (n = 1; n <= 100; ++n) {
		num += (1.0/n)*flag;
		flag *= -1.0;
	}
	printf("%lf\n", num);
	system("pause");
	return 0;
}