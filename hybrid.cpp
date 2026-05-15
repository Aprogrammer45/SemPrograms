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
class Q{
	public:
	void displayQ(){
		cout<<"I am in class Q."<<endl;
	}
};
class C:public B,public Q{
	public:
	void displayC(){
		cout<<"I am in class C."<<endl;
	}
};
int main(){
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
	c.displayQ();
}
