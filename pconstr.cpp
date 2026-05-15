#include<iostream>
using namespace std;
class A{
	public:
	A(int a, int b){
		cout<<"You entered "<<a<<b<<endl;	
	}
	
};
int main(){
	int i,j;
	cout<<"Enter Two Numbers="<<endl;
	cin>>i>>j;
	A(i,j);
	return 0;	
}
