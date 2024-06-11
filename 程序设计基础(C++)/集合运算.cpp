#include <iostream>;
using namespace std;
struct Node
{
	int content;
	Node *next;
};
//����һ������ 
Node* input_set()
{
	Node* head=NULL,* tail=NULL;
	int x;
	cin>>x;
	while (x!=999)
	{
		Node*p=new Node;
		p->content=x;
		p->next=NULL;
		if (head==NULL)
		head=tail=p;
		else {
			tail->next=p;
			tail=p;	
		}
		
		cin>>x;
	}
	return head;
}
//Ϊʵ����������Ҫ��һЩ����
//����Ԫ��
bool find(Node *head,int x)
{
	int d=0; 
	for (Node *p=head;p!=NULL;p=p->next)
	if (p->content==x){
		d=1;
		break;
	}
	return d;
}
//���Ԫ��
void insert(Node *head,int x)
{
	Node *p=new Node;
	p->content=x;
	p->next=head;
	head=p;
}
//�󽻼� 
Node *intersection(Node *head1,Node *head2)
{
	Node *head=NULL;
	for (Node *p=head1;p!=NULL;p=p->next)
	{
		if (find (head2,p->content))
		insert(head,p->content);
	}
	return head;
}
//�󲢼�
Node *unions(Node *head1,Node *head2) 
{
	Node *head=NULL,*p;
	for (p=head1;p!=NULL;p=p->next)
	insert (head,p->content);
	for (p=head2;p!=NULL;p=p->next)
	{
		if (!find(head1,p->content))
		insert (head,p->content);
	}
	return head;
}
//��
Node *differences(Node *head1,Node *head2)
{
	Node *head=NULL,*p;
	for(p=head1;p!=NULL;p=p->next)
	{
		if (!find(head2,p->content))
		insert (head,p->content);	
	}
	return head;
 } 
 //�������
 void output_set(Node *head)
 {
 	Node *p;
 	for (p=head;p!=NULL;p=p->next)
 	cout<<p->content<<" ";
 	cout<<endl;
  } 
int main()
{
	cout<<"�����������������ϵ�Ԫ��(��999Ϊ����)";
	Node *set1,*set2,*set_intersection,*set_union,*set_difference;
	set1=input_set();
	set2=input_set();
	set_intersection=intersection(set1,set2);
	set_union=unions(set1,set2);
	set_difference=differences(set1,set2);
	cout<<"�����ǣ�"; 
	output_set(set_intersection);
	cout<<"�����ǣ�";
	output_set(set_union); 
	cout<<"��ǣ�"; 
	output_set(set_difference);
	return 0;
 } 
