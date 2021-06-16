#include <iostream>
using namespace std;
class temp
{
    int i = 0;
    int r = 0;

public:
    void combine(char str1[], char str2[], char str3[], char res[])
    {
        for (i = 0; str1[i] != '\0'; i++, r++)
            res[r] = str1[i];
        for (i = 0; str2[i] != '\0'; i++, r++)
            res[r] = str2[i];
        for (i = 0; str3[i] != '\0'; i++, r++)
            res[r] = str3[i];
        res[r + 1] = '\0';
    }
};
int main()
{
    temp obj;
    char s1[20], s2[20], s3[20], r[30];
    cout << "Enter first String: ";
    cin >> s1;
    cout << "Enter Second String: ";
    cin >> s2;
    cout << "Enter Third String: ";
    cin >> s3;
    obj.combine(s1, s2, s3, r);
    cout << "Resultant String is= " << r << endl;
}