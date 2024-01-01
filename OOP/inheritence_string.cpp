#include<iostream>
#include<string.h>
using namespace std;
class String
{
    protected:
    char str[8];
    int size;
    public:
    String(): str(),size(8){}
    String(const char *s)
    {
        int len = strlen(s);
        int i;
        for ( i = 0; i < len; i++)
        {
            str[i]=s[i];
        }
        
    }
    void display()
    {
        for (int i = 0; i <size; i++)
        {
            cout<<str[i];
        }
        
    }
};
class Pstring : public String
{
    public:
    Pstring(const char *s)
    {
        int length = strlen(s);
        int j;
        if(size<length + 1)
        {
            cout<<"Size is overflow\n";
            cout<<"The given string length is more than size => copying partial string"<<endl;
            for( j = 0;j < size;j++)
            {
                str[j] = s[j];
            }
        }
        else
        {
            cout<<"The given string length is less than size => copying string"<<endl;
            int k;
            for ( k = 0; k < length; k++)
            {
                str[k]=s[k];
            }
        }
    }
};
int main()
{
    Pstring s1 = "Hello";
    s1.display();
    cout<<endl;
    Pstring s2="Hello World";
    s2.display();
    return 0;
}