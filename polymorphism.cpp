#include<iostream>
using namespace std;
class A{
	public:
		int add(int a,int b){
			return a+b;
		} 
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	A aa;
	cout<<aa.add(10,20)<<endl;
	cout<<aa.add(5,4,6)<<endl;
}
