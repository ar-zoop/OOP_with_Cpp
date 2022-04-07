#include <iostream>
using namespace std;

void swap_val(int a, int b){
	int temp=a;
	a=b;
	b=a;
	cout<<"After swapping: a= "<<a<<", b= "<<b<<endl;
}
void swap_ref(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}

main(){
	int a=10, b=20;
	cout<<"Before swapping by value: a= "<<a<<", b= "<<b<<endl;
	swap_val (a,b);
	a=40,b=50;
	cout<<"Before swapping by reference: a= "<<a<<", b= "<<b<<endl;
	swap_ref(&a,&b);
	cout<<"After swapping: a= "<<a<<", b= "<<b;
}

