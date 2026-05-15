#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cout<<"SIMPLE CALCULATOR"<<endl;
	cout<<"Enter 1st No. "<<endl;
	cin>>a;
	cout<<"Enter 2nd No. "<<endl;
	cin>>b; 
	cout<<"Enter Choice \n Addition(1) \nSubstraction(2) \nMultiplication(3)"<<endl;
	cin>>c;
	switch(c){
		case 1:
			d=a+b;
			cout<<"Addition="<<d<<endl;
			break;
		case 2:
			d=a-b;
			cout<<"Subtraction="<<d<<endl;
			break;
		case 3:
			d=a*b;
			cout<<"Multiplication="<<d<<endl;
			break;
		default:
			cout<<"Invalid Choice"<<endl;
	}
	return 0;
}
