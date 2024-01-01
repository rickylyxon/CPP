/*Create a class that imitates part of the functionality of the
 basic data type float. Call the class Float (note different
capitalization). The only data in this class is a float variable.
Add overloaded operators for addition,subtraction,
multiplication and division.
Write a menu driven program to perform an operation from
the four arithmetic operators. The program should exit
when the user want to do so. Include all the member
functions that are necessary.*/

#include <iostream>
using namespace std;
class Float
{
private:
    float num;

public:
    Float() : num(0) {}
    Float(float n)
    {
        num = n;
    }
    void get()
    {
        cout << "Enter the number: ";
        cin >> num;
    }
    void show()
    {
        cout << "num = " << num << endl;
    }
    Float operator+(Float x);
    Float operator-(Float x);
    Float operator*(Float x);
    Float operator/(Float x);
};
Float Float::operator+(Float x)
{
    return Float(num + x.num);
}
Float Float::operator-(Float x)
{
    return Float(num - x.num);
}
Float Float::operator*(Float x)
{
    return Float(num * x.num);
}
Float Float::operator/(Float x)
{
    return Float(num / x.num);
}
int main()
{
    Float a, b(3.1), c;
    int choice;
    a.get();
    cout << "(1) for addition, (2) for subtraction, (3) for multiplication, (4) for division, (5)Exit:" << endl;
    cout << "Enter the choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    case 5:
        exit(1);
    default:
        cout << "invalid input";
        exit(1);
    }
    c.show();
    return 0;
}