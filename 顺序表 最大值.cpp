#include <iostream>
using namespace std;
 
class SeqList{
public:
    SeqList(int Maxsize = 10);
    ~SeqList(){delete []data; }          
    void InitList(); 
	void max();
private:
        int *data;            //顺序表的存放数组
        int MaxSize;           //顺序表的最大元素数
        int last;               //顺序表当前已存数据项的最后位置(≥0)
};
SeqList::SeqList(int length){  //顺序表类的构造函数
    if(length>0){
        MaxSize = length;          //顺序表长度
        last = -1;                 //未存储数据时为-1
        data = new int[MaxSize];  //创建顺序表数组
}
}
void SeqList::InitList()
{
   int i;
   cout<<"请输入10个整数,用空格分开:"<<'\n';
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
   cout<<"你输入的10个整数最大是:"<<m<<'\n';
   cout<<'\n';
}
int  main()
{
    SeqList a;
	a.InitList();
	a.max();
}
