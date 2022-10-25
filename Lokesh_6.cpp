#include<iostream>
using namespace std;
int Selection_sort(){
	int i,j,count,temp,x,n[20];
	cout<<"Enter number of values:- ";
	cin>>count;
	for(i=0;i<count;i++){
		cin>>n[i];
	}
	for(i=0;i<count;i++){
		for(j=i+1;j<count;j++){
			if(n[i]>n[j]){
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	cout<<"Sorted list:- "<<endl;
	for(i=0;i<count;i++){
		cout<<n[i];
	}
	return 0;
}
int main(){
	Selection_sort();
}
