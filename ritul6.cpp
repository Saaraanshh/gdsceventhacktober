#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three no.";
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<a<<" is greater than "<<b<<"&"<<c;
	}
	else if(b>c){
		cout<<b<<" is greater than "<<a<<"&"<<c;
	}
	else{
		cout<<c<<" is greater than "<<a<<"&"<<b;
	}
	return 0;
}
