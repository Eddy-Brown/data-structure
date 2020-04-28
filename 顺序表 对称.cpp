#include <iostream>
#define N 10      //���� ,Ĭ��Ϊ10 
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void symmetric();
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

void SeqList::symmetric()
{
	int j = N - 1;
	for(int i=0;i<N;i++)
    {
        if(data[i]==data[j])
        {
        	j--;
		}
		else
		{
			cout<<"0";
			exit(0);
		}
    }
    cout<<"1";
    cout<<'\n';
}

int  main()
{
    SeqList a;
	a.InitList();
	a.symmetric();
}
