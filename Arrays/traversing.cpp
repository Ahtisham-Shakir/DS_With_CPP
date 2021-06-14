#include<iostream>
using namespace std;
class temp
{
int arr[10];
int sum;
public:
// Member Function to initialize sum
temp()
{
    sum=0;
}
// Member Function to input values
void in()
{
    for(int i=0; i<10; i++)
    {
        cout<<"Enter an integer: ";
        cin>>arr[i];
    }
}
// Member Function to print sum
int print()
{
    for(int i=0; i<10; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
};
int main()
{
    temp obj;
    obj.in();
    cout<<"Sum= "<<obj.print();
    return 0;
}