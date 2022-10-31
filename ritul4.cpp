#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n){
	if(n==1){
		return n;
	}
	return n*fact(n-1);
}	
void main{
	clrscr();
	int n;
	cin>>n;
	int c = fact(n);
	cout<<c;
	getch();
}
