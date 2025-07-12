#include "iostream"
#include <string>

using namespace std;

/*思考题：
已知一个带头结点的单链表H，设计算法实现：以表中第一个元素作
为标准，将单链表中所有值小于第一个元素的结点均放在第一个元素结点
之前，所有值大于第一个元素的结点均放在第一个元素结点之后。


结点的定义：
typedef struct Node
{
ElemType data;
struct Node *next;
}LNode,*LinkList;
*/

class Single_linkedlists
{
public:
    int num;
    Single_linkedlists* Next;
};

/*
//头插法实现
LinklistCreateFromHead(）
{
LinkList L;
LNode* s,
int x;
int flag=1;
L=(Linklist)malloc(sizeof(LNode));
L->next=NULL;
scanf("%d",&x);
while(x!=-1)
{
    s=(LNode*)malloc(sizeof(LNode));
    s->data=x;
    s->next=L->next;
    L->next=s;
    scanf("%d",&x);
}
return L;
}


//尾插法的实现
Linklist CreateFromTailO
{
LinkList L;
LNode *r,*s;
L=(LNode*)malloc(sizeof(LNode));
int x;
r = H;
L->next=NULL;
scanf(("%d",&x);
while(x!=-1)
{
    s->data=x;
    s=(LNode*)malloc(sizeof(LNode));
    s->next=r->next
    r->next=s;
    r=s;
    scanf("%d",&x);
    r->next=NULL;
}
return L;
}
*/

//单链表
Single_linkedlists* Single_LinkedLists(int arr[],int lenght)
{
    //生成头链表和第一个链表
    Single_linkedlists* H = new Single_linkedlists;
    Single_linkedlists* next = new Single_linkedlists;
    int capacaly = 0;
    H->num = 0;
    H->Next = next;
    next->num = 15;
    next->Next = nullptr;
    
    //创建新的链表，并实现头插和尾插
    for (int i = 0;i < lenght;i++)
    {
        if (arr[i] < H->Next->num)
        {
            
            Single_linkedlists* ListsName1 = new Single_linkedlists;
            ListsName1->Next = H->Next;
            H->Next = ListsName1;
            ListsName1->num = arr[i];
            capacaly++;
        }
        else if (arr[i] > H->Next->num)
        {
            Single_linkedlists* ListsName2 = new Single_linkedlists;
            ListsName2->Next = H->Next->Next;
            H->Next->Next = ListsName2;
            ListsName2->num = arr[i];
            capacaly++;
        }
        else
        {
            cout << "输入数据错误！！！" << endl;
        }

        H->num = capacaly;

    }

    return H;
}

void printSingle_LinkedLists(Single_linkedlists* s,int length)
{
    cout << "有链表 " << s->num << "个" << endl;
    cout << s->Next->num << endl;
    cout << s->Next->Next->num << endl;
    cout << s->Next->Next->Next->num << endl;
    cout << s->Next->Next->Next->Next->num << endl;
}

int main()
{
    int arr[] = { 5,11,22,33 };
    int lenght = sizeof(arr) / sizeof(arr[0]);
    printSingle_LinkedLists(Single_LinkedLists(arr, lenght), lenght);

    return 0;
}