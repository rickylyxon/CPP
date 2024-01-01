#include<iostream>
using namespace std;

int main()
{
    cout<<"Ricky room cleaning service"<<endl;
    const double for_small_room {25};
    const double for_large_room {35};
    const double services_tax {0.06};
    const int expiry_day {30};
    cout<<"The number of small room that you like to cleaned ";
    int no_of_small_room {0};
    cin>>no_of_small_room;
    cout<<"The number of larged room that you like to cleaned ";
    int no_of_large_room {0};
    cin>>no_of_large_room;
    cout<<"==========================="<<endl;
    cout<<"Estimates for room cleaning services"<<endl;
    cout<<"Number of small rooms"<<no_of_small_room<<endl;
    cout<<"Number of large rooms"<<no_of_large_room<<endl;
    cout<<"Price per small rooms $"<<for_small_room<<endl;
    cout<<"Price per large rooms $"<<for_large_room<<endl;
    cout<<"Cost of the service $"<<(no_of_small_room * for_small_room)+(no_of_large_room * for_large_room)<<endl;
    cout<<"Total tax of the service $"<<(no_of_small_room * for_small_room*services_tax)+(no_of_large_room * for_large_room * services_tax)<<endl;
    cout<<"==========================="<<endl;
    cout<<"Total estimates : $"<<((no_of_small_room * for_small_room)+(no_of_large_room * for_large_room))+((no_of_small_room * for_small_room*services_tax)+(no_of_large_room * for_large_room * services_tax))<<endl;
    cout<<"This estimates is valid for "<<expiry_day<<"days"<<endl;
    return 0;
}