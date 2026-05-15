#include<iostream>
using namespace std;
class Account{
	public:
	Account(){
		cout<<"Transaction Details"<<endl;
	}
	void deposit(double damt){
		double bal=0.0;
		bal+=damt;
		cout<<"Balance="<<bal<<endl;
	}
	void withdraw(double wamt){
		double bal=0.0;
		bal-=wamt;
		cout<<"Balance="<<bal<<endl;	
	}
	void choice(char c, double a){
		switch(c){
			case 'W':
			withdraw(a);
			break;
			case 'D':
			deposit(a);
			break;
			default:
			cout<<"Invalid Choice"<<endl;	
		}
};
int main(){
	double amt;
	char ch;
	Account A;
	cout<<"Enter Transaction Amount="<<endl;
	cin>>amt;
	cout<<"Enter Choice\n Withdraw(W)\n Deposit(D)\n "<<endl;
	cin>>ch;
	A.choice(ch,amt);
	return 0;
}
