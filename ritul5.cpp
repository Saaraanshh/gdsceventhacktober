#include<iostream>
using namespace std;

class test{
	int a;
	public:
		void getdata(int x){
			a=x;
		}
		void operator +(test t1){
			a=t1.a+1;
		}
		void putdata(){
			cout<<a;
		}
};
int main()
{
	test t1;
	t1.getdata(10);
	t1.putdata();
	cout<<endl;
	test t2;	
	t2+t1;
	t2.putdata();
}
