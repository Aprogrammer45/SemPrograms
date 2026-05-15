#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("Student.txt",ios::out);
	char ch='y';
	int id,marks;
	while(ch=='y'||ch=='Y'){
		cout<<"Enter Student ID = ";
		cin>>id;
		cout<<"Enter Marks = ";
		cin>>marks;
		fout<<id<<marks;
		cout<<"Enter more records (y/n) = ";
		cin>>ch;
	}
	fout.close();
	return 0;
}
