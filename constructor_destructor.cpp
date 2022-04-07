#include <iostream>
using namespace std;

class integer{
	int id;
	public:
		integer(){
		}
		integer(int a){
			id=a;
		}
		integer(integer &x){
			id=x.id;
		}
		void putdata(){
			cout<<id<<endl;
		}
		~integer(){
			cout<<"Object destroyed\n";
		}
};

int main(){
	integer a(100);
	integer b(a);
	integer c=a;
	integer d;
	d=a;
	{
		cout<<"1\n";
		integer e;
	}
	cout<<"main\n";
	a.putdata();
	b.putdata();
	c.putdata();
	d.putdata();
	{
		cout<<"2\n";
		integer f;
	}
	return 0;
}
