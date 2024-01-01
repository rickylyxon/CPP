#include<iostream>
using namespace:: std;

int main(){
    cout<<"Enter a Character"<<endl;
    char a;
    cin>>a;
    if (a >='a'&& a<='z')
    {
        cout<<"The character is lowercase";
    }
    else if (a >='A'&& a<='Z')
    {
        cout<<"The character is uppercase";
    }
    else{
        cout<<"The character is numeric";
    }
    return 0;
}