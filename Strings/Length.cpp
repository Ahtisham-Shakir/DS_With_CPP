#include <iostream>
using namespace std;
class temp
{
private:
    char str[20], i;

public:
    void in()
    {
        cout << "Enter String: ";
        cin >> str;
    }
    int len()
    {
        for (i = 0; str[i] != '\0'; i++)
            ;
        return i;
    }
};
int main()
{
    temp obj;
    obj.in();
    cout << "Lenth of the String is= " << obj.len() << endl;
}