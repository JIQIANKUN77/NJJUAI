#include <iostream>
using namespace std;
void hanoi(char x,char y,char z,int n)//��n��Բ�̴�����x�Ƶ�y 
{ 
if (n==1)
	cout<<"1: "<<x<<"��"<<y<<endl;//һ�����Ӿ�һ�� 
else
{	
	hanoi(x,z,y,n-1);//��n-1��Բ�̴�����x�Ƶ�z
	cout<<n<<": "<<x<<"��"<<y<<endl;//���һ��
	hanoi(z,y,x,n-1);//��n-1��Բ�̴�����z�Ƶ�y
}
}
int main ()
{
	char A,B,C;
	int n;
	cin>>n;
	hanoi('A','B','C',n);
	return 0;
}
