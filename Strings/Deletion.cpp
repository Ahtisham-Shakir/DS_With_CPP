#include <iostream>
using namespace std;
class temp
{
private:
    char str[30], st1[20], st2[20];
    int len, loc, s;

public:
    //Member Function to input Strings
    void in()
    {
        cout << "Enter String: ";
        cin >> str;
        cout << "Enter Location to delete sub string: ";
        cin >> loc;
        cout << "Enter length of sub string ";
        cin >> s;
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
        int j;
        for (int i = 0; i < loc - 1; i++)
        {
            st1[i] = str[i];
            st1[i + 1] = '\0';
            j = i + 1;
        }
        for (int i = 0; str[j + i] != '\0'; i++)
        {
            st2[i] = str[j + i];
            st2[i + 1] = '\0';
        }
    }
    // Member Function to combine three strings
    void del()
    {

        int c = 0;
        for (int i = 0; st1[i] != '\0'; i++, c++)
        {

            str[c] = st1[i];
        }

        for (int i = s; st2[i] != '\0'; i++, c++)
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
    obj.del();
}