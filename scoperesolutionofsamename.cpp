#include <iostream>
using namespace std;

class overload {
    int a,b;
    public:
     void getdata(int ,int);
    void print();
    void sum(); 
     int sum(int,int);

};
void overload::sum(){
int x,y;
cin>>x>>y;
int s=x+y;
cout<<s<<endl;;

}

int overload::sum(int x,int y){
a=x;
b=y;
int s=x+y;
return s;
}

int main() {
   overload E;

  E.sum();
  int z=E.sum(5,4);
  cout<<z;
     
    return 0;
}

