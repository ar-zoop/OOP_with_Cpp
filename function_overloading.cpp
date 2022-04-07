#include<iostream>
using namespace std;
int volume(int s){	
	return s*s*s;
}
float volume(float r, float h){
	return 3.14*r*r*h;}
	
int volume(int l, int b,int h){
	return l*b*h;}


int main(){
	int a=volume(3)	;
	cout<<a<<endl;
	float b=volume(1,2);
	cout<<b<<endl;
	int c=volume(1,2,3);
	cout<<c;
}
