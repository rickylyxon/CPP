#include<iostream>
using namespace std;

class publication {
    protected:
    char Title[100];
    float price;
    public:
    void getdata(){
        cout<<"Enter the title"<<endl;
        cin>>Title;
        cout<<"Enter the price"<<endl;
        cin>>price;
    }
    void putdata(){
        cout<<"Title :";
        cout<<Title;
        cout<<"\nPrice :";
        cout<<price;
    }
};
class book: public publication{
    private:
    int page_count;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter Page"<<endl;
        cin>>page_count;
    }
    void putdata(){
        publication::putdata();
        cout<<"\nPage Count :";
        cout<<page_count;
    }
};
class tape: public publication{
    private:
    float playing_time_in_minutes;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter play time in minutes"<<endl;
        cin>>playing_time_in_minutes;
    }
    void putdata(){
        publication::putdata();
        cout<<"\nPlaying Time In Minutes :";
        cout<<playing_time_in_minutes;
    }
};
int main(){
    book b1;
    cout<<"Enter the data of the first book"<<endl;
    b1.getdata();
    cout<<"\nThe detail of the first book"<<endl;
    b1.putdata();
    tape t1;
    cout<<"\nEnter the data of the first tape"<<endl;
    t1.getdata();
    cout<<"The detail of the first tape"<<endl;
    t1.putdata();
}