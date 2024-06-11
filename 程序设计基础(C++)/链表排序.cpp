#include <iostream>
using namespace std;
struct Node
{
	int content;
	Node *next;
};
Node *input()//�������ݣ���������
{
	Node *head=NULL;
	int x;
	cin>>x;
	while (x!=-1)
	{
		Node *p=new Node;
		p->content=x;
		p->next=head;//�½����ڱ�ͷ
		head=p;
		cin>>x; 
	 } 
	 return head;
 } 
void sort(Node *h)
 {
 	if (h==NULL||h->next==NULL)
 		return;//ֻ��һ����û�н��ʱ��������
 	else for (Node *p1=h;p1->next!=NULL;p1=p1->next)//����һ��
		{
			Node *p_min=p1;//��ָ����С�Ľ��,��ʼ��ΪP1 
			for(Node *p2=p1->next;p2!=NULL;p2=p2->next) //�ٱ���һ��,��p1֮��ʼ�Ƚ� 
			if(p2->content<p_min->content)
			p_min=p2;//����ָ����С�Ľ��
			if(p_min!=p1)
			{
				int temp=p1->content;
				p1->content=p_min->content;
				p_min->content=temp;//����˼·����С����ǰ�� 
			 } 	
		 } 	 
 }
void output (Node *h)
{
	for (Node *p=h;p!=NULL;p=p->next)
		cout<<p->content<<',';
		cout<<endl;
}
void remove(Node *h)
{
	while (h!=NULL)
	{
		Node *p=h;
		h=h->next;
		delete p;
	}
}
int main()
{
	Node *head;
	head=input();
	sort(head);
	output(head);
	remove(head);
	return 0;
}
