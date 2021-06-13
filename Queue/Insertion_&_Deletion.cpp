#include<iostream>
using namespace std;
class que
{
int f,r;
int q[4];
public:
que()  // constructor to initialize f & r
{
    f=r=-1;
}
// member function to insert value
 void insert(int n)
{
    if(r==3)
    {
        cout<<"Queue is full";
       exit(0);
    }
    else
    {
    r++;
    q[r]=n;
    if(f==-1)
    f=0;
    }
}
// member function to delete value
int del()
{
    int data;
    if(f==-1)
    {
        cout<<"Queue is empty";
       exit(0);
    }
    else 
    {
      data=q[f];
      if(f==r)
      f=r=-1;
      else f++;
      return data;
  }
}
// member function to value in queue
void print()
{
if(f==-1)
{
    cout<<"Queue is empty";
   exit(0);
}
   else
for(int i=f; i<=r;i++)
    cout<<q[i]<<"\t";
    cout<<endl;

}
};
int main()
{
que obj;
int opt=1,val;
while(opt!=3)
{
    cout<<"1: Insert value "<<endl;
    cout<<"2: Delete Item "<<endl;
    cout<<"3: Exit "<<endl;
    cout<<"Enter choice "<<endl;
    cin>>opt;
    switch(opt)
    {
        case 1:
        cout<<"Enter value to insert: ";
        cin>>val;
        obj.insert(val);
        cout<<"Queue after insertion"<<endl;
        obj.print();
        break;
        case 2:
        cout<<"value "<<obj.del()<<" is deleted "<<endl;
        cout<<"Queue after deletion "<<endl;
        obj.print();
        break;
    }
}
}