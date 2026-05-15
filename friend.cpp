#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
	void ip1(){
		cout<<"Enter 1st No."<<endl;
		cin>>a;
	}
	friend void sum(A,B);
};
class B{
	int b;
	public:
	void ip2(){
		cout<<"Enter 2nd No."<<endl;
		cin>>b;
	}
	friend void sum(A,B);
};
void sum(A aa,B bb){
	cout<<"Sum="<<aa.a+bb.b;
	
}
int main(){
	A aa;
	B bb;
	aa.ip1();
	bb.ip2();
	sum(aa,bb);
	return 0;
}
