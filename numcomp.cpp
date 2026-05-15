#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 1st No."<<endl;
	cin>>a;
	cout<<"Enter 2nd No."<<endl;
	cin>>b;
	cout<<"Enter 3rd No."<<endl;
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"Greater No. is "<<a<<endl;
		}
		else{
			cout<<"Greater No. is "<<c<<endl;
		}
	}
	else{
		cout<<"Greater No. is "<<b<<endl;
	}
	return 0;
}
