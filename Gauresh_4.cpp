#include<iostream>
using namespace std;
int main(){
	int i,ar[10];
	cout<<"Enter ten numbers";
	for(i=0;i<10;i++){
		cin>>ar[i];
	}
	int max=ar[0];
	for(i=0;i<10;i++){
		if(ar[i]>max){
			max=ar[i];
		}
	}
	cout<<"Maximum number is "<<max;
}
