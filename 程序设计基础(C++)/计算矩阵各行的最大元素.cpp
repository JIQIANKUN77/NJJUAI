#include <iostream>
using namespace std;
int max(int x[],int n)
{
	int *p_max=x;//P_maxָ�����Ԫ�أ��ȼ����һ��Ԫ�����
	int *p=x+1,//pָ��ڶ���Ԫ�� 
		*p_last=x+n-1;//p+lastָ�����һ��Ԫ��
	for (;p<=p_last;p++)//�ӵڶ���Ԫ�ؿ�ʼ�����Ԫ��
		if (*p>*p_max) p_max=p;
	return *p_max; 
}
#define M 5
#define N 5
int main()
{
	int a[M][N];
	int i,j;
	for (i=0;i<M;i++)
	  for (j=0;j<N;j++)
	    cin>>a[i][j];//��ȡ����Ԫ�ص�ֵ
	int (*p)[N]=a,//pΪ�������ָ�룬��ʼ��Ϊָ���һ�У����ڶ�������н��б���
		(*p_last_line)[N]=a+M-1;//p_last_lineҲΪ��ָ�룬ָ�����һ��
	for (;p<=p_last_line;p++)//��������н���ѭ��������ÿһ�е����ֵ
	cout<<max(*p,N)<<endl;
	return 0; 
 } 
