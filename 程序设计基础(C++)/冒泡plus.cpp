#include <iostream>
void bubble_sort (int s[],int num);
using namespace std;
int main()
{
	int s[1000];
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	cin>>s[i];
	bubble_sort (s,n);//���ر�������Ԫ������ 
	for (int i=0;i<n;i++)
	cout<<s[i];
	return 0;
}
void bubble_sort (int s[],int num)
{
	bool exchange;
	while (num>1)
	{	exchange=false;
		for (int i=0;i<num-1;i++)
		{	if (s[i]>s[i+1])
			{	int temp=s[i];
				s[i]=s[i+1];
				s[i+1]=s[i];
				exchange=true;	
			}
		}
		if (!exchange) break;//�����������Ͳ����������� 
		num--;
	}
}
