#include <iostream>
using namespace std;

class compare{
	int num;
	public:
		get_data(){
			cout<<"Enter number: ";
			cin>>num;
		}

		friend max(compare,compare);
};

max(compare a, compare b) {
	if(a.num>b.num)
		cout<<a.num;
	else
		cout<<b.num;
}

int main(){
	compare x,y,z;
	x.get_data();
	y.get_data();
	max(x,y);
	return 0;
}
