#include<iostream>
using namespace::std;

int main(){
    cout<<"Enter the value of 'a'"<<endl;
    int a;
    cin>>a;
    cout<<"Enter the value of 'b'"<<endl;
    int b;
    cin>>b;
    if (a>b)
    {
        cout<<"The Greater number is "<<a<<endl;
    }
    else{
        cout<<"The Greater number is "<<b<<endl;
    }
    return 0;
}