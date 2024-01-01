#include <iostream>
using namespace std;

int main(){
    int a[100][100],n,right(0),left{0},sum{0};
    cin>>n;
    for (int i=0; i<n; i++) {
    for (int j=0; j<n ; j++) {
        cin>>a[i][j];
    }}
    for (int i=0; i<n; i++) {
        right+=a[i][i];
    }
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            if ((i + j) == (n - 1))
            {
                left+=a[i][j];
        }
        }
    }
    cout<<right<<endl;
    cout<<left<<endl;  
    sum= (right-left)*-1;
    cout<<sum<<endl;
    return 0;
}