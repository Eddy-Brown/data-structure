#include <iostream>
using namespace std;

class ChainNode{
friend class Chain;
private:
    int data;
    ChainNode * next;
};

class Chain{
public:
           Chain(){first=NULL;}
           ~Chain(){};
           void CreateList();
           void insert();
private:
           ChainNode* first;   //指向第一个结点的指针
};

void Chain::CreateList(){
 //尾插法建立无序链表
   ChainNode *p,*rear;
   int e;
   first=new ChainNode;
   rear = first;
   cout<<"尾插法建立链表，以0结束"<<endl;
   cin>>e;
   while(e)
   {
      p=new ChainNode; 
      p->data=e; 
	  rear->next = p; 
	  rear=p;
      cin>>e;
  }
  rear->next = NULL;
}  

void Chain::insert()
{
   ChainNode *p,*s;
   int i,m,count = 0;
   cout<<"输入插入位置和数值："<<endl;
   cin>>i>>m;
   p=first;
   while(p!=NULL && count<i-1)
   {
   	    p=p->next;
   	    count++;
   } 
   
   s = new ChainNode;
   s->data = m;
   s->next = p->next;
   p->next = s;
   #include <iostream>
using namespace std;

class ChainNode{
friend class Chain;
private:
    int data;
    ChainNode * next;
};

class Chain{
public:
           Chain(){first=NULL;}
           ~Chain(){};
           void CreateList();
           void insert();
private:
           ChainNode* first;   //指向第一个结点的指针
};

void Chain::CreateList(){
 //尾插法建立无序链表
   ChainNode *p,*rear;
   int e;
   first=new ChainNode;
   rear = first;
   cout<<"尾插法建立链表，以0结束"<<endl;
   cin>>e;
   while(e)
   {
      p=new ChainNode; 
      p->data=e; 
	  rear->next = p; 
	  rear=p;
      cin>>e;
  }
  rear->next = NULL;
}  

void Chain::insert()
{
   ChainNode *p,*s;
   int i,m,count = 0;
   cout<<"输入插入位置和数值："<<endl;
   cin>>i>>m;
   p=first;
   while(p!=NULL && count<i-1)
   {
   	    p=p->next;
   	    count++;
   } 
   
   s = new ChainNode;
   s->data = m;
   s->next = p->next;
   p->next = s;
   
   p=first->next;
   while(p!=NULL)
   {
      cout<<p->data<<' ';
      p=p->next;
   }
}

int main()
{
   Chain c;
   c.CreateList();
   c.insert();
}

   p=first->next;
   while(p!=NULL)
   {
      cout<<p->data<<' ';
      p=p->next;
   }
}

int main()
{
   Chain c;
   c.CreateList();
   c.insert();
}

