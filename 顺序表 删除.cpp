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
    int n,m;
    cout<<"����Ҫɾ����λ����";
    aaa:
	cin>>n;
    cout<<endl;
    if(n<1||n>N)
    {
    	cout<<"����λ����Ч�����������룺";
    	goto aaa;
	}
    cout<<"��ɾ����"<<n<<"λԪ��"<<endl<<endl;
    m = data[n-1];
	for(int j = n;j<N;j++)
	    data[j-1] = data[j];
	cout<<"ɾ��Ԫ��Ϊ"<<m<<endl<<endl;
	cout<<"��ɾ���������˳���Ϊ��"<<endl; 
	for(int i=0;i<N-1;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int  main()
{
    SeqList a;
	a.InitList();
	a.insert();
}
