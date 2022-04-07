#include<iostream>
using namespace std;
void volume(int s){
	return s*s*s;
}
void volume(float r, float h)
	return 3.14*r*r*h;
	
void volume(int l, int b,int h)
	return l*b*h;


int main(){
	int a=volume(3)	;
	cout<<a<<endl;
	float b=volume(1,2);
	cout<<b<<endl;
	int c=volume(1,2,3);
	cout<<c;
}
