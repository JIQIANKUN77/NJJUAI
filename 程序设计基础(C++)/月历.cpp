#include<iostream>
#include<iomanip>
using namespace std;
void PrintCalendar(int n)
{
     cout<<n<<"�µ�����:"<<endl;
     cout<<"  ��  һ  ��  ��  ��  ��  ��"<<endl;
     int i=1;
     if(n==1)
     {
          cout<<setw(28)<<i<<endl;//28���Ǵӱ��µ�һ�쵽ͷ�ĳ��� 
          for(i=2;i<=31;i++)
          {
            if(i%7==1)
            cout<<setw(4)<<i<<endl;//1������������ mod7��1��Ҫ���� 
            else cout<<setw(4)<<i;
          }
     }
     if(n==2)
     {
          cout<<setw(12)<<i;//��ǰ��λ�����ָ�����Ҫ��д 
          for(i=2;i<=28;i++)
          {
            if(i%7==5)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==3)
     {
          cout<<setw(12)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==5)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==4)
     {
          cout<<setw(24)<<i;
          for(i=2;i<=30;i++)
          {
            if(i%7==2)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==5)
     {
          cout<<setw(3)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==0)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==6)
     {
          cout<<setw(16)<<i;
          for(i=2;i<=30;i++)
          {
            if(i%7==4)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==7)
     {
          cout<<setw(24)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==2)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==8)
     {
          cout<<setw(8)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==6)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==9)
     {
          cout<<setw(20)<<i;
          for(i=2;i<=30;i++)
          {
            if(i%7==3)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==10)
     {
          cout<<setw(28)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==1)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==11)
     {
          cout<<setw(12)<<i;
          for(i=2;i<=30;i++)
          {
            if(i%7==5)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
     if(n==12)
     {
          cout<<setw(20)<<i;
          for(i=2;i<=31;i++)
          {
            if(i%7==3)
            cout<<setw(4)<<i<<endl;
            else cout<<setw(4)<<i;
          }
     }
	 }
     int main(){
     int n;
     cout<<"����������һ���·�:";
     cin>>n;
     PrintCalendar(n);
     return 0;
	 }

