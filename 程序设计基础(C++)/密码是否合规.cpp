#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	char s[25];//������25�����ֹ涨�ַ�����ĳ��� 
	int a=0,b=0,c=0,num=0;
	cin>>s;
	for (int i=0;s[i]!='\0';i++)
	{
		num++;
		if (('a'<=s[i]&&'z'>=s[i])||('A'<=s[i]&&'Z'>=s[i]))
		a++;
		else if ('0'<=s[i]&&'9'>=s[i]) 
		b++;
		else c++; //�������벻�Ϲ����� 
	}
	if (num>=8&&a>=1&&b>=1&&c==0)
	cout<<"valid";
	else 
	cout<<"invalid";	
	return 0;
}
