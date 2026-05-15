#include<iostream>
using namespace std;
void modify(int a){
	a=50;
	cout<<"Function Value="<<a<<endl; //prints function value
}
int main(){
	int x;
	x=5;
	cout<<"Before Value="<<x<<endl; //prints value before calling
	modify(x); //calling by value
	cout<<"After Value="<<x<<endl; //prints value after calling
	return 0;
}
