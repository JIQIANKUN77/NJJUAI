#include <iostream>
using namespace std;
int main()
{
	int n,sum[100],max;
	cin>>n;
	int a[n][4];//��������һ��ֱ���ö�ά���� 
	for (int i=0;i<n;i++)
{
		for (int j=0;j<4;j++)
{
     	cin>>a[i][j];
}
}
   for (int i=0;i<n;i++)
   {
   		sum[i]=a[i][3]+a[i][2]+a[i][1];
   }
	max=0;
	for (int i=0;i<n;i++)
	{
		if (sum[i]>max)	
		max=sum[i];
	}
	for (int i=0;i<n;i++)
	{
		if (sum[i]==max)
		cout<<a[i][0]<<endl;
	}
	return 0;
}//��ѧ�Ŵ�С��������n��ѧ�������ſγɼ���n<100 ������˵����������n��������n��ѧ��ѧ�ź����ſγɼ���ѧ����ѧ��Ϊ4λ���������ſεĳɼ�Ϊ���������˵������ѧ�Ŵ�С��������ܷ���ߵ�ѧ��ѧ�ţ�ÿ��ѧ��ռһ�С�
