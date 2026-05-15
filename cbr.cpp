#include<iostream>
using namespace std;
void modify(int &a){
	a=50;
	cout<<"Function Value="<<a<<endl;
}
int main(){
	int x=5;
	int y=&x;
	cout<<"Before Value="<<x<<endl; //value before calling
	modify(y); //calling by reference variable
	cout<<"After Value="<<x<<endl; //value after calling
	return 0;
}
