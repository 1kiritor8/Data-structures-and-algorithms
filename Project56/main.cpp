#include<iostream>
#include<string>

using namespace std;

/*
循环链表（CircularLinkedList)算法实现1
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


循环链表(CircularLinked List)算法实现2
LinkListmerge_2(LinkList RA,LinkList RB)
{
LNode *p;
p=RA->next;
RA->next=RB->next->next;
free(RB->next);
RB->next-p;
return(RB);
}


约瑟夫环(Josephus）问题的实现提示：
算法分析:采用单向循环链表
结点结构：|id|passwoed|next|
解决问题的基本步骤如下:
(1)建立n个结点（无头结点）的单向循环链表
(2)从链表第一个结点起循环计数寻找第m个结点
(3)输出该结点的id值，将该结点的password作为新的m值，删除该结点
(4)根据m值不断从链表中删除结点，直到链表为空。
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
	//实现单链表接口
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
	//创建两个单链表
	Singly_linked_list s1;
	Singly_linked_list s2;

	s1.CreateSingly_linked_list(a);
	s2.CreateSingly_linked_list(b);

	//将两个单链表进行合并
	s1.push_back()->next = s2.push_frount()->next;
	s2.push_frount()->next = s1.push_back();
	delete s2.push_frount();
}


int main()
{
	cout << "请在需要输入的数据结束后输入-1以完成结束标志" << endl;
	CircularLinked_List();

	return 0;
}
