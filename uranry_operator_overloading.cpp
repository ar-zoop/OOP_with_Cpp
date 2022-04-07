#include <iostream>
using namespace std;

typedef class subtraction{
	int z;
	public:
		void putdata(int a){
			z=a;
		}
		void getdata()
		{	cout<<"in the function:";
			cout<<z<<endl;
		}
	friend void operator -(subtraction &s);
		
}sub;

void operator -(sub &s){
	s.z=-s.z;
}

int main(){
	sub a,b,c;
	a.putdata(10);
	b.putdata(20);
	c.putdata(-30);
	-a;
	-b;
	-c;
	a.getdata();
	b.getdata();
	c.getdata();
	
	return 0;
}
