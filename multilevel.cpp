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
class C:public B{
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
	return 0;
}
