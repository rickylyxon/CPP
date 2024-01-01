#include <iostream>
using namespace std;
class Time
{
private:
    int hour;
    int min;
    int sec;

public:
    void setTime()
    {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter min: ";
        cin >> min;
        cout << "Enter sec: ";
        cin >> sec;
    }
    void display()
    {
        if (hour < 10)
        {
            cout << "0";
        }
        cout << hour << "-";

        if (min < 10)
        {
            cout << "0";
        }
        cout << min << "-";

        if (sec < 10)
        {
            cout << "0";
        }
        cout << sec << endl;
    }
    void sum(Time x, Time y);
};
void Time::sum(Time x, Time y)
{
    hour = x.hour + y.hour;
    min = x.min + y.min;
    sec = x.sec + y.sec;

    if (sec >= 60)
    {
        min++;
        sec -= 60;
    }
    if (min >= 60)
    {
        hour++;
        min -= 60;
    }
}
int main()
{
    Time a, b, c;
    cout << "Time for first: " << endl;
    a.setTime();
    cout << "Time for second: " << endl;
    b.setTime();
    c.sum(a, b);
    cout << "First Time: " << endl;
    a.display();
    cout << "Second Time: " << endl;
    b.display();
    cout << "Sum of first and second: " << endl;
    c.display();
    return 0;
}