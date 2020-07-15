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
           ChainNode* first;   //ָ���һ������ָ��
};

void Chain::CreateList(){
 //β�巨������������
   ChainNode *p,*rear;
   int e;
   first=new ChainNode;
   rear = first;
   cout<<"β�巨����������0����"<<endl;
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
   cout<<"ɾ���Ĳ���λ�ã�"<<endl;
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

