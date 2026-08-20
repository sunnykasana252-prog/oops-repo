#include <bits/stdc++.h>
using namespace std;

namespace start{
    void display(){
        cout<<"I am in display of start namespace"<<endl;
    }
}
namespace first{
     void display(){
        cout<<"I am in display of first namespace"<<endl;
    }
}
namespace second{
    void display() {
        cout << "I am in display of second namespace" << endl;
    }
}

int main() {
start::display();
first::display();
 second::display();
 
}
