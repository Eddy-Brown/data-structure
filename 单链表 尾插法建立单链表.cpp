#include <iostream>
#include<string.h>
using namespace std;

class ChainNode{
friend class Chain;
private:
    char str;
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
 //β�巨������������
   ChainNode *p,*rear;
   char e;
   first=new ChainNode;
   rear = first;
   cout<<"β�巨����������#����"<<endl;
   cin>>e;
   while(cin.get()!='#')
   {
      p=new ChainNode; 
      p->str=e; 
	  rear->next = p; 
	  rear=p;
      cin>>e;
  }
  rear->next = NULL;
}  
 
void Chain::bianli()
{
   ChainNode *p;
   p=first->next;
   while(p)
   {
      cout<<p->str<<' ';
      p=p->next;
   }
}

int main()
{
   Chain c;
   c.CreateList();
   c.bianli();
}

