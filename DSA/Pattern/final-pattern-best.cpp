#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int start=1;
        int col=n;
        while (col>=row)
        {
            cout<<start<<" ";
            start++;
            col--;
        }
        int space=row-1;
        while (space>0)
        {
            cout<<"* ";
            space--;
        }
        int space1=row-1;
        while (space1>0)
        {
            cout<<"* ";
            space1--;
        }
        int col1=n;
        while (col1>=row)
        {
            start--;
            cout<<start<<" ";
            col1--;
        }
        cout<<endl;
        row++;
    }
    
}