#include<iostream>
using namespace std;
int main(){
	int a[10][10],b[10][10],i,j,m,n ;
	cout<<"Enter number of rows and columns :- ";
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Enter value a["<<i<<"]["<<j<<"]:- ";
			cin>>a[i][j];
		}
	}
	cout<<"Matrix formed is:- "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}
	cout<<"Transposed matrix is:- "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=0;
			b[i][j]=a[j][i];
			cout<<b[i][j];
			cout<<"  ";
		}
		cout<<"\n";
	}
	
}
