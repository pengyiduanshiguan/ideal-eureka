//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	int n;
//	printf("请输入您的登录密码:\n");
//	for (n = 0; n < 3; ++n) {
//		char arr[8] = { 0 };
//	    scanf("%s",arr);
//		if (strcmp(arr, "12345678")==0) {
//			break;
//		}
//		else{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (n < 3) {
//		printf("您的密码正确，登录成功！\n");
//	}else {
//		printf("您的密码有误，登录失败！\n");
//	}
//	system("pause");
//	return 0;
//}