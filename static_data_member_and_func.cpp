#include <iostream>
using namespace std;
class code{
	static int count;
	int a;
	public: 
		static showcount(){
			cout<<count<<endl;
		}
		void setcount(){
			
			a=++count;
		}
		void showcode(){
			cout<<a<<endl;
		}
};
int code::count;
int main(){
	code c1,c2,c3;
	c1.setcount();
	c2.setcount();
	c3.setcount();
	code c4;
	c4.setcount();
	c1.showcode();
	c2.showcode();
	c3.showcode();
	c4.showcode();
	code::showcount();
	c1.showcount();
	
	return 0;
}
