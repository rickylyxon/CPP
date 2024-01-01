#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int num=0;
        int space=n-row;
        while (space>0)
        {
            cout<<"  ";
            space--;
        }
        int col=1;
        while (col<=row)
        {
            num++;
            cout<<num <<" ";
            col++;
        }
        int oth=row-1;
        while (oth>0)
        {
            num--;
            cout<<num <<" ";
            oth--;
        }
        cout<<endl;
        row++;   
    }
}