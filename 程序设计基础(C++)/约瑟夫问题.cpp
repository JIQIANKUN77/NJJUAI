#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	string s[1000];
	cin>>m>>n;
	for (int i=1;i<=m;i++)
	cin>>s[i];
	bool in_circle[m];
	int num,index;
	for (index=0;index<m;index++)
		in_circle[index]=true;
	index=m-1;
	num=m;
	while (num>1)
	{
		int cnt=0;
		while (cnt<n)
		{
			index=(index+1)%m;
			if (in_circle[index]) cnt++;
		}
		in_circle[index]=false;
		num--;
	}
	for (index=0;index<m;index++)
	if (in_circle[index]) break;
	cout<<s[index+1];
  	return 0;
}//m(m<=100)������Χ����һ��Ȧ������˳ʱ�뷽���1��m��š�Ȼ���1�ſ�ʼ˳ʱ�뱨��������n���������֣�Ȼ���ٴӸճ��ֵ�������һ��λ�ÿ�ʼ���´�1����������ظ���ֱ��ֻʣ�����һ��������������˵�����������ͷš�(1<=n<=m)���룺����������С���һ����������Ŀm�ͳ��ֵı���n���ڶ����Ǳ��Ϊ1��m��ÿ���������֣����ֳ���С��10���������������������

