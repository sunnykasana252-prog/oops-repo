#include <bits/stdc++.h>
using namespace std;
void sum_by_passbyvalue(int a,int b){
    int s=a+b;
    cout<< "sum after pass by value "<<s<<endl;
}
void sum_by_passbyreference(int &a,int &b){
    int s=a+b;
    cout<< "sum after pass by refrence "<<s<<endl;
}
void swap_by_passbyvalue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<" sawp after pass by value "<<a<<" "<<b<<endl;
    
}
void swap_by_passbyreference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<" sawp after pass by refrence "<<a<<" "<<b<<endl;
    
}


int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	sum_by_passbyvalue(a,b);
		sum_by_passbyreference(a,b);
		
	swap_by_passbyvalue(a,b);
	cout<<"value before  pass by refrence and after call pass by value call "<<a<<" "<<b<<endl;
		swap_by_passbyreference(a,b);
		cout<<"value after call pass by refrence "<<a<<" "<<b<<endl;
		

	
	

}
