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
           int reserch();
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

int Chain::reserch()
{
   ChainNode *p;
   int count = 1;
   int x;
   cout<<"输入要查找的值：";
   cin>>x;
    p=first->next;
   while(p)
   {
      if(p->data == x)
        return count;
      p=p->next;
      count++;
   }
   return 0;
}

int main()
{
   Chain c;
   c.CreateList();
   cout<<endl<<"查找结果为："<<c.reserch();
}

