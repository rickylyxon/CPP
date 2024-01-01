/*Create a class that imitates part of the functionality of the
 basic data type int. Call the class Int (note different
capitalization). Add overloaded increment (++) and
decrement (-) operators that operate in both prefix and
 postfix notation and return values. Write main() to test
these operators.*/
#include <iostream>

using namespace std;
class Int {
private:
    int value;

public:
    Int(int value) : value(value) {}

    Int& operator++() {
        ++value;
        return *this;
    }

    Int operator++(int) {
        Int temp = *this;
        ++*this;
        return temp;
    }

    Int& operator--() {
        --value;
        return *this;
    }

    Int operator--(int) {
        Int temp = *this;
        --*this;
        return temp;
    }

    friend ostream& operator<<(ostream& out, const Int& i) {
        out << i.value;
        return out;
    }
};

int main() {
    Int x = 7;
    cout << x++ << endl; // prints 5
    cout << ++x << endl; // prints 7
    cout << x-- << endl; // prints 7
    cout << --x << endl; // prints 5
    return 0;
}
