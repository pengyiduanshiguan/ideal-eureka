#if 0
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	//ע�ⲻ����cin��cin�����ո�ͻ����
	getline(cin, str1);
	getline(cin, str2);
	//ʹ�ù�ϣӳ��˼��ͳ��str2�ַ����ֵĴ���
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	string ret;
	//����str1,str1[i]ӳ�䵽hashtable��Ӧλ��Ϊ0��
	//���ʾ����ַ���str2��û�г��ֹ�������+=ret
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;
	return 0;
}
#endif
