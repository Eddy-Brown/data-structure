#include <iostream>
#define N 10      //���� ,Ĭ��Ϊ10 
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void oddeven();
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

void SeqList::oddeven()
{
    int i,j=1,m,n;
    for(i=0;i<N;i++)
    {
        aaa:
		if(data[i]%2==0)
        {
        	for(;j<N;j++)
        	{
        		if(data[j]%2!=0)
        	    {
        		    m=data[i];
				    data[i] = data[j];
			        data[j] = m;
			        j++;i++;
			        goto aaa;
			    }
			}
		}  
		else
			j++;
    }
    for(int n=0;n<N;n++)
    {
        cout<<data[n]<<" ";
    }
    cout<<endl<<endl;
}

int  main()
{
    SeqList a;
	a.InitList();
	a.oddeven();
}
