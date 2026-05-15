#include<iostream>
using namespace std;
int main(){
	int i=0;
	int c=0;
	int a=1;
	int b=1;
	while(i<10){
		cout<<a<<endl;
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
