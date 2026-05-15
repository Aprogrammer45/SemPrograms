#include<iostream>
using namespace std;
int main(){
	try{
		int a,b,c;
		cout<<"Enter Numbers = "<<endl;
		cin>>a>>b;
		if (b!=0)
		{
			c=a/b;
			cout<<c;
		}
		else
		{
			throw b;
		}
	}
	catch(int b){
		cout<<"Division by 0"
		;
	}
	return 0;
}
