#include <iostream>
using namespace std;

class complex{
	int real,img;
	public: 
		void getdata(){
			cin>>real;
			cin>>img;
		}
		void putdata(){
			cout<<real<<"+"<<img<<"j";
		}
		friend complex addition(complex, complex);
};
complex addition(complex a, complex b){
	complex c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	return c;
}
int main(){
	complex a,b,c;
	a.getdata()	;
	b.getdata();
	c=addition(a,b);
	c.putdata();
	return 0;
}
