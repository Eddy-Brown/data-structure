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

int Chain::reserch()
{
   ChainNode *p;
   int count = 1;
   int x;
   cout<<"����Ҫ���ҵ�ֵ��";
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
   cout<<endl<<"���ҽ��Ϊ��"<<c.reserch();
}

