#include <iostream>
using namespace std;
char int_to_string(int num)
{
	char c;
	char str[999];
	int i=0;
	while (num!=0)
	{
		str[i]=num%10+'0';//ʵ��ת��
		num/=10;
		i++; 
	}
	str[i]='\0';
	for (int j=0;j<i/2;j++)
	{
		c=str[j];
		str[j]=str[i-j-1];
		str[i-j-1]=c;//ͨ��������Ϊ���� 
	}
	return str[999];
}
int main()
{
	int n;
	cin>>n;
	cout<<int_to_string(n);
	return 0;
}
