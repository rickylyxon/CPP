#include<iostream>
using namespace :: std;

int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        } 
        cout<<endl;
    }
    return 0;
}