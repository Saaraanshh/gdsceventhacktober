#include<iostream>
using namespace std;
int SI(int p,int r,int t){
	float SI;
	SI=(p*r*t)/100;
	cout<<SI;
}
int main(){
	int p,r,t;
	cout<<"enter p:-";
	cin>>p;
	cout<<"enter r:-";
	cin>>r;
	cout<<"enter t:-";
	cin>>t;
	SI(p,r,t);
}
