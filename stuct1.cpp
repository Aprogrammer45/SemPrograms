#include<iostream>
using namespace std;
struct employee{
	string name, email;
	int phone_no;
};
int main(){
	struct employee s[4];
	for (int i=0;i<4;i++)
	{
		cout<<"Enter Name = ";
		cin>>s[i].name;
		cout<<"Enter Email = ";
		cin>>s[i].email;
		cout<<"Enter phone no = ";
		cin>>s[i].phone_no;
	}
	for(int i=0;i<4;i++)
	{
		cout<<"Entered Name"<<s[i].name<<endl;
		cout<<"Entered Email"<<s[i].email<<endl;
		cout<<"Entered Phone_No"<<s[i].phone_no<<endl;
	}
	return 0;
}
