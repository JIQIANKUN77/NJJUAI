#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct node{char name[20];int num=0;node *next;};
node *head=NULL;
node *tail;
void input(int n)
{
    char st[20];
    int number=1;
    while(number<=n)
    {
    	cin>>st;
        node *p=new node;
        strcpy(p->name,st);
        p->next=NULL;
        if(head==NULL)
        head=tail=p;
        else
		{
        tail->next=p;
        tail=p;
        }
	    number++;//ֻ�����Ӧ������ˮ���� 
	}
}

int main()
{
    int n;
    cin>>n;
    int MAX=0;
    while(n!=0)
    {
        input(n);
        cin>>n;
	}
    node *p=head;
    for(;p!=NULL;p=p->next)
    {
        node *q=p;//����������ת�ƽ��� 
        for(;q!=NULL;q=q->next)
        if(strcmp(p->name,q->name)==0)p->num++;
        MAX=max(MAX,p->num);
    }   
    p=head; 
    for(;p!=NULL;p=p->next)
    if(MAX==p->num)
    cout<<p->name<<endl;
    delete p;//ָ������Ҫɾ����ռ�ÿռ� 
    return 0;
}
