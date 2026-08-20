#include <iostream>
using namespace std;

class Example {
    int a, b;

    void sum(); 

public:
    void getdata(int ,int);
    void print();
};

void Example::getdata(int x,int) {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

void Example::sum() {
    cout << "Sum = " << a + b << endl;
}

void Example::print() {
    cout << "The two numbers are: " << a << " and " << b << endl;
    sum();
}

int main() {
    Example E;

    E.getdata();
    E.print();

    return 0;
}

