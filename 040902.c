/*在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1*/
#include<stdlib.h>
#include<stdlib.h>
int main() {
	int i,j,n;
	int arr[30][30] = {0};
	scanf("%d", &n);	
	printf("%d\n", arr[0][0] = 1);
	for (i = 1; i < n; ++i) {
		printf("%d ", arr[i][0] = 1);
		for (j = 1; j < i; ++j) {
			printf("%d ", arr[i][j] = arr[i - 1][j - 1] +
				arr[i - 1][j]);
		}
		printf("%d\n", arr[i][i] = 1);
	}
	system("pause");
	return 0;
}