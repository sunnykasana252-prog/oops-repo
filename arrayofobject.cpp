#include <bits/stdc++.h>
using namespace std;

class Student {
    int r;
    string n;

public:
    void getdata(int, string);
    void display();
};

void Student::getdata(int x, string a) {
    r = x;
    n = a;
}

inline void Student::display() {
    cout << "Roll No: " << r << endl;
    cout << "Name: " << n << endl;
}

int main() {
    int x;
    string a;

    cin >> x >> a;

    Student s[2];
 for(int i=0;i<n;i++){}
    s.getdata(x, a);
    s.display();
}
    return 0;
}
