#include <iostream>
using namespace std;
class temp
{
    char res[20];
    int i;

public:
    void sub(char str[], int s, int e)
    {
        for (i = s; i < e; i++)
        {
            res[i] = str[i];
            res[i + 1] = '\0';
        }
        cout << "Substring is= " << res << endl;
    }
};
int main()
{
    temp obj;
    int i;
    for (i = 1; i <= 8; i++)
        obj.sub("Pakistan", 0, i);
    return 0;
}
