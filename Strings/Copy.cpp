#include<iostream>
using namespace std;
class temp
{
    int i;
    public:
    void cpy(char str1[], char str2[])
    {
for(i=0; str1[i]!='\0'; i++)
{
    str2[i]=str1[i];
    str2[i+1]='\0';
}
    }
};
int main()
{
    char s1[20],s2[20];
    temp obj;
    cout<<"Enter String: ";
    cin>>s1;
    obj.cpy(s1,s2);
    cout<<"First String is= "<<s1<<endl;
    cout<<"Second String is= "<<s2<<endl;
    return 0;
    
}