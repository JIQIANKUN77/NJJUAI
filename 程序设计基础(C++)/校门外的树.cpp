#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,a,b;
	int v[1002]={0};
	int cnt=0;
	cin>>l>>m;
	for (int i=1;i<=m;i++){
	cin>>a>>b;
	for (int j=0;j<=l;j++){
		if (j>=a&&j<=b) v[j]=1;
	}
}
for (int i=0;i<=l;i++)
	if (v[i]==0)
	cnt++;
	cout<<cnt;
    return 0;//˼·�ܼ򵥣�����0��1��ǣ����Ѿ���������Ϊ1.��ǲ������� 
}
