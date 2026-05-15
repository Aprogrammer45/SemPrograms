 b #include<iostream>
using namespace std;
void modify(int *a){
	*a=50;
	cout<<"Function Value="<<*a<<endl; //prints function value
}
int main(){
	int x=5;
	int *y=&x;
	cout<<"Before Value="<<x<<endl; //prints value before calling
	modify(y); //calling by reference using pointer
	cout<<"After Value="<<x<<endl; //prints value after calling
	return 0;
}
