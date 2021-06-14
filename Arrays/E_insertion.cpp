#include<iostream>
using namespace std;
class temp
{
private:
int arr[10];
public: 
// Member Function to assign values to Array
void assign()
{
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
}
//Member Function to insert values in the Array
void in()
{
    cout<<"Enter 6 integer in the array "<<endl;
    for(int i=4; i<10; i++)
    {
        cout<<"Enter an integer: ";
        cin>>arr[i];
    }
}
// Member Function to Print values in the Array
void print()
{
    cout<<"Values in the Array are "<<endl;
    for(int i=0; i<10; i++)
    cout<<arr[i]<<endl;
}
};
int main()
{
    temp obj;
    obj.assign();
    obj.in();
    obj.print();
}