#include <iostream>
using namespace std;
class temp
{
private:
    char str[30], st1[20], st2[20], sub[10];
    int len, p;

public:
    //Member Function to input Strings
    void in()
    {
        cout << "Enter String: ";
        cin >> str;
        cout << "Enter Substring: ";
        cin >> sub;
        cout << "Enter position: ";
        cin >> p;
    }
    // Member Function to find length of string
    void length()
    {
        for (int i = 0; str[i] != '\0'; i++)
            len = i;
    }
    // Member Function to divide string into two sub strings
    void extract()
    {
        for (int i = 0; i <= p - 1; i++)
        {
            st1[i] = str[i];
            st1[i + 1] = '\0';
        }
        for (int i = p; i <= len; i++)
        {
            st2[i - p] = str[i];
            st2[i - p + 1] = '\0';
        }
    }
    // Member Function to combine three strings
    void insert()
    {

        int c = 0;
        for (int i = 0; st1[i] != '\0'; i++, c++)
        {

            str[c] = st1[i];
        }

        for (int i = 0; sub[i] != '\0'; i++, c++)
        {

            str[c] = sub[i];
        }
        for (int i = 0; st2[i] != '\0'; i++, c++)
        {
            str[c] = st2[i];
            str[c + 1] = '\0';
        }
        cout << "Resultant String is= " << str << endl;
    }
};
int main()
{
    temp obj;
    obj.in();
    obj.length();
    obj.extract();
    obj.insert();
}