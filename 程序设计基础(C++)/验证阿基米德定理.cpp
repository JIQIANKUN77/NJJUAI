#include <iostream>
using namespace std;
int isprime(int n)
{
 int q;
 bool w = 0;
 for (int i = 2; i < n; i++)
 {
  if (n % i == 0)
  {
   w = 1;
  }
 }
 if (w)
 {
  q = 0;//��������
 }
 else
 {
  q = 1;//������
 }
 return q;
}
int main()
{
 int n;
 cin >> n;
 int m;
 for (int i = n-2; i > n / 2; i--)
 {
  if (isprime(i)==1)
  {
   m = n - i;
  if(isprime(m)==1) //��������Ƕ���ж� 
  {
   cout << n << '=' << m << '+' << i << endl;
   break;
  }
 }
}
 return 0;
}
