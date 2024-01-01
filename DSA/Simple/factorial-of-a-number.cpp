#include<iostream>
using namespace::std;

int main(){
    cout<<"Enter a number of factorial and multiply"<<endl;
    int n;
    cin>>n;
    int mul=1;
    for (int i = 1; i <= n; i++)
    {
        mul=mul*i;
    }
    cout<<mul;
    return 0;
}