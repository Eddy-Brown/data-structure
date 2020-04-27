#include <iostream>
#define N 10      //长度 ,默认为10 
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void insert();
private:
    int *data;            //顺序表的存放数组
    int MaxSize;           //顺序表的最大元素数
    int last;               //顺序表当前已存数据项的最后位置(≥0)
};

SeqList::SeqList(int length)  //顺序表类的构造函数
{  
    if(length>0)
	{
        MaxSize = length;          //顺序表长度
        last = -1;                 //未存储数据时为-1
        data = new int[MaxSize];  //创建顺序表数组
    }
}

void SeqList::InitList()
{
    int i;
    cout<<"请输入"<<N<<"个整数,用空格分开:"<<'\n';
    for(i=0;i<N;i++)
    {
        cin>>data[i];
    }
}

void SeqList::insert()
{
    int m,n;
    cout<<"输入插入位和插入的整数，用空格隔开：";
    aaa:
	cin>>n>>m;
    cout<<endl;
    if(n<1||n>N+1)
    {
    	cout<<"输入位数无效，请重新输入：";
    	goto aaa;
	}
    cout<<"在第"<<n<<"位插入元素"<<m<<endl;
	for(int j = N;j>=n;j--)
	    data[j] = data[j-1];
	data[n-1] = m;
	
	for(int i=0;i<N+1;i++)
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
