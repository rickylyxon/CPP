/*Create a class date that contains three members: the day of the
month, the month and the year, all of type int.. It should also
have two member functions: getdate(), which allows the user to
enter a date in 31/12/02 format, and showdate(), which displays
the date.*/

#include<iostream>

using namespace std;

class date{
    private:
    int day, month, year;
    public:
    void get_date(){
        cout<<"Enter the day of the month"<<endl;
        cin>>day;
        cout<<"Eneter the month of the year"<< endl;
        cin>>month;
        cout<<"Enetr the year"<<endl;
        cin>>year;
    }
    void show_date(){
        if(day<10)
        {
            cout<<"0";
        }
        cout<<day<<"/";
        if(month<10)
        {
            cout<<"0";
        }
        cout<<month<<"/";
        if (year<10)
        {
            cout<<"0";
        }
        cout<<year<<endl;
    }
};
int main()
{
    date d1;
    d1.get_date();
    d1.show_date();
    return 0;
}