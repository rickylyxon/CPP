#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c;
    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin, c);
    cout<<a+i<<endl;
    cout<<b+d<<endl;
    string result =s + c;
    cout<<result<<endl;
    return 0;
}