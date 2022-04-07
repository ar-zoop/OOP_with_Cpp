#include <iostream>
using namespace std;

class maths{
	int real,img;
	public:
		void putdata(int a){
			real=img=a;
		}
		void putdata(int a, int b){
			real=a;
			img=b;
		}
		void getdata()
		{	
			cout<<real<<"+ "<<img<<" j"<<endl;
		}
	friend maths operator +(maths &s, maths &q);	
	friend maths operator *(maths &s, maths &q);
		
};

maths operator *(maths &s, maths &q){
	maths r;
	r.real=s.real*q.real;
	r.img=s.img*q.img;
	return r;
}
maths operator +(maths &s, maths &q){
	maths r;
	r.real=s.real+q.real;
	r.img=s.img+q.img;
	return r;
}

int main(){
	maths a,b,c;
	a.putdata(10);
	b.putdata(2,3);
	c=a*b;
	c.getdata();
	c=a+b;
	c.getdata();
	
	return 0;
}
