#include <iostream>
using namespace std;
class temp
{
private:
    char str[20], substr[20];
    int len, sublen, total;

public:
    // Member Function to input Strings
    void input()
    {
        cout << "Enter String: ";
        cin >> str;
        cout << "Enter Substring: ";
        cin >> substr;
    }
    // Member Function to calculate len & sublen
    void length()
    {
        for (int i = 0; str[i] != '\0'; i++)
            len = i;
        for (int i = 0; substr[i] != '\0'; i++)
            sublen = i;
        total = len - sublen + 1;
    }
    //Member Function to Match Pattern
    void match()
    {
        int i, c;
        for (c = 0; c <= total; c++)
        {
            for (i = 0; i <= sublen; i++)
            {

                if (i == sublen)
                {
                    cout << "Pattern Matched at position: " << c + 1;
                    exit(0);
                }
                if (substr[i] != str[c + i])
                    break;
            }
        }
        cout << "Pattern not Matched: ";
    }
};
int main()
{
    temp obj;
    obj.input();
    obj.length();
    obj.match();
}