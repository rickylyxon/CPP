#include<iostream>
using namespace std;
class Bus
{
private:
    int bus_capacity;
    int bus_goods;
    int bus_fuel;
    int bus_driver;
    int returns;
    int bus_fare=550;
    int bus_monthTrips=10;
    int bus_driver_expence=3000;
    int Bus_RoundTrips;
    
public:
    void get_data()
    {
    cout<<endl<<"Bus Fares = "<<bus_fare<<endl<<"Bus Capacity : ";
    cin>>bus_capacity;

    cout<<"Bus Goods Fares : ";
    cin>>bus_goods;

    cout<<"Bus Fuels Expence : ";
    cin>>bus_fuel;

    cout<<"Bus Driver Fee : ";
    cin>>bus_driver;
    }

    void bus_returns()
    {
    returns=(((bus_capacity*bus_fare)*9/10)+(bus_goods*85/100))-(bus_fuel+bus_driver);
    cout<<returns;
    }

    void round_trip(Bus b1,Bus b2){
    Bus_RoundTrips=b1.returns+b2.returns;
    cout<<Bus_RoundTrips;
    cout<<endl<<"After living expence of Driver (3000)for 3 days = ";
    cout<<Bus_RoundTrips-bus_driver_expence;
    }

    void month_trip(Bus b1){
        int monthTrips=b1.Bus_RoundTrips*bus_monthTrips;
        cout<<monthTrips;
    }
};

int main()
{
    Bus bus1,bus2,bus_round,bus_month;

    bus1.get_data();
    cout<<"Bus One Way Returns is - ";
    bus1.bus_returns();

    cout<<endl<<endl<<"----------------------------------------------------------------------------------";

    bus2.get_data();
    cout<<"Bus One Way Returns is - ";
    bus2.bus_returns();
    
    cout<<endl<<"Bus Round Trip Returns is - ";
    bus_round.round_trip(bus1,bus2);



    cout<<endl<<"Bus Month Trip Returns is - ";
    bus_month.month_trip(bus_round);


    return 0;
}
