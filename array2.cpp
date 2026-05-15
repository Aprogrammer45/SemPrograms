 #include<iostream>
using namespace std;
int main(){
	int a[2][3],i,j;
	cout<<"Enter the no. of elements=";
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cin>>
			a[i][j];
		}
	}
	cout<<"Array elements are=";
	for(i=0;i<2;i++){
		cout<<endl;
		for(j=0;j<3;j++){
			cout<<" "<<a[i][j];
		}
	}
	return 0;
}
