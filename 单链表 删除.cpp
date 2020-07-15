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
           void Delete();
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

void Chain::Delete()
{
   ChainNode *p,*s;
   int i,count = 0;
   cout<<"删除的插入位置："<<endl;
   cin>>i;
   p=first;
   while(p!=NULL && count<i-1)
   {
   	    p=p->next;
   	    count++;
   } 
   
   s=p->next;
   p->next = s->next;
   delete s;
   
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
   c.Delete();
}

