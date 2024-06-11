#include <iostream>
#include <cmath>
using namespace std;
int cal_roots(double a,double b,double c,double *root1,double *root2)//�������ػ���ֻ�ܷ���һ��ֵ�� 
{	if (a==0)
	return -1;
	double t=b*b-4*a*c;
	if (t<0)
	return 0;
	if (t==0)
	{	*root1=*root2=-b/(2*a);
		return 1;
	}
	else
	{	t=sqrt(t);
		*root1=(-b+t)/(2*a);
		*root2=(-b-t)/(2*a);
		return 2;
	}
}
int main()
{
	double a1,b1,c1,r1,r2;
	cout<<"�����뷽�̵�����ϵ��(a,b,c):"<<endl;
	cin>>a1>>b1>>c1;
	switch (cal_roots(a1,b1,c1,&r1,&r2))
	{
		case -1:
			cout<<"����һԪ���η���"<<endl;
			break;
		case 0:
			cout<<"������ʵ��" <<endl;
			break;
		case 1:
			cout<<"�������������ʵ����"<<r1<<endl;
			break;
		case 2:
			cout<<"��������������ʵ����"<<r1<<"��"<<r2<<endl;
	}
	return 0;
}
