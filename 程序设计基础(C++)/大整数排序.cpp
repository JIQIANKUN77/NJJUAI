#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;

bool cmp(string str1,string str2){
	if(str1.size() != str2.size()){
		return str1.size() < str2.size();
	}else{
		return str1 < str2;
	}
}

int main()
{
	string number;
	int n;
	vector<string> vc;//��װstring������ 
	while(cin >> n){
		for(int i = 0; i < n ; i++){
			cin >> number;
			vc.push_back(number);//������vector��������Ԫ�� 
		}//26-30��Ϊ�����Ķ������ 
		sort(vc.begin(),vc.end(),cmp);//�����ַ����򣬽�bool���͸ĳɴ��ںž��ǽ������� 
		for(int i = 0; i < vc.size(); i++){
			cout << vc[i] << endl;
		}
		vc.clear();
	}	
    return 0;
}  
