#include<iostream>
using namespace std;
inline int multi(int a,int b){
	return a*b;
}
inline int divi(int a,int b){
	return a/b;
}


int main(){
	int c=multi(2,3);
	int d=divi(6,3);
	cout<<c<<endl<<d;
	
}
