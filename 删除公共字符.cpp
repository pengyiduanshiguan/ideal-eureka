#if 0
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	//注意不能用cin，cin遇到空格就会结束
	getline(cin, str1);
	getline(cin, str2);
	//使用哈希映射思想统计str2字符出现的次数
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	string ret;
	//遍历str1,str1[i]映射到hashtable对应位置为0，
	//则表示这个字符在str2中没有出现过，则将他+=ret
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	return 0;
}
#endif
