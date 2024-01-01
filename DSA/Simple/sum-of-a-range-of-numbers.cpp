#include<iostream>
using namespace::std;

int main(){
    cout<<"Enter a number that you want to add in a range"<<endl;
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}