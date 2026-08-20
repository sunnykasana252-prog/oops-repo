// #include <bits/stdc++.h>
// using namespace std;
// class Example{
//     int a,b;
//     public:
//     void geta(int,int);
//     void sum(Example,Example);
// };
// void Example::geta(int a1,int b1){
//     a=a1;
//     b=b1;
// }
// void Example::sum(Example A,Example B){
//     int s=A.a+B.a;
//     int b=A.b+B.b;
//     cout<<"sum is "<<s<<" "<<b<<endl;
// }

// int main() {
// 	// your code goes here
// 	int a,b;
// 	cin>>a>>b;
// 	Example E1,E2,E3;
// 	E1.geta(a,b);
// 	E2.geta(a,b);
// 	E3.sum(E1,E2);
	
	
//  return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Example {
    int a, b;

public:
    void geta(int, int);
    void swap();
    void display();
};

void Example::geta(int a1, int b1) {
    a = a1;
    b = b1;
}

void Example::swap() {
    int temp = a;
    a = b;
    b = temp;
}

void Example::display() {
    cout << "swap is " << a << " " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;

    Example E1;

    E1.geta(a, b);
    E1.swap();
    E1.display();

    return 0;
}