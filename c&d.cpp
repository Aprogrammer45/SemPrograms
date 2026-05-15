#include<iostream>
using namespace std;
class A{
	public:
	A(){
		cout<<"Constuctor is called."<<endl; //Constructor
	}
	~A(){
	cout<<"Deconstructor is called."<<endl; //Destructor
	} 
};
int main(){
	A a;
	return 0;
}
