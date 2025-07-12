#include<iostream>
#include<string>

using namespace std;

/*
ѭ������CircularLinkedList)�㷨ʵ��1
LinkListmerge_1(LinkList LA,LinkList LB)
{
LNode 1*p,*q;
p=LA;
q=LB;
while (p->next!=LA)
	p->next;
while (q->next!=LB)
	q=q->next;
p->next=LB->next;
free(LB);
q->next=LA;
return(LA);
}


ѭ������(CircularLinked List)�㷨ʵ��2
LinkListmerge_2(LinkList RA,LinkList RB)
{
LNode *p;
p=RA->next;
RA->next=RB->next->next;
free(RB->next);
RB->next-p;
return(RB);
}


Լɪ��(Josephus�������ʵ����ʾ��
�㷨����:���õ���ѭ������
���ṹ��|id|passwoed|next|
�������Ļ�����������:
(1)����n����㣨��ͷ��㣩�ĵ���ѭ������
(2)�������һ�������ѭ������Ѱ�ҵ�m�����
(3)����ý���idֵ�����ý���password��Ϊ�µ�mֵ��ɾ���ý��
(4)����mֵ���ϴ�������ɾ����㣬ֱ������Ϊ�ա�
*/


class Singly_linked_list
{
public:

	Singly_linked_list* CreateSingly_linked_list(int a);
	Singly_linked_list* push_frount()
	{
		Singly_linked_list* frount = CreateSingly_linked_list(NULL);
		return this;
	}

	Singly_linked_list* push_back()
	{
		Singly_linked_list* back = CreateSingly_linked_list(NULL)->next;
		return this;
	}

	int num = 0;
	Singly_linked_list* next = nullptr;
};

Singly_linked_list* Singly_linked_list::CreateSingly_linked_list(int a)
{
	//ʵ�ֵ�����ӿ�
	Singly_linked_list* H = new Singly_linked_list;
	Singly_linked_list* L = new Singly_linked_list;
	int capality = 0;
	H->num = capality;
	H->next = L;
	L->num = 15;
	L->next = nullptr;

	while (-1!=a)
	{
		Singly_linked_list* S = new Singly_linked_list;

		S->num = a;
		S->next = H->next;
		H->next = S;
		capality++;
		cin >> a;
	}
	return H;
}

auto CircularLinked_List(int a = 0, int b = 0)
{
	//��������������
	Singly_linked_list s1;
	Singly_linked_list s2;

	s1.CreateSingly_linked_list(a);
	s2.CreateSingly_linked_list(b);

	//��������������кϲ�
	s1.push_back()->next = s2.push_frount()->next;
	s2.push_frount()->next = s1.push_back();
	delete s2.push_frount();
}


int main()
{
	cout << "������Ҫ��������ݽ���������-1����ɽ�����־" << endl;
	CircularLinked_List();

	return 0;
}
