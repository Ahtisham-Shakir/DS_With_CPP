#include<iostream>
using namespace std;
class temp
{
private:
int arr[10];
public:
// Member Function to Enter values in the Array
void in()
{
    cout<<"Enter 10 values in the array "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter an integer: ";
        cin>>arr[i];
    }
}
// Member Function to print even values in the Array
void print()
{
    cout<<"Even Values in the Array are: "<<endl;
    for(int i=0; i<10; i++)
    if(arr[i]%2==0)
    cout<<arr[i]<<endl;
}
};
int main()
{
    temp obj;
    obj.in();
    obj.print();
    return 0;
}