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
           int length();
private:
           ChainNode* first;   //指向第一个结点的指针
};

void Chain::CreateList(){
 //头插法建立无序链表
   ChainNode *p;
   int e;
   first=new ChainNode;
   first->next=NULL;
   cout<<"头插法建立链表，以0结束"<<endl;
   cin>>e;
   while(e)
   {
      p=new ChainNode; 
      p->data=e; 
	  p->next=first->next; 
	  first->next=p;
      cin>>e;
  }
}  

int Chain::length()
{
   ChainNode *p;
   int count = 0;
   p=first->next;
   while(p)
   {
      cout<<p->data<<' ';
      p=p->next;
      count++;
   }
   return count;
}

int main()
{
   Chain c;
   c.CreateList();
   cout<<endl<<"长度为："<<c.length();
}

