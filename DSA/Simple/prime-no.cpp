#include<iostream>
using namespace::std;

int main(){
    cout<<"Enter a number to check it is a prime or not "<<endl;
    int n;
    cin>>n;
    int prime;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=1;
            break;
        }
        else{
            prime=0;
        }
        
    }
    if (prime==1){
        cout<<"The number is not prime";
    }
    else{
        cout<<"The number is  prime";
    }
    return 0;
}