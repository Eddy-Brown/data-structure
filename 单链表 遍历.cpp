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
           void bianli();
private:
           ChainNode* first;   //ָ���һ������ָ��
};

void Chain::CreateList(){
 //ͷ�巨������������
   ChainNode *p;
   int e;
   first=new ChainNode;
   first->next=NULL;
   cout<<"ͷ�巨����������0����"<<endl;
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

void Chain::bianli()
{
   ChainNode *p;
   p=first->next;
   while(p)
   {
      cout<<p->data<<' ';
      p=p->next;
   }
}

int main()
{
   Chain c;
   c.CreateList();
   c.bianli();
}

