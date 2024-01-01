#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vector1{};
    vector<int>vector2{};

    cout<<"Enter the value to pushback vector1"<<endl;
    int a{0};
    cin>>a;
    vector1.push_back(a);

    cout<<"Enter another the value to pushback vector1"<<endl;
    int b{0};
    cin>>b;
    vector1.push_back(b);

    cout<<"The value of the elements in vector1"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    cout<<"there are "<<vector1.size()<<" element in vector1"<<endl;

    cout<<"Enter the value to pushback vector2"<<endl;
    int c{0};
    cin>>c;
    vector2.push_back(c);

    cout<<"Enter another the value to pushback vector1"<<endl;
    int d{0};
    cin>>d;
    vector2.push_back(d);

    cout<<"\nThe value of the elements in vector2"<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;

    cout<<"there are "<<vector2.size()<<" element in vector2"<<endl;

    vector<vector<int>>vector_2d{};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"\nThe value of the elements in vector_2d"<<endl;

    cout<<vector_2d.at(0).at(0);
    cout<<"\t"<< vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0);
    cout<<"\t"<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0)= 1000;

    cout<<"\nThe value of the elements in vector_2d"<<endl;
    cout<<vector_2d.at(0).at(0);
    cout<<"\t"<< vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0);
    cout<<"\t"<<vector_2d.at(1).at(1)<<endl;

    cout<<"The value of the elements in vector1"<<endl;
    
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    return 0;
}