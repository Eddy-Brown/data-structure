#include <iostream>
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void max();
private:
        int *data;            //˳���Ĵ������
        int MaxSize;           //˳�������Ԫ����
        int last;               //˳���ǰ�Ѵ�����������λ��(��0)
};
SeqList::SeqList(int length){  //˳�����Ĺ��캯��
    if(length>0){
        MaxSize = length;          //˳�����
        last = -1;                 //δ�洢����ʱΪ-1
        data = new int[MaxSize];  //����˳�������
}
}
void SeqList::InitList()
{
   int i;
   cout<<"������10������,�ÿո�ֿ�:"<<'\n';
   for(i=0;i<10;i++)
   {
      cin>>data[i];
   }
}
void SeqList::max()
{
   int i,m;
   m=data[0];
   for(i=1;i<10;i++)
   {
      if(data[i]>m)
		  m=data[i];
   }
   cout<<"�������10�����������:"<<m<<'\n';
   cout<<'\n';
}
int  main()
{
    SeqList a;
	a.InitList();
	a.max();
}
