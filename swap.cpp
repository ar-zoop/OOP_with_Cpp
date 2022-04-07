#include <iostream>
using namespace std;
void swap_val(int a, int b){
	cout<<a<<b<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<a<<b<<endl;
}
void swap_ref(int *a, int *b){
	cout<<*a<<*b<<endl;
	int temp=*a;
	*a=*b;
	*b=temp;
	cout<<*a<<*b<<endl;
}
int main(){
	cout<<"Swap by value: ";
	swap_val(2,3);
	int a=5,b=6;
	cout<<"Swaf by refe:";
	swap_ref(&a,&b);
	cout<<a<<b<<endl;	
}
