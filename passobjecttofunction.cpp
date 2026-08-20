#include <bits/stdc++.h>
using namespace std;
class Example{
    int a;
    public:
    void geta(int);
    int sum(Example,Example);
};
void Example::geta(int a1){
    a=a1;
}
int Example::sum(Example A,Example B){
    int s=A.a+B.a;
    return s;
}

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	Example E1,E2,E3;
	E1.geta(a);
	E2.geta(b);
	int r=E3.sum(E1,E2);
	cout<<"sum is "<<r<<endl;

}