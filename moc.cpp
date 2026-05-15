#include<iostream>
using namespace std;
class A{
	public: 
	int a; //integer variable declared
	string b; //string variable declared
	void name(){
	cout<<"Enter Name= "<<endl;
	cin>>b;
}
    void num(){
	cout<<"Enter No."<<endl;
	cin>>a;
}
};
int main(){
	A a;
	a.name();
	a.num();
	cout<<"Your name is "<<a.b<<endl; //string member of class
	cout<<"You chose "<<a.a<<endl; //integer member of class
	return 0;
}
