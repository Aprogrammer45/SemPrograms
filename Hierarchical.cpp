#include<iostream>
using namespace std;
class A{
	public:
	void displayA(){
		cout<<"I am in class A."<<endl;
	}
};
class B:public A{
	public:
	void displayB(){
		cout<<"I am in class B."<<endl;
	}
};
class C:public A{
	public:
	void displayC(){
		cout<<"I am in class C."<<endl;
	}
};
int main(){
	B b;
	C c;
	b.displayA();
	b.displayB();
	c.displayC();
}
