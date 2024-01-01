#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Enter a value of a and b"<<endl;
    cin>>a>>b;
    char ch;
    cout<<"Enetr an operator"<<endl;
    cin>>ch;
    switch (ch)
    {
    case '+': cout<<a+b<<endl;
        break;
    case '-': cout<<a-b<<endl;
        break;
    case '*': cout<<a*b<<endl;
        break;
    case '/': cout<<a/b<<endl;
        break;
    default: cout<<"That's not valid"<<endl;
        break;
    }
    return 0;
}