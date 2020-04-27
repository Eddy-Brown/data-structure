#include <iostream>
#define N 10      //���� ,Ĭ��Ϊ10 
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void insert();
private:
    int *data;            //˳���Ĵ������
    int MaxSize;           //˳�������Ԫ����
    int last;               //˳���ǰ�Ѵ�����������λ��(��0)
};

SeqList::SeqList(int length)  //˳�����Ĺ��캯��
{  
    if(length>0)
	{
        MaxSize = length;          //˳�����
        last = -1;                 //δ�洢����ʱΪ-1
        data = new int[MaxSize];  //����˳�������
    }
}

void SeqList::InitList()
{
    int i;
    cout<<"������"<<N<<"������,�ÿո�ֿ�:"<<'\n';
    for(i=0;i<N;i++)
    {
        cin>>data[i];
    }
}

void SeqList::insert()
{
	for(int i=0;i<N;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<'\n';
}

int  main()
{
    SeqList a;
	a.InitList();
	a.insert();
}
