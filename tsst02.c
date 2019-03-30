//在整形有序数组中查找想要的数字，找到了返回下标，否则返回-1（折半查找法）
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (left + right) / 2;
//	int n;
//	scanf("%d", &n);
//	while (left <= right) {
//		if (n > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (n < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("%d\n", mid);
//			break;
//		}
//		printf("-1\n");
//		break;
//	}
//	system("pause");
//	return 0;
//
//}