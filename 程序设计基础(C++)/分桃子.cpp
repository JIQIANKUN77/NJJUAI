#include <iostream>
using namespace std;
int f(int m,int n)
{
	if(m==0||n==1)//ûƻ����һ���� 
	{
		return 1;
	}
	if (m<n)//���Ӹ��� 
	{
		return f(m,m);
	}
	else{
		return f(m,n-1)+f(m-n,n);//����һ���̣������������Ǳ�֤ÿ���̶���ƻ�� 
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<f(m,n);
	return 0;	
}
