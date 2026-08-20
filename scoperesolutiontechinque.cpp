#include <bits/stdc++.h>
using namespace std;


namespace A{
    int x=10;
    void display(){
        cout<<"A"<<endl;
    }
}
namespace B{
    double x=6.5;
    void display(){
        cout<<"B"<<endl;
    }
}
namespace sum{
    int s=A::x+B::x;
}
namespace C=B;
void display();

int main() {
string x="CES-36";
display();
cout<<x<<endl;
//::-this means scope resolution
A::display();
cout << A::x << endl;
B::display();
cout << B::x << endl;
cout << sum::s << endl;
cout << C::x << endl;

 
}
void display(){
    cout<<"Main"<<endl;
}

